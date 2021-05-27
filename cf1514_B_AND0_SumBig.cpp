// Wilmer Gaona Romero
// 23.05.2021

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
  int t;
  cin >> t;

  while (t--) {
    long long int n, k;
    cin >> n >> k;

    long long int ans = 1LL;
    const long long int MOD = 1e9 + 7;

    for (int i = 0; i < k; ++i) {
      ans *= n;
      ans %= MOD;
    }

    cout << ans % MOD << endl;
  }
  return 0;
}