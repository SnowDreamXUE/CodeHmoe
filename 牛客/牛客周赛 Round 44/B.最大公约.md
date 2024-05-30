最大公约

https://ac.nowcoder.com/acm/contest/82526/B

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
map<int,int> a;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int tmp;
    for(int i=0;i<n;++i)
    {
        cin >> tmp;
        a[tmp]++;
    }
    int max_ans=0;
    for(auto i:a)
    {
        max_ans = max(max_ans,i.second);
    }
    cout << max_ans;
    return 0;
}
```

