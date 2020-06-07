#include <bits/stdc++.h>
using namespace std;
//top-down
int dp[1000001];

int f(int n){
   if(dp[n]!=-1) return dp[n];
   else if(n==1) return dp[n]=0;
   int res = f(n-1)+1;
   if(n%2==0) res = min(res, f(n/2)+1);
   if(n%3==0) res = min(res, f(n/3)+1);
   return dp[n] = res;
}
int main(){
   ios_base::sync_with_stdio(NULL);
   cin.tie(NULL);
   cout.tie(NULL);
   
   int n; cin >> n;
   dp[1] = 0;
   for(int i=1; i<=n; i++){
      dp[i] = -1;
   }
   cout << f(n);
   return 0;
}
