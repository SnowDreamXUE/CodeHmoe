两个函数

https://ac.nowcoder.com/acm/contest/85598/C

数学方程化简

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
ll a,x;
ll fun()
{
    if(x==1)
    {
        return a%998244353;
    }
    ll tmp1 = a*a%998244353;
    ll tmp2 = (x*(x-1))/2%998244353;
    return tmp1*tmp2%998244353;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> a >> x;
        cout << fun() << "\n";
    }
    return 0;
}
```

