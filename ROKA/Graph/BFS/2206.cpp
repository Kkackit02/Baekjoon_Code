#include <bits/stdc++.h>

using namespace std;

//https://www.acmicpc.net/board/view/27386

int graph[1001][1001];
queue<pair<int,int>> q;
bool visited[1001][1001][2];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int N, M;

void bfs()
{
	
	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		printf("%d :%d \n", x,y);
		q.pop();
		visited[x][y] = true;
		for(int i = 0; i<4; i++)
		{
			int next_x = x + dx[i];
			int next_y = y + dy[i];
			
			
			if(next_x < 0 || next_x >= N || next_y < 0 || next_y >= M)
			{
				continue;
			}
			cout<<visited[next_x][next_y]<<endl;
			if(visited[next_x][next_y] == false && graph[next_x][next_y] == 0)
			{
				printf("!!");
				visited[next_x][next_y] = true;
				graph[next_x][next_y] = graph[x][y] + 1;
				q.push({next_x, next_y});
			}
		}
	}
	
}



int main(void)
{
	cin>>N>>M;
	int A, B;
	
	for(int i =0; i< N; i++)
	{
		for(int j =0; j<M; j++)
		{
			scanf("%1d" , &graph[i][j]);
	
			
		}
	}
	
	memset(visited, false, sizeof(visited));
	
	
	q.push({0,0});
	
	
	bfs();
	printf("\n\n\n\n");
	int result = 0;
	
	
	if(graph[N][M] == 0)
	{
		printf("%d \n", -1);
	}
	else
	{
		cout<<graph[N][M] + 1<<'\n';
	}
	
	
	for(int i =0; i< N; i++)
	{
		for(int j =0; j<M; j++)
		{
			printf("%d", graph[i][j]);
		}
		printf("\n");
	}
	
	

	
	
}
