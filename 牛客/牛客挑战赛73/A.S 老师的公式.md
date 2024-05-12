S 老师的公式

https://ac.nowcoder.com/acm/contest/76652/A

```cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000002 // 定义一个常量表示最大范围

bool is_prime[MAX + 1]; // 定义一个数组表示每个数是否是质数

// 定义一个函数，初始化数组
void init() {
    for (int i = 0; i <= MAX; i++) { // 遍历所有的数
        is_prime[i] = true; // 把它们都标记为质数
    }
    is_prime[0] = is_prime[1] = false; // 把0和1标记为合数
}

// 定义一个函数，执行筛选操作
void sieve() {
    int r = (int) sqrt(MAX); // 计算最大范围的平方根
    for (int i = 2; i <= r; i++) { // 从2开始到最大范围的平方根结束
        if (is_prime[i]) { // 如果i是质数
            for (int j = i + i; j <= MAX; j += i) { // 遍历i的所有倍数
                is_prime[j] = false; // 把它们标记为合数
            }
        }
    }
}

inline ll gcd(ll a,ll b) {
    return __gcd(a,b);
}
ll s1(ll n)
{
    ll sum;
    sum = n*(n+1)/2;
    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    init();
    sieve();
    ll n;
    cin >> n;
    ll ans=1;
    if(n>1&&is_prime[n+1])
    {
        ans = n/2;
    }
    else
        ans = n*(n+1)/2;
    cout << ans << endl;
    return 0;
}
```

