#include <bits/stdc++.h>
using namespace std;

int dp[1000005];

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	dp[1]=0; //바텀업 방식 
	dp[2]=1;
	dp[3]=1;
	for (int i=4;i<=n;i++){
		
		int res=i;
		if (i%3 == 0) res=min(res, dp[i/3]+1);
		if (i%2 == 0) res=min(res, dp[i/2]+1);
		res=min(res, dp[i-1]+1);
		dp[i]=res; 
	}	
	cout <<dp[n];
	return 0;
}
