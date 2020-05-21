
#include <bits/stdc++.h>

using namespace std;


int main(int argc, char** argv) {
	string input;
	cin >> input;
	
	int a=-1;
	for (int i=0;i<input.size();i++){
		if (input[i]=='x')
			a=i;
			}
			
		if (a==-1)
			cout <<0<<"\n";
		else if (a==0)
			cout <<1<<"\n";
		else if (a==1 && input[0]=='-')
			cout << -1<<"\n";
			
	   else {
	   	input[a]=0;
	   	for (int k=0;input[k]!=0;k++){
	   		cout <<input[k];
		   }
		   cout <<"\n";
	   }
		
	
	return 0;
}
