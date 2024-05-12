小红不想做炸鸡块粉丝粉丝题

https://ac.nowcoder.com/acm/contest/78904/A

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
    ll a[6]={0};
    ll sum=0;
    for(auto & i : a)
    {
        cin >> i;
        sum+=i;
    }
    if(a[0]<sum/30)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
```

