#include <bits/stdc++.h>
using namespace std; 

int r, c;
string tomato[252];
int dy[]={0,0,1,-1};
int dx[]={1,-1,0,0};
bool check[252][252];
int sheep, wolf, o, v;

void bfs(int y, int x){
	queue<pair<int, int> > q;
	check[y][x]=true;
	q.push({y, x});
	sheep=0;
	wolf=0;
	if (tomato[y][x]=='o') sheep++;
	else if (tomato[y][x]=='v') wolf++;
	
	while(!q.empty()){
		
		y=q.front().first;
		x=q.front().second;
		q.pop();
		for (int i=0;i<4;i++){
			int ny=y+dy[i], nx=x+dx[i];
			if (ny>=r || nx >=c || ny<0 || nx<0)
				continue;
			if (check[ny][nx] || tomato[ny][nx]=='#')continue;
			if (tomato[ny][nx]=='o') sheep++;
			else if (tomato[ny][nx]=='v') wolf++;
			check[ny][nx]=true;
			q.push({ny, nx});
		}	
	}
	if(sheep > wolf) o+=sheep;
	else v+=wolf;
}

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> r >> c;
	
	for (int i=0;i<r;i++){
		cin >> tomato[i];		
	}
	
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			if (tomato[i][j]!='#' && check[i][j]==false)
			bfs(i, j);
		}
	}
	cout <<o<<" "<<v;

		return 0;
}
