#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int32_t main()
{
    IOS
    
    int T;
    cin>>T;
    for(int t=0;t<T;t++){
        int r,a,b;
        double sum = 0;
        cin>>r>>a>>b;
        
        sum = sum + ((3.14)*(r)*(r));
        
		while(r != 0)
        {	
			r = r * a;
			sum = sum + ((3.14)*(r)*(r));
			r = r / b;
			sum = sum + ((3.14)*(r)*(r));
		}
        cout<<"Case #"<<t+1<<": "<<cnt<<"\n";     
    }
    return 0;
}

