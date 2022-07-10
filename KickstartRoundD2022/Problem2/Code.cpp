#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int32_t main()
{
   IOS

   #ifndef ONLINE_JUDGE 
    freopen("test_data\\test_set_2\\ts2_input.txt", "r", stdin); 
    freopen("test_data\\test_set_2\\output1.txt", "w", stdout); 
   #endif 

   int T;
   cin>>T;
   for(int t=0;t<T;t++)
   {
      int n;
      cin>>n;
      vector<int> a(n, 0);
      for(int i=0; i<n; i++)
      {
         cin>>a[i];
      }
      int m;
      cin>>m;
      vector<int> b(m, 0);
      for(int i=0; i<m; i++)
      {
         cin>>b[i];
      }

      int k;
      cin>>k;
      vector<int>resA;
      vector<int>resB;

      for(int i=0; i<k; i++)
      {
         int cnt = i + 1;
         int lf = cnt;
         int rt = 0;

         int maxX = 0;
         while(lf >= 0 && lf<=n)
         {
            int sum = 0;
            for(int j=0; j<lf; j++)
            {
               sum = sum + a[j];
            }
            for(int j=a.size()-rt; j<a.size(); j++)
            {
               sum = sum + a[j];
            }
            lf--;
            rt++;
            maxX = max(sum, maxX);
         }
         resA.push_back(maxX);
         // cout<<"1-"<<cnt<<","<<maxX<<"-------";
         
         lf = cnt;
         rt = 0;
         maxX = 0;
         while(lf >= 0 && lf<=m)
         {
            int sum = 0;
            for(int j=0; j<lf; j++)
            {
               sum = sum + b[j];
            }
            for(int j=b.size()-rt; j<b.size(); j++)
            {
               sum = sum + b[j];
            }
            lf--;
            rt++;
            maxX = max(sum, maxX);
         }
         resB.push_back(maxX);
         // cout<<"2-"<<cnt<<","<<maxX<<endl;
      }

      // for(auto X: resA)
      // {
      //    cout<<X<<", ";
      // }
      // cout<<endl;

      // for(auto X: resB)
      // {
      //    cout<<X<<", ";
      // }
      // cout<<endl;
      int res = 0;
      for(int i=0;i<k-1;i++)
      {
         int ans = resA[i] + resB[k-i-2];
         res = max(res, ans);
         // cout<<res<<"for:"<<resA[i]<<", "<<resB[k-i-1]<<endl;
      }
      res = max(res,max(resB[k-1], resA[k-1]));
      cout<<"Case #"<<t+1<<": "<<res<<endl;   
   }
   return 0;
}