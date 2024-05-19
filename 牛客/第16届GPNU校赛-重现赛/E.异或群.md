异或群

https://ac.nowcoder.com/acm/contest/83433/E

使用set储存数据，遍历异或查找是否存在

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
set<ll> g;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll tmp;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> tmp;
        g.insert(tmp);
    }
    if(g.find(0)==g.end())
    {
        cout << "NO\n";
        return 0;
    }
    for(auto i=g.begin();i!=g.end();++i)
    {
        for (auto j=g.begin();j!=g.end();++j)
        {
            auto snow = g.find(*i ^ *j);
            if (snow == g.end())
            {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
    return 0;
}
```

