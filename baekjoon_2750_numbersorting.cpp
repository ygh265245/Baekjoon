#include <bits/stdc++.h>
using namespace std;

int num[1001];

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, temp;
	cin >> n;
	for (int i=0;i<n;i++)
		cin >>num[i];
		
	for (int k=n-1;k>0;k--) {
	
		for (int j=0;j<k;j++){	
				if (num[j]>num[j+1]){
					temp=num[j];
					num[j]=num[j+1];
					num[j+1]=temp;
			}
			
	}
}
	for (int i=0;i<n;i++)
		cout<<num[i]<<'\n';
	return 0;
}
