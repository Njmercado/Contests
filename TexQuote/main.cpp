#include <bits/stdc++.h>

using namespace std;

int a = 1;

string findAndReplace(string str){

	int p = str.find('\"');
	vector<string> rep{"''", "``"};
	while(p != -1){
		str.replace(p, 1, rep[a]);
		p = str.find('\"');
		a = (a+1)%2;
	}
	return str;
}

int main()
{
    string str;
    string copy = " ";
	while(copy.length()){
		getline(cin, copy);
		str += findAndReplace(copy)+"\n";
	}
	cout << str << endl;
    return 0;
}
