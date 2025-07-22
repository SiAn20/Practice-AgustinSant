// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  string n, text;
  int cant, ans = 0;
  cin >> n >> text;
  cant = text.size() - 1;
  if (cant == 0) {
    cout << ans << endl;
    return;
  }

  for (int i = 0; i < cant; ++i) {
    int pos1 = n.find(text[i]);
    int pos2 = n.find(text[i + 1]);
    if (pos1 != string::npos && pos1 != string::npos) {
      ans += abs(pos1 - pos2);
    } else
      break;
  }
  cout << ans << endl;
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