#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> dp(n + 1, 0);
  dp[0] = 1;

  for (int i = 1; i <= n; ++i) {
    for (int k = 1; k <= 6; ++k) {
      if (i - k < 0)
        break;
      dp[i] += dp[i - k];
      dp[i] %= 1'000'000'007;
    }
  }

  cout << dp[n] << endl;

  return 0;
}
