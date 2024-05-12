生不逢七

https://ac.nowcoder.com/acm/contest/82401/A

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
int n,a,k;
string tmp;
bool f[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> a >> k;
        int ans=a+1;
        for(int i=1;i<=k;++i)
        {
            if(f[ans]||ans%7==0)
            {
                cout << "p ";
                f[ans]=true;
                goto _end;
            }
            tmp=to_string(ans);
            for(auto c : tmp)
            {
                if(c=='7')
                {
                    cout << "p ";
                    f[ans]=true;
                    goto _end;
                }
            }
            cout << ans << " ";
            _end:ans+=n;
        }
        cout << "\n";
    }
    return 0;
}
```

