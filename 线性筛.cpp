#include <vector>
using namespace std;
vector <int> pri; //素数列表（可用于后续处理）
int pm[30000005]; //每个数的最小质因数（可用于后续处理，可优化分解质因数过程）

void getprime(int n) { //在 1 ~ n 值域内做线性筛
    pm[1] = 0;
    for (int i = 2; i <= n; i++) {
        if (!pm[i]) {
            pri.push_back(i);
            pm[i] = i;
        }
        for (int p : pri) {
            if (1ll * i * p > n) break;
            pm[i * p] = p;
            if (i % p == 0) break;
        }
    }
}