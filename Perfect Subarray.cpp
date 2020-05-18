#include <iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main()
{
	IOS
	int T;
	cin>>T;
	for(int t=0;t<T;t++)
	{
	    int n;
	    cin>>n;
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	    	int x;
	    	cin>>x;
	    	v.push_back(x);
		}
		map<int,int> m;
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			int sum = 0;
			for(int j=i;j<n;j++)
			{
				sum = sum + v[j];
				int ak = sum%10;
				if(ak == 2 || ak == 3 || ak == 7 )
				{
				    
				}else if(sqrt(sum)==floor(sqrt(sum)))
				{
					m[sum] = 1;
					cnt++;
				}
			}
		}
		cout<<"Case #"<<t+1<<": "<<cnt<<endl;
	}	
	return 0;
}
