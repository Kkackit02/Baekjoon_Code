#include <bits/stdc++.h>

using namespace std;



int main(void)
{
	int N = 0;
	cin>>N;
	
	int stair[301];
	stair[0] = 0;
	for(int i = 1; i <= N; i++)
	{
		cin>>stair[i];
	}
	
	vector<int> memo(N+1);
	
	memo[0] = stair[0];
	memo[1] = stair[0] + stair[1];
	int streak = 1;
	for(int i = 1; i<= N; i++)
	{
		if(memo[i-1] > memo[i-2])
		{
			streak++;
			if(streak == 3)
			{
				streak = 1;	
				memo[i] = memo[i-3] + stair[i];	
			}
			else
			{
				memo[i] = memo[i-1] + stair[i];	
			}
			
		}
		else 
		{
			streak = 1;	
			memo[i] = memo[i-2] + stair[i];	
		}
		
	}
	
	cout<<memo[N]<<"\n";
	
	
}

