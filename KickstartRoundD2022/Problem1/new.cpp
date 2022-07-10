#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int32_t main()
{
   IOS

   #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
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
         // sort(v.begin(),v.end());
         
         if(n==m)
         {
            double sum = 0.0;
            for(int i=0; i<n ;i++)
            {
               sum = sum + v[i];
            }
            cout<<"Case #"<<t+1<<": "<<sum<<endl;
         }else
         {
            double sum = 0.0;
            double maxX = 0;
            for(int i=0; i<n; i++)
            {
               sum = sum + v[i];
            }
            for(int i=0; i<n-1; i++)
            {
               for(int j=i+1; j<n; j++)
               {
                  double temp = sum - (v[i]+v[j]);
                  double p = (v[i] + v[j])/2.0;
                  if((temp+p)>maxX)
                  {
                     maxX = temp + p;
                  }
               }
            }
            cout<<"Case #"<<t+1<<": "<<maxX<<endl;              
         }
         
   }
   return 0;
}