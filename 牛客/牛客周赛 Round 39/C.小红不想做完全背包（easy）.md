小红不想做完全背包（easy）

https://ac.nowcoder.com/acm/contest/78904/C

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e4+10;
ll a[2001];
int b[3];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,p;
    cin >> n >> p;
    ll tmp;
    for(int i=0;i<n;++i)
    {
        cin >> tmp;
        b[tmp%3]++;
    }
    if(b[0]!=0)
        cout << 1;
    else
    {
        if(b[1]!=0&&b[2]==0)
            cout << 3;
        if(b[1]!=0&&b[2]!=0)
            cout << 2;
        if(b[1]==0&&b[2]!=0)
            cout << 3;
    }
    return 0;
}
```

