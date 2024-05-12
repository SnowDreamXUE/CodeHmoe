智乃的gcd构造

https://ac.nowcoder.com/acm/contest/78806/A

```
// 先令a,b=z，不满足条件时让a*3即可
```

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x,y,z;
    cin >> x >> y >> z;
    ll a=z,b=z;
    while(abs(a+b)<y)
    {
        a*=3;
    }
    while(abs(a-b)<x)
    {
        a*=3;
    }
    cout << a << " " << b<< "\n";
    return 0;
}
```

