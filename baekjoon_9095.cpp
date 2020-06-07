#include <bits/stdc++.h> //9095

using namespace std;

int dp[1000005];

int f(int n){
	if (dp[n]) return dp[n];
	if (n==1) return dp[1]=1;
	else if (n==2) return dp[2]=2;
	else if (n==3) return dp[3]=4;
	return dp[n]=f(n-1)+f(n-2)+f(n-3);
	//어차피 다들 나눠지는 끝엔 1, 2, 3. 이것들만 모아 더하면 ㅇ
	 
}

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >> n;
		cout <<f(n)<<"\n";
	}
	
	return 0;
}
