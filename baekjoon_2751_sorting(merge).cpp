#include <bits/stdc++.h>
using namespace std;

int num[1000001];
int tmp[1000001];

void merge(int p, int q, int r){
	int pos=p, posa=p, posb=q+1;
	while(posa<=q && posb<=r){
		if(num[posa]<num[posb])
			tmp[pos++]=num[posa++];
		else
			tmp[pos++]=num[posb++];
	}
	while(posa<=q)
		tmp[pos++]=num[posa++];
	while(posb<=r)
		tmp[pos++]=num[posb++];
	
	for (int i=p;i<=r;i++){
		num[i]=tmp[i];
	}
	}

void mergesort(int p, int r){
	if (p<r){
		int q=(p+r)/2;
		mergesort(p, q);
		mergesort(q+1, r);
		merge(p, q, r);
	}
}

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i=0;i<n;i++)
		cin >>num[i];
		
	mergesort(0, n-1);
	
	for (int i=0;i<n;i++)
		cout<<num[i]<<'\n';
	return 0;
}
