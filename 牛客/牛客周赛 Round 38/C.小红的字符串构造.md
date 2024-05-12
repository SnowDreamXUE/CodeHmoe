小红的字符串构造

https://ac.nowcoder.com/acm/contest/78292/C

```cpp
// By SnowDream 2024/3/24
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 1e5 + 10;
string s;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    int t=0;
    for(int i=0;i<k;++i)
    {
        s+='a'+t;
        s+='a'+t;
        t=(t+1)%26;
    }
    for(int i=2*k;i<n;i++)
    {
        s+='a'+t;
        t=(t+1)%26;
    }
    cout << s;
    return 0;
}

```

