小红不想做鸽巢原理

https://ac.nowcoder.com/acm/contest/78904/B

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
ll a[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin >> n >> k;
    ll sum=0;
    for(int i=1;i<=n;++i)
    {
        cin >> a[i];
        sum+=a[i];
        sum%=k;
    }
    sort(a+1,a+1+n);
    ll ans=0;
    for(int i=n;i>=1;--i)
    {
        if(sum==0)
            break;
        if(a[i]>=sum)
        {
            ans++;
            break;
        }
        else
        {
            ans++;
            sum-=a[i];
        }
    }
    cout << ans;
    return 0;
}
```

