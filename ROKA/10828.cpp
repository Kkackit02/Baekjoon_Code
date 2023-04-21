#include<iostream>
#include<string>
#include<stack>

using namespace std;



int main(void)
{
	int T;
	int value;
	stack<int> stack;
	string func;
	cin>>T;
	stack.push(2);
	for(int i = 0; i < T; i++)
	{
		cin>>func;
		cout<<"!"<<func<<"!"<<endl;
		if(func == "push")
		{
			scanf("%d" , &value);
			
			stack.push(value);
		}
		else if(func == "top")
		{
			if(stack.empty())
			{
				cout<<"-1"<<'\n';
			}
			else
			{
				cout<<stack.top()<<'\n';
			}
			
		}
		else if(func == "size")
		{
			cout<<stack.size()<<'\n'; 
		}
		else if(func == "empty")
		{
			if(stack.empty())
			{
				cout<<"1"<<'\n';
			}
			else
			{
				cout<<"0"<<'\n';
			}
		}
		else if(func == "pop");
		{
			stack.pop();
		}
	}
	
    return 0;
	
}
