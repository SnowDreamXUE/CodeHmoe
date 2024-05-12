小红的抛弃后缀

https://ac.nowcoder.com/acm/contest/78292/B

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=3e5+10;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string x;
    cin >> x;
    int num=0,sum=0;
    for(char i : x)
    {
        sum+=i-'0';
        if(sum%9==0)
            num++;
    }
    cout << num << "\n";
    return 0;
}
```

