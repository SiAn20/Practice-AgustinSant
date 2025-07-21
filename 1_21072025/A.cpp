// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  string n, text;
  int cant, ans=0;
  cin  >> n >> text;
  cant = text.size()-1;
  for (int i = 0; i < cant; i++) {
    if(cant==1) return;
    if(text[i]==text[i-1] && i>0) continue;
    ans += abs(n.find(text[i]) - n.find(text[i+1]));
  }
 cout << ans << endl;
  
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while(t--)
  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/