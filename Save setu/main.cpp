#include <bits/stdc++.h>

using namespace std;

int main(){

  int sum = 0, n;
  char a[20];

  scanf("%d", &n);
  while(n--){
    scanf("%s", &a);
    string g = a;
    if(g.substr(0, 6).compare("report") == 0) cout << sum << endl; 
    else sum+=stoi(g.substr(6, g.length() - 1));
  }

  return 0;
}

