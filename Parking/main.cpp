#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
  int k, a, p, t;
  scanf("%d", &k);

  while(k--){

    scanf("%d", &a);
    vector<int> v;

    while(a--){

      scanf("%d", &p);
      v.push_back(p);
    }
    t = *max_element(v.begin(), v.end());
    t -= *min_element(v.begin(), v.end());
    cout << t*2<< endl;
  }
  return 0;
}
