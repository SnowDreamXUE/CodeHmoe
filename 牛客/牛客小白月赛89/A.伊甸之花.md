伊甸之花

https://ac.nowcoder.com/acm/contest/76795/A

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
int a[N];
int n,m;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    bool flag1 = true;
    bool flag2 = true;
    for(int i=1;i<=n;++i)
    {
        cin >> a[i];
        if(a[i]==m)
            flag1=false;
        if(a[i]==1)
            flag2=false;
    }
    if(flag1||flag2)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
```

