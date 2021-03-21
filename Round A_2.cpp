#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

map<pair<int,int>,int> u,d,l,rig;

//function to return values of segments up

int upVal(vector<vector<int> > v, int x, int y)
{
	int knt=0;
	for(int k = x; k>=0 ;k--)
	{
		if(u[{k,y}]>0)
		{
			knt = knt + u[{k,y}];
			return knt;
		}
		if(v[k][y] == 1)
		{
			knt++;
		}else
		{
			return knt;
		}
	}
	return knt;
}

//function to return values of segments down

int downVal(vector<vector<int> > v, int x, int y)
{
	int knt=0;
	for(int k = x; k<v.size() ;k++)
	{
		if(d[{k,y}]>0)
		{
			knt = knt + d[{k,y}];
			return knt;
		}
		if(v[k][y] == 1)
		{
			knt++;
		}else
		{
			return knt;
		}
	}
	return knt;
}
//function to return values of segments right

int rightVal(vector<vector<int> > v, int x, int y)
{
	int knt=0;
	for(int k = y; k<v[x].size() ;k++)
	{
		if(rig[{x,k}]>0)
		{
			knt = knt + rig[{x,k}];
			return knt;
		}
		if(v[x][k] == 1)
		{
			knt++;
		}else
		{
			return knt;
		}
	}
	return knt;
}
//function to return values of segments left

int leftVal(vector<vector<int> > v, int x, int y)
{
	int knt=0;
	for(int k = y; k>=0 ;k--)
	{
		if(l[{x,k}]>0)
		{
			knt = knt + l[{x,k}];
			return knt;
		}
		if(v[x][k] == 1)
		{
			knt++;
		}else
		{
			return knt;
		}
	}
	return knt;
}

int cntVal(int up,int rgt)
{
	int res = 0;
	if(up>=2 && rgt>=2)
	{
		if(up>rgt && up>=4)
		{
			if((up/2 <= rgt)) // 4,3  3,2 16,9  16,15
			{
				res = (up/2)-1 + (rgt/2)-1;
			}else //8,2 8,3 16,4 6,2 by two karta ochu hoy value
			{
				res = rgt - 1 + (rgt/2)-1;
			}	
		}else if(rgt>up && rgt>=4)
		{
			if((rgt/2 <= up) && (rgt>=4))
			{
				res = (rgt/2)-1 + (up/2)-1;
			}else
			{
				res = up - 1 + (up/2)-1;
			}
		}else if(up>=4 || rgt>=4)
		{
			res = 2 * ((up/2)-1);
		}
	}
	return res;
}

int32_t main()
{
	IOS
	#ifndef ONLINE_JUDGE 
    freopen("InFile.txt", "r", stdin); 
    freopen("OutFile.txt", "w", stdout); 
	#endif 
	
	int T;
	cin>>T;
	for(int t=0;t<T;t++){
		int r,c,cnt=0;cin>>r>>c;
//		int a[r][c];
		vector<vector<int> >a;
		a.resize(r);
//		map<pair<int,int>,int> u,d,l,r;
		for(int i=0;i<r;i++)
		{
			a[i].resize(c);
			for(int j=0;j<c;j++)
			{
				cin>>a[i][j];
			}
		}
		
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				if(a[i][j] == 1)
				{
					int up = upVal(a,i,j);
					u[{i,j}] = up;
					int rgt = rightVal(a,i,j);
					rig[{i,j}] = rgt;
					int down = downVal(a,i,j);
					d[{i,j}] = down;
					int lft = leftVal(a,i,j);
					l[{i,j}] = lft;
					
					cnt = cnt + cntVal(up,rgt) + cntVal(rgt,down) + cntVal(down,lft) + cntVal(lft,up) ;
				}
			}
		}
	    cout<<"Case #"<<t+1<<": "<<cnt<<endl;
	    
		u.clear();
		d.clear();
		rig.clear();
		l.clear();
	}
	return 0;
}

