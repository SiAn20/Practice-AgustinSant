// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int n, ans;
  cin >> n;
  if (n % 5 != 0) {
    ans = n / 5 + 1;
  } else
    ans = n / 5;
  cout << ans << endl;
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