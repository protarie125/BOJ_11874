#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll l, d, x;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> l >> d >> x;

  ll n = d + 1;
  ll m = l - 1;
  for (auto i = l; i <= d; ++i) {
    auto p = i;
    auto s = 0LL;
    while (0 < p) {
      s += p % 10;
      p /= 10;
    }

    if (s == x) {
      if (i < n) {
        n = i;
      }

      if (m < i) {
        m = i;
      }
    }
  }

  cout << n << '\n' << m;

  return 0;
}