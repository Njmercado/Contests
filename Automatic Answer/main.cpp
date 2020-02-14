#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, m;

  scanf("%d", &n);

  while(n--){
    scanf("%d", &m);
    string i = to_string((m*567/9+7492)*235/47-498);
    cout << i.substr(i.length()-2, 1) << endl;
  }

  return 0;
}

