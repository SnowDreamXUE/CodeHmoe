红魔馆的馆主

https://ac.nowcoder.com/acm/contest/77231/C

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
    ll n,m;
    cin >> n;
    m=n%495;
    if(!m)
    {
        cout << -1;
        return 0;
    }
    for(int i=0;i<=9;i++)
    {
        ll x=m*10+i;
        if(x%495==0)
        {
            cout << i;
            return 0;
        }
    }
    for(int i=0;i<=9;i++)
    {
        ll x=m*100+i;
        if(x%495==0)
        {
            cout << 0<< i;
            return 0;
        }
    }
    for(int i=10;i<=99;i++)
    {
        ll x=m*100+i;
        if(x%495==0)
        {
            cout << i;
            return 0;
        }
    }for(int i=100;i<=999;i++)
    {
        ll x=m*1000+i;
        if(x%495==0)
        {
            cout << i;
            return 0;
        }
    }
}

```

