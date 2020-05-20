#include <bits/stdc++.h>
using namespace std;

int num[10];
bool check[10];
int n, m;


void f(int pos, int k){
	
	if (m==pos){
		for (int i=0;i<m;i++)
			cout<<num[i]<<' ';
		cout << '\n';
	}
	
	for (int i=k;i<n;i++){
		
		if (check[i]==false){
			check[i]=true;
			num[pos]=i+1;
			f(pos+1, i+1);
			check[i]=false;
		}
}
	
}


int main(int argc, char** argv) {
	
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL); 
	cin >> n >>m;
	f(0, 0);
	return 0;
}
