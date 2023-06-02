#include <bits/stdc++.h>

using namespace std;
//반례모음 https://www.acmicpc.net/board/view/77198

vector<int> vec[200001];

int flaged[200001];

bool visited[200001];

bool result[6];

int flag = 1;
int K;
int order = 0;

int bfs(int value)
{
	queue<int> queue;
	
	queue.push(value);
	visited[value] = flag;
	
	
	
	while(!queue.empty())
	{
		int x = queue.front();
		queue.pop();
		flaged[x] = flag;
		//cout<<"1. x = "<<x<<": flag = "<<flag<<endl;
		
		
		
		for(int i = 0; i< vec[x].size(); i++)
		{
			
			//cout<<"2. "<<"i = "<<i<<" vec[x][i] : "<<vec[x][i]<<endl;
			
			if(visited[vec[x][i]] == true && flaged[vec[x][i]] == flag)
			{
				result[order] = false;
				//cout<<"3. "<<"flaged[vec[x][i]] : " << flaged[vec[x][i]] <<" : flag = " << flag<<endl;
				return 0;
			}
			if(!visited[vec[x][i]])
			{
				
				queue.push(vec[x][i]);
				//cout<<"4. "<<"ADD vec[x][i] : "<<vec[x][i]<<endl;
				visited[vec[x][i]] = true;
				flaged[vec[x][i]] = flag;
			}
			
		}
		if(flag == 1)
		{
			flag = 2;
		}
		else
		{
			flag = 1;
		}
	}
	
	result[order] = true;
	return 0;
}


bool compare(int a, int b)
{
	return a>b;
}


int main(void)
{

	cin>>K;
	
	int a,b;
	int V,E;
	for(int i = 0; i<K; i++)
	{
		
		cin>>V>>E;
		
		for(int i = 0; i < E; i++)
		{
			cin>>a>>b;
			vec[a].push_back(b);
			vec[b].push_back(a);
		}
		
		for (int i = 0; i < E; i++)
		{
			sort(vec[i].begin(), vec[i].end());
		}
		
		memset(visited, 0, sizeof(visited));
		vec->clear();
		memset(flaged, 0, sizeof(flaged));
		flag = 1;
		order = i;
		bfs(1);
			
	}
	
	
	
	for(int i = 0; i<K; i++)
	{
		if(result[i] == true)
		{
			printf("YES\n");
		}
		else 
		{
			printf("NO\n");
		}
	}
	
	return 0;
	
}