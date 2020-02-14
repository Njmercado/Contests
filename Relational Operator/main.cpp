#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
  int k, a, b;
  scanf("%d", &k);
  while(k--){
    scanf("%d %d", &a, &b);
    if(a > b) cout << ">" << endl;
    else if(a < b) cout << "<" << endl;
    else cout << "=" << endl;
  }
  return 0;
}
