相助

https://ac.nowcoder.com/acm/contest/83687/C

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
int a[N];
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
    if(n==1)
    {
        cout << -1;
        return 0;
    }
    if(a[0]==a[n-1])
    {
        cout << 1;
        return 0;
    }
    for(int i=1;i<n-2;++i)//留最后两个
    {
        if(a[0]==a[i])
        {
            for(int j=i+1;j<n-1;++j)
            {
                if(a[j]==a[n-1])
                {
                    cout << 2;
                    return 0;
                }
            }
            break;
        }
    }
    cout << -1;
    return 0;
}
```

