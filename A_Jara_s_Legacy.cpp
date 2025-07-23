// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int n, ans = 0;
  while (cin >> n, n!=-1) {
    while (n--) {
      int x0, y0, x1, x2;
      cin >> x1 >> y0 >> x1 >> x2;
      if ((x0 == 0 && y0 != 0 && x1 == 0 && y1 != 0)) {
        ans += 1;
      } else if ((x0 == 0 && y0 != 0 && x1 != 0 && y1 == 0)) {
        ans += 1;
      } else if ((x0 != 0 && y0 == 0 && x1 == 0 && y1 != 0)) {
        ans += 1;
      } else if ((x0 != 0 && y0 == 0 && x1 != 0 && y1 == 0)) {
        ans += 1;
      }
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