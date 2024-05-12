小红的数组移动

https://ac.nowcoder.com/acm/contest/80743/B

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
string s;
ll a[N],ans;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> a[i];
    }
    cin >> s;
    int i=0;
    for(auto c:s)
    {
        if((i==0&&c=='L')||(i==n-1&&c=='R'))
        {
            ans+=a[i];
        }
        else
        {
            if(c=='L')
            {
                i--;
                ans+=a[i];
            }
            else
            {
                i++;
                ans+=a[i];
            }
        }
        ans %= 1000000007;
    }
    cout << ans << "\n";
    return 0;
}
```

