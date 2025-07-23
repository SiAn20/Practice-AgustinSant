// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int x = 1;
  while (cin >> x) {
    int ans = 0;
    if (x == 1) {
      cout << 1 << endl;
      continue;
    }
    for (int i = 0; i < x; i++) {
      ans += ((x - i) * (x - i));
    }
    cout << ans << endl;
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