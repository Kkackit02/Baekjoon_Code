#include<iostream>
#include<string>
#include<stack>
#include<deque> 
#include<queue>

using namespace std;



int main(void)
{
	int T;
	stack<char> stack;
	
	queue<string> result;
	
	
	string Result[10000];
	
	
	cin>>T;
	
	for(int i = 0; i<T; i++)
	{
		deque<char> q;
		while(true)
		{
			char key;
			key = getchar();

			if(key == '\n')
			{
				break;
			}
			q.push_front(key);
		}
			
		
		if(q.size()%2 == 1) // 문자열이 홀수면 반드시 VPS가 아님.
		{
			cout<< i << " : " << q.size()<<endl;
			result.push("NO");
			continue;
		}
		
		while(!q.empty())
		{
			if(q.front() == q.back())
			{
				cout<<"front = " << q.front() << ", back = " << q.back() << endl;
				result.push("NO");
				break;
			}
			q.pop_front();
			q.pop_back();
			
		}
		if(q.empty())
		{
			result.push("YES");
		}
		
	}
	
	
	for(int i = 0; i<T; i++)
	{
		cout<<result.front()<<"\n";
		result.pop();
	}
	
	
    return 0;
	
}
