#include <bits/stdc++.h>
using namespace std;

int rgb[1005][3], dp[1005][3];

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> rgb[i][0]>>rgb[i][1]>>rgb[i][2];

	}
	dp[0][0]=rgb[0][0];
	dp[0][1]=rgb[0][1];
	dp[0][2]=rgb[0][2];
	
	for (int i=1;i<n;i++){
		dp[i][0]=min(dp[i-1][1], dp[i-1][2])+rgb[i][0];
		dp[i][1]=min(dp[i-1][0], dp[i-1][2])+rgb[i][1];
		dp[i][2]=min(dp[i-1][1], dp[i-1][0]) +rgb[i][2];
		
	}
	int answer=min(dp[n-1][0], min(dp[n-1][1], dp[n-1][2]));//3개 비교할떄 이생각  
	cout <<answer;
		return 0;
}
