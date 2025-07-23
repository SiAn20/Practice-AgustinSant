// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int g, b;
  while (cin >> g >> b, g != -1 || b != -1) {
    if (g == 0 || b == 0) {
      cout << max(g, b) << endl;
    } else {
      int mayor = max(g, b);
      int menor = min(g, b);
      cout << (mayor + (menor + 1) - 1) / (menor + 1) << endl;
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/