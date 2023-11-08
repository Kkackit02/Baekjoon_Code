#include<bits/stdc++.h>

using namespace std;

bool comp(pair<int, double> a, pair<int, double> b) {
    if (a.second == b.second) a.first < b.first;
    return a.second > b.second;
}


int main(void)
{
	int T;
	cin>>T;
	
	int N;
	int a, b;
	int matrix[100000];
	
	int result = 1;//시험 1등은 무조건 선발되므로..
	
	
	
	
	for(int i = 0; i < T; i++)
	{
		cin>>N;
		
		result = 1; 
		vector<pair<int,int>> v;
		for(int j = 0; j < N; j++)
		{
			cin>>a>>b;
			v.push_back(make_pair(a,b));
			matrix[j] = j;
		}
		
		
		sort(v.begin(), v.end());
		
		for(int j = 1; j <= N; j++)
		{
			cout<<v[N-j].second<<":"<<v[N-j-1].second<<endl;
			
			if(v[N-j].second < v[N-j-1].second)
			{
				result++;
			}
		}
		cout<<result<<endl;
	}
	
	
	
}