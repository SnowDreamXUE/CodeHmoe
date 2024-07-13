骰子魔术

https://ac.nowcoder.com/acm/contest/85598/A

有一个一样的色子就可以

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
    int n,x;
    cin >> n >> x;
    int a;
    bool ans= false;
    for(int i=0;i<n;++i)
    {
        cin >> a;
        if(a==x)
        {
            ans=true;
        }
    }
    if(ans)
        cout << "YES";
    else
        cout << "NO";
    cout << "\n";
    return 0;
}
```

