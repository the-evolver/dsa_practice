//  author : the_evolver
#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define ll  long long
#define dd  double
#define pb push_back
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int Log(dd a, dd b) {int ans = log(a) / log(b); return ans;}


void init() {
    fast_io;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE

}

void solve() {
  int n;
  cin >> n;
  vector<int>st(n, 0);
  vector<int>fin(n, 0);
  vector<int>res(n, 0);


  for (int i = 0 ; i < n ; i++) {
      cin >> st[i];

  }
  for (int i = 0 ; i < n ; i++) {
      cin >> fin[i];

  }

  for (int i = 0 ; i < n ; i++) {

      res[i] = (i == 0)
               ? (fin[i] - st[i])
               : (fin[i] - ( st[i] > fin[i - 1] ? st[i] : fin[i - 1]));

  }

  for (int i = 0 ; i < n ; i++) {
      cout << res[i] << " ";
  }
  cout << endl;

}


int main() {


    init();


    int t; cin >> t;
    while (t--) {
        
        solve();

    }
 return 0;
}
    