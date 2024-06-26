幻兽帕鲁

https://ac.nowcoder.com/acm/contest/82401/D

通过打表，可以发现x位置操作后数字变为reverse(x)

例如: n=3

初始:

| 位置   | 0    | 1    | 2    | 3    | 4    | 5    | 6    | 7    |
| ------ | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| 数值   | 0    | 1    | 2    | 3    | 4    | 5    | 6    | 7    |
| 二进制 | 000  | 001  | 010  | 011  | 100  | 101  | 110  | 111  |

操作一：将偶数位置排列在前，奇数位置在后重新排列

| 数值   | 0    | 2    | 4    | 6    | 1    | 3    | 5    | 7    |
| ------ | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| 二进制 | 000  | 010  | 100  | 110  | 001  | 011  | 101  | 111  |

操作二：分两半重新定义位置(为简单值演算半边)

| 位置   | 0    | 1    | 2    | 3    |
| ------ | ---- | ---- | ---- | ---- |
| 数值   | 0    | 2    | 4    | 6    |
| 二进制 | 000  | 010  | 100  | 110  |

重复操作一

| 数值   | 0    | 4    | 2    | 6    |
| ------ | ---- | ---- | ---- | ---- |
| 二进制 | 000  | 100  | 010  | 110  |

......

全部操作后

| 数值   | 0    | 4    | 2    | 6    | 1    | 5    | 3    | 7    |
| ------ | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| 二进制 | 000  | 100  | 010  | 110  | 001  | 101  | 011  | 111  |

与原表对比

| 数值   | 0    | 1    | 2    | 3    | 4    | 5    | 6    | 7    |
| ------ | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| 二进制 | 000  | 001  | 010  | 011  | 100  | 101  | 110  | 111  |

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
// 反转整数的二进制表示
ll reverseBinary(ll w, int numBits) {
    if (w == 0) // 如果输入整数为0，则直接返回0
        return w;

    ll reversed = 0;
    for (int i = 0; i < numBits; ++i) {
        if (w & (1LL << i)) { // 检查原整数的每一位
            reversed |= (1LL << (numBits - 1 - i)); // 将原整数的位反转后添加到结果中
        }
    }
    return reversed;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int numBits, numCases;
    cin >> numBits >> numCases; // 输入整数的位数和测试用例数

    ll maxNum = (1LL << numBits) - 1; // 计算能表示的最大整数

    while (numCases--) {
        ll x;
        cin >> x; // 输入一个整数

        // 反转输入整数的二进制表示，并输出结果
        cout << reverseBinary(x, numBits) << '\n';
    }
    return 0;
}
```

