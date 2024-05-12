博丽神社的巫女

https://ac.nowcoder.com/acm/contest/77231/B

```cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+10;
ll a[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll x;
    cin >> n >> x;
    for(int i=0;i<n;++i)
        cin >> a[i];
    sort(a,a+n);
    int num=0;
    ll money=0;
    int i=0;
    for(;i<n;++i)
    {
        if(x<a[i])
        {
            break;
        }
        ++num;
        money=a[i];
    }
    cout << num << " " << x-money << endl;
}
```

