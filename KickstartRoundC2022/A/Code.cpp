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
      int n;
      cin>>n;
      string str;
      cin>>str;
      int upp = 1, loww = 1, digi = 1, spc = 1;
      for(int i=0;i<str.length();i++)
      {
         if(int(str[i]) >= 65 && int(str[i]) <= 90 )
         {
            upp--;
         }else if(int(str[i]) >= 97 && int(str[i]) <= 122 )
         {
            loww--;
         }else if(int(str[i]) >= 48 && int(str[i]) <= 57 )
         {
            digi--;
         }else if(int(str[i]) == 35 || int(str[i]) == 42 || int(str[i]) == 64 || int(str[i]) == 38)
         {
            spc--;
         }
      }
      if(upp>0)
      {
         str = str + "A";
      }
      if(loww>0)
      {
         str = str + "a";
      }
      if(digi>0)
      {
         str = str + "9";
      }
      if(spc>0)
      {
         str = str + "@";
      }
      cout<<":"<<str<<":"<<str.length();
      
      while(str.length() < 7)
      {
         str = str + "A";
      }
      cout<<"Case #"<<t+1<<": "<<str<<endl;
   }
   return 0;
}