显生之宙

https://ac.nowcoder.com/acm/contest/76795/B

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
ll a[N],s[N];
ll n;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=1;i<=n;++i)
        {
            cin >> a[i];
        }
        sort(a+1,a+n+1);
        ll fu=0;
        for(int i=1;i<=n;++i)
        {
            a[i]+=fu;
            if(a[i]<0)
                fu+=a[i];
            else if(i!=n)
                a[n]+=a[i];
        }
        cout << a[n] << "\n";
    }
    return 0;
}
```

