#include <bits/stdc++.h>
using namespace std;

int t, m, n, k;
int baechu[53][53];
bool check[53][53];
int ddx[]={0,0,-1,1};
int ddy[]={1,-1,0,0};

void bfs(int y, int x){
	
	check[y][x]=true;

	for (int l=0;l<4;l++){
		int nx=x+ddx[l];
		int ny=y+ddy[l];
		if (ny >=n || nx>=m || nx<0 || ny<0)
			continue;
		if (check[ny][nx]==true || baechu[ny][nx]==0)
			continue;
		check[ny][nx]=true;
		bfs(ny, nx);
	}
}

int main() {
	
	cin >> t;
	
	while (t--){
		for (int i=0;i<53;i++)
			for (int j=0;j<53;j++)
				{
					check[i][j]=false;
					baechu[i][j]=0;
				}
				
		cin >> m >> n>> k;
		
				
		while(k--){
			int cx, cy;
			cin >>cx >>cy;
			baechu[cy][cx]=1;
		}

		
		int count=0;
		
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				
			if (baechu[i][j]==1 && check[i][j]==false){
				bfs(i, j);
				count++;
			}
				
			}
		}
		
		cout <<count<<"\n";
		
	}
	
	
	
	
	return 0;
}
