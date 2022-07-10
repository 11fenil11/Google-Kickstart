#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int32_t main()
{
   IOS

   #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output1.txt", "w", stdout); 
   #endif 

   int T;
   cin>>T;
   for(int t=0;t<T;t++)
   {
         int n,m;
         cin>>n>>m;
         vector<double> v(n,0);
         for(int i=0; i<n; i++)
         {
            cin>>v[i];
         }
         sort(v.begin(),v.end());
         
         if(n==1)
         {
            cout<<"Case #"<<t+1<<": "<<fixed<<setprecision(6)<<v[0]<<endl;   
         }else
         {
            double sum = 0.0;
            if((n-m) % 2 == 0)
            {
               sum = v[(n-m) / 2];            
            }else
            {
               sum = ((v[(n-m) / 2] + v[(n-m+1)/2])/2.0);
            }  
            for(int i=(n-m+1); i<n; i++)
            {
               sum = sum + v[i];
            }       
            cout<<"Case #"<<t+1<<": "<<fixed<<setprecision(6)<<sum<<endl;   
         }
   }
   return 0;
}
