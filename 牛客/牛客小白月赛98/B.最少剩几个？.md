最少剩几个？

https://ac.nowcoder.com/acm/contest/85598/B

计算奇偶数数量，先一奇一偶对消，再两奇对消

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
    int n,s1=0,s2=0;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> a[i];
        if(a[i]%2==0)
        {
            s2++;
        }
        else
        {
            s1++;
        }
    }
    if(s1==s2)
    {
        cout << 0;
    }
    else if(s1<s2)
    {
        cout << s2-s1;
    }
    else
    {
        int tmp=s1-s2;
        if(tmp%2==0)
            cout << 0;
        else
            cout << 1;
    }
    cout << "\n";
    return 0;
}
```

