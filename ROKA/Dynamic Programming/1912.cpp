#include <bits/stdc++.h>

using namespace std;

int input[100001];
int memo[100001];


// 아 쒯...................................... -를 먹고 다음 연속을 가져가야 이득인 경우가 있네........

int main(void)
{
	int T = 0;
	int result = -1001;
	cin>>T;
	
	for(int i = 0; i<T; i++)
	{
		cin>>input[i];
	}
	
	int count = 0;
	
	for(int i =0; i<T; i++)
	{
		
		if(input[i] < 0)
		{
			if(memo[count] != 0)
			{
				count++;
			}
			memo[count] = input[i];
			count++;
			
		}
		else
		{
			memo[count] += input[i];
		}
	}
	
	for(int i = 0; i<count; i++)
	{
		printf("i = %d , memo[i] = %d > result = %d\n",i, memo[i] , result);
		if(memo[i] > result)
		{
			result = memo[i];
		}
	}
	
	cout<<result<<endl;
	
	return 0;
}
