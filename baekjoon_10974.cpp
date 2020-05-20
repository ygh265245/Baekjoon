#include <bits/stdc++.h>
using namespace std;

bool check[10];
int num[10];
int n;

void f(int pos)
{
	
	if (pos==n){
		for (int i=0;i<n;i++)
			cout<<num[i]<<' ';
		cout <<'\n';
		
		return;
			}
			
	for (int i=1;i<=n;i++){
		
		if (check[i]==false){
			num[pos]=i;
			check[i]=true;
			f(pos+1);
			check[i]=false;
		}
		
		
		
			}
}

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	f(0);
	
	return 0;
}
