https://ac.nowcoder.com/acm/contest/82957/C

思路: 贪心+枚举

从贪心的角度，因为数组的数都是非负数，所以最小数一定是数组中的某个元素，最大数则是左右两侧和的最大值

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
ll a[N],s[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=1;i<=n;++i)
    {
        cin >> a[i];
        s[i]=s[i-1]+a[i];
    }
    ll ans=0;
    for(int i=1;i<=n;++i)
    {
        if(i>1)
        {
            ans=max(ans,abs(s[i-1]-a[i]));
        }
        if(i+1<=n)
        {
            ans=max(ans,abs(s[n]-s[i]-a[i]));
        }
    }
    cout << ans;
    return 0;
}
```

