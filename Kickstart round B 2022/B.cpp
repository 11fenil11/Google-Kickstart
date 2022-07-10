#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;


vector<int> resu;
int cnt = 0;

int reverse(int x) {
    
    long long dx = (long long)abs(x);
    long long revX = 0;
    while(dx != 0)
    {
        revX = (revX * 10) + (dx%10);
        dx = dx / 10;
    }
    return revX;
}

void factors(int num) {
   int i;
   for(i=1; i <= num; i++) {
   	
      if (num % i == 0)
      {
//    	cout<<i<<", ";
    	if(reverse(i) == i)
    	{
    		cnt++;
		}
	  }
   }
}


int main()
{
    IOS
    
    int T;
    cin>>T;
    for(int t=0;t<T;t++){
        int a;
        cnt = 0;
        cin>>a;
		factors(a);
        cout<<"Case #"<<t+1<<": "<<cnt<<"\n";     
    }
    return 0;
}

