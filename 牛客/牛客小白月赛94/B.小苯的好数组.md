https://ac.nowcoder.com/acm/contest/82957/B

只有两种情况

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
int n;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    vector<int> a(n);
    for(auto &i:a)
    {
        cin >> i;
    }
    vector<int> b = a;
    sort(b.begin(),b.end());
    if(a==b)
    {
        cout << 0;
    }
    else
    {
        cout << n;
    }
    return 0;
}
```

