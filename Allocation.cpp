#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,N,B;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>N;
		cin>>B;
		vector<int> A; 
		for(int j=0;j<N;j++)
		{
			int x;
			cin>>x;
			A.push_back(x);
		}
		int sum=0,p=0,k=0;
		sort(A.begin(),A.end());
		while(p<N)
		{
			if((A[p]+sum)<=B)
			{
				sum = sum + A[p];
				k++;		
			}
			p++;
		}
		cout<<"Case #"<<i+1<<": "<<k<<endl;
	}
	return 0;	
}
