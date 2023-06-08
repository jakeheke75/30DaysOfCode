#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int bitwiseAnd(int n, int k) {
    int max{0}, btw;    
    for (int a = 1; a < n; a++) {
        for (int b = a+1; b <= n; b++) {
            btw = a & b;
            btw > max && btw < k ? max = btw : max = max;
        }
    }
    return max;
}

int main() {
    int t, n, k;
    scanf("%d", &t);
    while (t-- > 0) {
        scanf("%d %d", &n, &k);
        int res{bitwiseAnd(n, k)};
        cout << res << '\n';
    }
    return 0;
}