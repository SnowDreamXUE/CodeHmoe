[CodeTON Round 8 (Div. 1 + Div. 2, Rated, Prizes!)](https://codeforces.com/contest/1942)

[A. Farmer John's Challenge](https://codeforces.com/contest/1942/problem/A#)

阅读提示:

对于 $k=1$ ，构造 $1,2,3\dots n$ 总是有效的，因为在任何其他循环移位中， $n$ 都在 $1$ 之前。

现在，考虑一下如果我们想找到一个有两个或两个以上循环移位且排序的数组，会发生什么情况。如果我们考虑其中的两个循环移位，注意它们实际上也是彼此的移位。

因此，应该有一个排序数组和一个同样排序的移位数组。这意味着数组中的一些首元素会移动到后面并保持排序，而这只有在数组中的所有值都相等的情况下才会发生**。

如果数组中所有元素的值都相等，我们就可以构造出 $k=n$ 。正如我们所见，对于 $k > 1$ ，只有 $k=n$ 是可能的。因此，对于不等于 $1$ 或 $n$ 的其他 $k$ ，我们可以打印出 $-1$ 。

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
ll a[N];
int n,k;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    for(int i=1;i<1001;++i)
        a[i]=i;
    while(t--)
    {
        cin >> n >> k;
        if(n==k)
        {
            for(int i=0;i<n;++i)
                cout << 1 << " ";
        }
        else
        {
            if(k!=1)
                cout << -1;
            else
            {
                for(int i=1;i<=n;++i)
                    cout << a[i] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
```

