#include <bits/stdc++.h>

using namespace std;



int main(void)
{
	int n = 0;
	cin>>n;
	stack<int> stack;
	queue<char> result;
	int T = 0;
	
	int count = 1;
	for(int i = 0; i<n; i++)
	{
		cin>>T;
		while(true)
		{
			if(count <= T)
			{
				stack.push(count);
				count++;
				result.push('+');
			}
			
			
			if(stack.top() == T)
			{
				stack.pop();
				result.push('-');
				break;
			}
			
			q
			
			
			
		}
		
		
		
	}
	
	int len = result.size();
	
	if(!stack.empty())
	{
		cout<<"NO"<<endl;
	}
	else
	{
		for(int i =0; i< len; i++)
		{
			cout<<result.front()<<endl;
			result.pop();
		}
	}
	
}
