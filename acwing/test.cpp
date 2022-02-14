#include <cstring>
#include <cstdio>
#include <cmath>
#include <iostream>
#include<string>
#include <algorithm>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

// constexpr int N = 
constexpr int INF = 0x3f3f3f3f;

int gcd(int a, int b) {
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
void solve() {
    int cnt = 0;
    for (int i = 1; i <= 2020; ++i)
        if (__gcd(i, 1018) == 1) ++cnt;
    cout << cnt << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}