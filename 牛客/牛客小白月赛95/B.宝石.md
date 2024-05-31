宝石

https://ac.nowcoder.com/acm/contest/83687/B

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
    int a,b;
    cin >> a >> b;
    if(a==b)
        cout << a*6;
    else
    {
        int tmp1=a*11;
        int tmp2=a+b*5;
        if(tmp1<tmp2)
            cout << tmp1;
        else
            cout << tmp2;
    }
    return 0;
}
```

