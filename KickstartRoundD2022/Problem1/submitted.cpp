#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
   IOS

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
         double sum = 0.00;
         if((n-m) == 0)
         {
          for(int i=0; i<n; i++)
            {
                sum = sum + v[i];
            }   
            cout<<"Case #"<<t+1<<": "<<sum<<endl;
         }else if((n-m) == 1)
         {
             sum = sum + (v[0] + v[1]) / 2;
             for(int i=2; i<n; i++)
                {
                    sum = sum + v[i];
                }   
            cout<<"Case #"<<t+1<<": "<<sum<<endl;
         }else
         {
            if((n-m) % 2 == 0)
            {
               sum = sum + v[(n-m) / 2];            
            }else
            {
               sum = sum + ((v[(n-m)/2] + v[(n-m+1)/2])/2);
            }  
            for(int i=n-m + 1; i<n; i++)
            {
               sum = sum + v[i];
            }       
            cout<<"Case #"<<t+1<<": "<<sum<<endl;   
         }
         
   }
   return 0;
}