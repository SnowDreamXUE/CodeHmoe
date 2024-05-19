美味饼干

https://ac.nowcoder.com/acm/contest/82612/A

计算比$ k_0$大的数有几个即可

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
int k[5];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int ans=0;
        for(int i=0;i<5;++i)
        {
            cin >> k[i];
            if(i!=0)
            {
                if(k[i]>k[0])
                    ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
```

