今天是个上分的好日子

https://ac.nowcoder.com/acm/contest/78965/L

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
int other(int n)
{
    if(n>=2&&n<=6)
        return n-1;
    else if(n>6)
        return 5;
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n=0;
    int sum=0;
    for( auto c : s)
    {
        if(c=='0')
        {
            sum-=12;
            n=0;
        }
        else
        {
            sum+=3;
            n+=1;
            sum+=other(n);
        }
    }
    cout << sum;
    return 0;
}
```

