// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  while (true) {
    int x, ans, esp1, esp2 = 1;
    string text, mensaje = "";
    cin >> x;
    if (x == 0)
      return;
    cin >> text;
    int filas = text.size() / x;

    if (filas > 6) {
      esp1 = 9;
    } else {
      esp1 = x + x - 1;
    }
    int var = 0;
    for (int i = 0; i < x; ++i) {
      for (int j = 1; j <= filas; ++j) {
        if (j == 1) {
          mensaje += text[i];
          cout << i << " ";
        } else if (j % 2 == 0) {
          mensaje += text[(i + esp1) * (j - 1)];
          cout << esp1 * (j/2)+i << " ";
        } else if (j % 2 != 0) {
          mensaje += text[(i + esp1 + esp2) * j];
          cout << (i + esp1 + esp2)*(j/2) -i << " ";
        }
      }
      if (esp2 == 9) {
        esp1 = -1;
        esp2 = -1;
      } else {
        esp1 -= 1;
        esp2 += 1;
      }

      cout << endl;
    }
    cout << endl;
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