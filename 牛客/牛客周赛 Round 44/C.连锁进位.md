连锁进位

https://ac.nowcoder.com/acm/contest/82526/C

字符串读入，从个位开始变0，add表示是否进位

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
string s;
int ans,add;
void solve() {
    cin >> s;
    int len = (int) s.size();
    ans = 0;
    add = 0;
    for (int i = len - 1; i > 0; i--)
    {
        int tmp = s[i]-'0'+add;
        if(tmp)
        {
            ans+=10-tmp;
            add=1;
        }
        else
        {
            add=0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << ans << "\n";
    }
    return 0;
}
```

