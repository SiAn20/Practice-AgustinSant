#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int n, ans = INT_MAX;
  string text1;
  cin >> n >> text1;
  n--;

  while (n--) {
    string x;
    cin >> x;
    int common = 0;
    for (int i = 0; i < text1.size(); i++) {
      if (text1[i] == x[i]) {
        common++;
      } else {
        break;
      }
    }
    ans = min(ans, common);
  }

  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
