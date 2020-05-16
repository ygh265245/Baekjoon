#include <bits/stdc++.h>
using namespace std;

int n;
int graph[104][104];
bool check[104][104];

void dfs(int y, int x){
	check[y][x]=true;
	for (int i=1;i<=n;i++){
		if (x==i)
			 continue;
		if (graph[x][i]==1 && check[y][i]==false)
		{	
			graph[y][i]=1;
			dfs(y, i);
			}
			
	}	
	
}

int main()
{
	cin >> n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin >>graph[i][j];
		}
	}
	
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if (i==j)
				continue;
			if (check[i][j]==false && graph[i][j]==1){
				dfs(i, j);
			}
		}
	}
	
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++)
			cout <<graph[i][j]<<" ";
		cout <<"\n";
	}



	
	return 0;
}
