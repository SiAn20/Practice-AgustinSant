// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int n, ans=0;
  cin >> n;
  vector<int> cant(7);
  string entrada;
  
 while(n--){
    cin >> entrada;
    for (int i = 0; i < 7; i++){
        if(entrada[i]=='1'){
            cant[i]+= 1;
            if(cant[i]>ans){
                ans = cant[i];
            }
        }
    }
 }
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