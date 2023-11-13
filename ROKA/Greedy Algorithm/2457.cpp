#include<bits/stdc++.h>

using namespace std;


int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; 

int main(void)
{
	int N;
	cin>>N;
	vector<pair<pair<int,int> , pair<int,int>>> v;
	
	int a, b, c, d;
	for(int i = 0; i < N; i++)
	{
		cin>>a>>b>>c>>d;
		v.push_back(make_pair(make_pair(a,b),make_pair(c,d)));
		
	}
	
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i < N; i++)
	{
		cout<<v[i].first.first<<":"<<v[i].first.second<<"-";
		cout<<v[i].second.first<<":"<<v[i].second.second<<endl;
	}
	
	
	int longerMonths = 3;
	int longerDays = 1;
	int longerIdx = 0;
	
	int result = 0;
	
	
	int flag = 0;
	for(int i = 0; i<N; i++)
	{
		if(v[i].first.first < longerMonths)
		{
			flag = i;
		}
		else if(v[i].first.first == longerMonths)
		{
			if(v[i].first.second <= longerDays)
			{
				flag = i;	
			}
		}
	}
	
	
	
	vector <int> flower;
	for(int i = flag; i < N; i++)
	{
		for(int j = longerIdx; j < flag; j++)
		{
			if(v[j].second.first > longerMonths)
			{
				longerIdx = i;
				longerMonths = v[j].second.first;
				longerDays = v[j].second.second;
			}
			else if(v[j].second.first == longerMonths)
			{
				if(v[j].second.second >= longerDays)
				{
					longerIdx = i;
					longerMonths = v[j].second.first;
					longerDays = v[j].second.second;
				}
			}
		}
		flower.push_back(longerIdx);
		
	}
		
	for(int i = 0; i<flower.size(); i++)
	{
		
		cout<<flower[i]<<endl;
		
	}
	
	/*
	printf("%d : %d - %d : %d \n", 
		   v[longerIdx].first.first ,
		  v[longerIdx].first.second ,
		  v[longerIdx].second.first ,
		  v[longerIdx].second.second);
		  */
	
	cout<<result<<endl;
	
	
	
	
}