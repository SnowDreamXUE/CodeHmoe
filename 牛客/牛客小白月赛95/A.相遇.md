相遇

https://ac.nowcoder.com/acm/contest/83687/A

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
        cout << "p";
    else if((a==1&&b==3)||(a==2&&b==1)||(a==3&&b==2))
        cout << "b";
    else
        cout << "a";
    return 0;
}
```

