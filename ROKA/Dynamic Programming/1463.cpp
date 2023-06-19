#include <bits/stdc++.h>

using namespace std;

//2748 피보나치 수 2
// 90의 결과는 
// 2880067194370816120이므로
// int의 범위를 넘어서니 long을 사용하자

//그리고 동적계획법을 쓰자!
//연산 회수가 엄청 차이난다~
long memo[1000000] {};
int N;
int count;
int result = 10000;
long func(long n, int count)
{
	if(memo[n] != 0)
	{
		return memo[n];
	}
	
	
	if(n == 1)
	{
		if(count < result)
		{
			result = count;
		}
		return count;
	}
	if(n < 1)
	{
		return -1;
	}
	else
	{
		count++;
		if(n%3 == 0)
		{
			func(n/3, count);
		}
		if(n%2 == 0)
		{
			func(n/2, count);
		}
		func(n-1, count);
	}
	return 0;
	
}


int main(void)
{
	int N = 0;
	cin>>N;
	
	func(N, 0);
	cout<<result<<'\n';
	
	
}

