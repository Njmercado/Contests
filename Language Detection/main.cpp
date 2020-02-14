#include <bits/stdc++.h>

using namespace std;

int main(){

  int i=0,j = 1;
  vector<string> v = {"HELLO", "HOLA", "HALLO", "BONJOUR", "CIAO", "ZDRAVSTVUJTE", "ENGLISH", "SPANISH", "GERMAN", "FRENCH", "ITALIAN", "RUSSIAN"};
  string a;

  getline(cin, a);
  while(a.compare("#") != 0){
    i = 0;
    while(i<6){
      if(v[i].compare(a) == 0){
        cout << "Case " << j << ": " << v[i+6] << endl;
        break;
      }
      i++;
    }

    if(i >= 6) cout << "Case " << j << ": UNKNOWN" << endl;
    j++;
    getline(cin, a);
  }

  return 0;
}

