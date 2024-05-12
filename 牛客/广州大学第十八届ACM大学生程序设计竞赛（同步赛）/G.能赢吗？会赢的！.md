能赢吗？会赢的！

https://ac.nowcoder.com/acm/contest/77448/G

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+10;
ll a[N],b[N];
int n;
ll ans,sum;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i=1;i<=n;++i)
    {
        cin >> a[i];
        b[i]=b[i-1]+a[i-1]/2;
    }
    for(int i=n;i>=1;i--)
    {
        a[i]=a[i]+(a[i-1]+1)/2-b[i];
    }
    sort(a+1,a+n+1);
    ans = a[n]+1;
    cout << ans << "\n";
    return 0;
}
```

