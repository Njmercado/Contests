#include <bits/stdc++.h>

using namespace std;

int main(){

  int a, b, sum, i = 0;

  scanf("%d", &a);
  while(a){
    sum = 0; 
    i++;
    while(a--){
      scanf("%d", &b);
      if(b) sum++;
      else sum--;
    }
    cout << "Case " << i << ": " << sum << endl;
    scanf("%d", &a);
  }

  return 0;
}

