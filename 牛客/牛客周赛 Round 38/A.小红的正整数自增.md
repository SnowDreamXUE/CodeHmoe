小红的正整数自增

https://ac.nowcoder.com/acm/contest/78292/A

```c++
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=3e5+10;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll num;
    cin >> num;
    ll n;
    n=num%10;
    cout << (10-n)%10 << "\n";
    return 0;
}
```

