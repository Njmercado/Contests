#include <bits/stdc++.h>

using namespace std;

int main(){

  int a, b, c, d, e, f, prod, real;
  cin >> a >> b >> c >> d;
  cout << d << endl;
  int vec[a];
  real = c;
  prod = b+c;
  while(a>0.0){
    while(d--){
      cin >> e >> f;
      for (int i = e; i < a; ++i) {
        vec[i] = f;
      }
    }
    for (int i = 0; i < a; ++i) {
      if(real > prod){
        prod *= (1-vec[i]);
        real += b;
      }else{
        cout << i << endl;
        break;
      }
    }
    scanf("%d %d %d %d", &a, &b, &c, &d);
  }

  return 0;
}

