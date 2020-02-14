#include <bits/stdc++.h>

using namespace std;

int main(){

  int k, n, b, c, d;
  scanf("%d", &k);
  n = k;
  while(k--){
  
    scanf("%d %d %d", &b, &c, &d);
    vector<int> a = {b, c, d};
    sort(a.begin(), a.end());
    cout << "Case " << n-k << ": " << a[1] << endl;
  }

  return 0;
}

