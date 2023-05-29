#include <bits/stdc++.h>

using namespace std;


#define MAX 100
int graph[MAX+1][MAX+1];
int floodingLand[MAX+1][MAX+1];
bool visited[MAX+1][MAX+1];
queue<pair<int, int>> q;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int  N;

int numberOfLand = 0;

void bfs(int x, int y )
{
	
	
	
	q.push({x,y});
	
	visited[x][y] = true;
	
	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
	
		
		for(int i = 0; i<4; i++)
		{
			int next_x = x + dx[i];
			int next_y = y + dy[i];
			
		
			if(next_x < 1 || next_x > N || next_y <1 || next_y > N)
			{
				continue;
			}
			if(graph[next_x][next_y] && visited[next_x][next_y] == false)
			{
				visited[next_x][next_y] = true;
				//graph[next_x][next_y] = graph[x][y] + 1;
				q.push({next_x, next_y});	
			}
		}
	}
}



int main(void)
{
	
	int maxWaterLevel = -1;
	cin>>N;
	
	for(int i =1; i< N+1; i++)
	{
		for(int j =1; j<N+1; j++)
		{
			scanf("%1d" , &graph[i][j]);
			maxWaterLevel = max(graph[i][j], maxWaterLevel);
		}
	}
	
	memset(visited, false, sizeof(visited));
	
	int temp = 0;
	
	
	for(int h = 2; h < maxWaterLevel+1; h++)
	{
		temp = 0;
		for (int i = 1; i < N+1; i++) 
		{
            for (int j = 1; j < N+1; j++) 
			{
                if (graph[i][j] < h) 
				{
                    floodingLand[i][j] = 0;
                }
                else 
				{
                    floodingLand[i][j] = 1;
                }
            }
        }
	
	
		
		for (int i = 1; i < N+1; i++) 
		{
			for (int j = 1; j < N+1; j++) 
			{
				//cout<<floodingLand[i][j];
				if(floodingLand[i][j] && !visited[i][j])
				{
					bfs(i,j);
					temp++;
					cout<<i<<":"<<j<<":"<<temp<<endl;
				}
			}
			//cout<<endl;
		}	
		if(temp > numberOfLand)
		{
			numberOfLand = temp;
			cout<<numberOfLand<<endl;
		}
		
		memset(visited, false, sizeof(visited));
		memset(floodingLand, 0, sizeof(floodingLand));
	}
		
	cout<<numberOfLand<<'\n';
	
	
	
}
