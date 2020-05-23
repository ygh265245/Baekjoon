#include <bits/stdc++.h>
using namespace std;

int n;

int main(int argc, char** argv) {
	cin >> n;
	int sum, i;
	for (i=1;i<=n;i++){
		sum=i;
		int p=i;
		while(p!=0){
			sum=sum+p%10;
			p=p/10;
		}
		if (n==sum)
			{
				cout<<i;
				return 0;
				}	}
				
		cout<<0;

	return 0;
}
