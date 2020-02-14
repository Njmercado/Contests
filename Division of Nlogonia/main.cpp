#include <bits/stdc++.h>

using namespace std;

int main(){

  int k, n, m, x, y;

  scanf("%d", &k);

  while(k){

    scanf("%d %d", &n, &m);
    while(k--){

      scanf("%d %d", &x, &y);
      if(x == n || y == m) cout << "divisa" << endl;
      else if(x > n && y > m) cout << "NE" << endl;     
      else if(x < n && y > m) cout << "NO" << endl;
      else if(x > n && y < m) cout << "SE" << endl;
      else cout << "SO" << endl;
    }
    scanf("%d", &k);
  }
}

