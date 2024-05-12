小红的平滑值插值

https://ac.nowcoder.com/acm/contest/78292/D

```
// 最大差值小于k的时候，要插入一个数，使最大差值为k
```

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+10;
ll a[N],b;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    for(int i=1;i<=n;++i)
        cin >> a[i];
    ll m=0;
    for(int i=2;i<=n;++i)
    {
        ll d=abs(a[i]-a[i-1]);
        if(d>k)
        {
            b+=(d-1)/k;
        }
        m=max(d,m);
    }
    if(m<k)
        cout << 1;
    else
        cout << b;
    return 0;
}
```

