#include <bits/stdc++.h>

using namespace std;

int main(){

  int k;
  int a, b;
  scanf("%d", &k);
  while(k--){
    scanf("%d %d", &a, &b);
    printf("%d\n", (a/3)*(b/3));
  }
}
