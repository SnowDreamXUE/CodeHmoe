选择游戏

https://ac.nowcoder.com/acm/contest/82612/B

3能操作两次，看成不操作（看成两个会导致错误），计算除3以外的素数个数，判断个数的奇偶

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
#define MAX 2000002 // 定义一个常量表示最大范围
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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    init();
    sieve();
    int t;
    cin >> t;
    int x,n;
    while(t--)
    {
        int ans=0;
        bool flag=false;
        cin >> n;
        for(int i=0;i<n;++i)
        {
            cin >> x;
            if(is_prime[x])
            {
                ans++;
            }
            if(x==3)
            {
                ans--;
            }
        }
        if(ans%2==1)
        {
            cout << 0;
        }
        else if(ans==0)
        {
            cout << -1;
        }
        else if(ans%2==0)
        {
            cout << 1;
        }
        cout << "\n";
    }
    return 0;
}
```

