#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

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
		int n,k,cnt=0;cin>>n>>k;
		string str;
		cin>>str;
		for(int i=0;i<n/2;i++)
		{
			if(str[i] != str[(n-i-1)])
			{
				cnt++;
			}
		}
	    cout<<"Case #"<<t+1<<": "<<abs(k-cnt)<<endl;
	    
	}
	return 0;
}

