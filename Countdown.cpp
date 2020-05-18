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
	    int a,n;
	    cin>>a>>n;
	    
	    vector<int> v;
	    for(int i=0;i<a;i++)
	    {
	    	int x;
	    	cin>>x;
	    	v.push_back(x);
		}
		int cnt=0,cr=n;
		for(int i=0;i<a;i++)
		{
			if(v[i]==cr)
			{
				if(cr==1)
				{
					cnt++;
					cr=n;
				}else
				{
					cr--;
				}
			}else if(v[i]==n)
			{	
			    cr = n-1;
			}else
			{
				cr=n;
			}
		}
		cout<<"Case #"<<t+1<<": "<<cnt<<endl;
	}	
	return 0;
}
