#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define int long long
using namespace std;

int main()
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
         int n, x, y;
         cin>>n>>x>>y;
         vector<int> v;
         int sum = (n*(n+1))/2;
         int cnt=0;

         int Ea;
         if( (x*sum) % (x + y) != 0)
         {
            cout<<"\nCase #"<<t+1<<": IMPOSSIBLE";
         }
         else
         {
            cout<<"\nCase #"<<t+1<<": POSSIBLE"<<endl;
            Ea = (x*sum) / (x + y);

            while(Ea > 0)
            {             
               if(Ea>=n)
               {
                  Ea = Ea - n;                  
                  v.push_back(n);
                  cnt++;
                  n--;
               }else
               {
                  v.push_back(Ea);
                  Ea = Ea - Ea;                  
                  cnt++;
               }
            }
            cout<<cnt<<endl;
            for(int i=0;i<v.size();i++)
            {
               cout<<v[i]<<" ";
            }         
         }

   }
   return 0;
}