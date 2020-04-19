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
		string str,res="";
		cin>>str;
		int r=1,c=1;
		

//		cout<<str<<endl;
		int act=1,active=0;
		for(int i=0;i<str.length();i++)
		{			
			if(str[i] == 'N')
			{
				if(r==1)
				{
					r = 1000000000;	
				}else
				{
					r = r - 1;	
				}
			}else if(str[i] == 'S')
			{
				if(r==1000000000)
				{
					r = 1;	
				}else
				{
					r = r + 1;	
				}
			}else if(str[i] == 'E')
			{
				if(c==1000000000)
				{
					c = 1;	
				}else
				{
					c = c + 1;
				}	
			}else if(str[i] == 'W')
			{
				if(c==1)
				{
					c = 1000000000;	
				}else
				{
					c = c - 1;	
				}
			}else
			{
				int ct = str[i] - '0';
				string pre = str.substr(0,i);
				int cn=0,j;
				for(j = i+1;j<str.length();j++)
				{
					if(str[j] == '(')
					{
						cn++;
					}
					if(str[j] == ')')
					{
						cn--;
					}
					if(cn==0)
					{
						break;
					}
				}
//				cout<<"J->"<<j<<"Str[j]"<<str[j]<<endl;
				string mid;
				string post = str.substr(j+1,str.length());
//				cout<<"Pre->"<<pre<<endl;
//				cout<<"Mid->"<<mid<<endl;
//				cout<<"Post->"<<post<<endl;
				while(ct>0)
				{
					mid = mid +  str.substr(i+2,j-i-2);
					ct--;
				}
				str = pre + mid + post;
//				cout<<"str->>"<<str<<endl;
				i=i-1;
//				break; //------------------------------------------
			} 
		}
//		cout<<"str->>"<<str<<endl;
	    cout<<"Case #"<<t+1<<": "<<c<<" "<<r<<endl;
	}	
	return 0;
}
