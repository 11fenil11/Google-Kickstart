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
		int n,d,cnt=0;
		cin>>n>>d;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int da=d; 
		for(int i=n-1;i>=0;i--)
		{
			da = (da/a[i])*a[i];
		}
		
	    cout<<"Case #"<<t+1<<": "<<da<<endl;
	}
	
	return 0;
}

