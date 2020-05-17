#include <bits/stdc++.h>
using namespace std; 

int m, n;
int tomato[1002][1002];
int dy[]={0,0,1,-1};
int dx[]={1,-1,0,0};
int notomato=0;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> m >> n;
	queue<pair<int, int> > q;
	
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin >> tomato[i][j];
			
			if (tomato[i][j]==1){
				q.push(make_pair(i, j));
				//q.push({i,j});
			}
			else if (tomato[i][j]==0){
				notomato++;
			}		
		}
	}
	
	if (notomato==0)
		{
			cout << 0;
			return 0;		}
			
	int cnt=0;
	
	while(!q.empty()){
		
		cnt++;
		
		int size=q.size();
		
		while(size--){
			int y=q.front().first, x=q.front().second;
			q.pop();
			
			for (int i=0;i<4;i++){
				
				int ny=y+dy[i], nx=x+dx[i];
				if (ny>=n || nx>=m || ny<0 || nx<0)
					continue;
				if (tomato[ny][nx]==0)
				{	
					notomato--;
					if (notomato==0){
						cout <<cnt;
						return 0;
					}
					tomato[ny][nx]=1;
					q.push({ny, nx});
			}
				
		}
		}
	
	}
	
	if (notomato!=0)
		cout << -1;
	else 	
		cout << cnt;
		
		return 0;
}
