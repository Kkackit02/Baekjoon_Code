#include <bits/stdc++.h>

using namespace std;
//2442 별찍기 5


int main(void)
{
	int N;
	
	cin>>N;
	
	for(int i = 0; i< N; i++)
	{
		for(int k = 0; k < i; k++)
		{
			cout<<" ";
		}	
		for(int k = 0; k < ((2*N-1)-2*i); k++)
		{
			cout<<"*";
		}
		
		

		cout<<'\n';
	}
	
}
