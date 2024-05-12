小红的素数合并

https://ac.nowcoder.com/acm/contest/80743/C

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
    int n;
    cin >> n;
    vector<ll> a;
    vector<ll> b;
    ll tmp;
    for(int i=0;i<n;++i)
    {
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(),a.end());
    if(n>=3)
    {
        if(n%2!=0)
        {
            b.push_back(a[n-1]);
            n--;
        }
        for(int i=0;i<n/2;++i)
        {
            b.push_back(a[i]*a[n-1-i]);
        }
    }
    else if(n==2)
    {
        b.push_back(a[0]*a[1]);
        cout << b[0];
        return 0;
    }
    else if(n==1)
    {
        cout << a[0];
        return 0;
    }
    sort(b.begin(),b.end());
    ll len =b.size();
    cout << b[len-1]-b[0];
    return 0;
}
```

