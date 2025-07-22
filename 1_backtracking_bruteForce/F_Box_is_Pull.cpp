// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int x1, y1, x, y, dif1, dif2, ans = 0;
  cin >> x1 >> y1 >> x >> y;

  dif1 = abs(x - x1);
  dif2 = abs(y - y1);

  if (dif1 > 0 && dif2 > 0) {
    ans = dif1 + dif2 + 2;
    cout << ans << endl;
    return;
  } else if (dif2 == 0 && dif1 == 0) {
    cout << ans << endl;
    return;
  } else {
    ans = dif1 + dif2;
    cout << ans << endl;
    return;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
    solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/