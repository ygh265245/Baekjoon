#include <bits/stdc++.h>
using namespace std;

int num[26][26];
int n;
int cnt;
int dcnt; 
bool check[26][26];
const int dy[4]={-1,1,0,0};
const int dx[4]={0,0,-1,1};

void dfs(int y, int x){
	cnt++;
	check[y][x]=true;
	
	for (int i=0;i<4;i++){
		int ny=y+dy[i], nx=x+dx[i];
		if (ny<n && nx < n && ny>=0 &&nx>=0 && check[ny][nx]==false && num[ny][nx]==1){
			dfs(ny, nx);
		}
	}
	//if문 배열을 벗어나는지  &&  이미 지나왔는지 check 
}

int main(int argc, char** argv) {
	scanf("%d", &n);
	
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			scanf("%1d", &num[i][j]);
		}
	}
	
	vector<int> v;
	
	for (int i=0;i<n;i++){
		for (int j=0;j<n;++j){
			
			if (check[i][j]==false && num[i][j]==1)
		{
			dcnt++;
			cnt=0;
			dfs(i, j);
			v.push_back(cnt);//배열
			 
		}
			
		}
		
		
	}
	sort(v.begin(), v.end());
	printf("%d\n", dcnt);
	for (int i=0;i<v.size();i++)
		printf("%d\n", v[i]);
		
		
	return 0;
}
