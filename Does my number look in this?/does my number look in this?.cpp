#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a = 153;
	int b[10];	

	for(int i = 1; i < 10; i++){
		b[i] = (a/((int) (pow(10, i)+0.5)))%((int) (pow(10, i-1) + 0.5));
	}

	cout << b;

	return 0;
}
