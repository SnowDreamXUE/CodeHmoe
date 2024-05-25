https://ac.nowcoder.com/acm/contest/82957/A

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
int a[9];
string s;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tmp;
    for(int i=0;i<9;++i)
    {
        cin >> tmp;
        a[i]=tmp;
    }
    cin >> s;
    for(auto c : s)
    {
        cout << a[c-'1'];
    }
    return 0;
}
```

