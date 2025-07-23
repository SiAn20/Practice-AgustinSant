#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int n, ans = 0;
  while (cin >> n, n != -1) {
    for (int i = n; i >= 0; --i) {
      for (int j = i - 1; j >= 0; --j) {
        for (int k = j - 1; k >= 0; --k) {
          int sum = (i * j) + (i * k) + (j * k);
          if (sum == n) {
            ans++;
          }
        }
      }
    }
    cout << ans<< endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  solve();
}
