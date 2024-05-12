[CodeTON Round 8 (Div. 1 + Div. 2, Rated, Prizes!)](https://codeforces.com/contest/1942)

[B. Bessie and MEX](https://codeforces.com/contest/1942/problem/B)

我们可以从正反两方面依次找到 $p_1, p_2, ... , p_n$ 。请注意， $a_i \neq 0$ 因为 $p_i$ 等于 $\texttt{MEX}$ （ $p_1 \dots p_i$ ），而这是不可能发生的。

- 如果是 $a_i > 0$ ，那么 $\texttt{MEX}$ ( $p_1, p_2, ... p_i$ )一定会从 $\texttt{MEX}$ ( $p_1, p_2, ... p_{i-1}$ )增加，因此我们知道 $p_i$ 一定等于 $\texttt{MEX}$ ( $p_1, p_2, ... p_{i-1}$ )。
- 否则， $\texttt{MEX}$ 保持不变，那么 $p_i$ 就是简单的 $\texttt{MEX}$ （ $p_1, p_2, ... p_{i-1}$ ）- $a_i$ 。

因此，我们只需保持 $\texttt{MEX}$ ，并在前进的过程中找到每个 $p_i$ 即可。

**这里有更多关于特定差异导致特定 MEX 变动的理由**

$\texttt{MEX}$ 只有两种可能：增加或保持不变（由于较大的前缀包含较小的前缀，因此它永远不会减少）。

- 在正差的情况下，考虑一下如果 $\texttt{MEX}$ 保持不变会发生什么。由于差值为正， $\texttt{MEX}$ 必须大于当前值，而这是不可能的，因为该值必须出现在前缀的前面。由于 $\texttt{MEX}$ 是根据排列计算出来的，因此不可能出现这种情况。因此， $\texttt{MEX}$ 必须增加。

- 如果是负值， $\texttt{MEX}$ 必须小于当前值。但如果它增加了，就意味着当前值改变了 $\texttt{MEX}$ ，也就是说 $\texttt{MEX}$ 现在至少（当前值 + 1），而实际上它更大了。所以它必须保持不变。

请注意，这也是证明 $p$ 始终唯一的一种方法。

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
    ll t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int mex=0;
        for(int i=1;i<=n;++i)
        {
            int a;
            cin >> a;
            if(a>0)
                mex+=a;
            int p =mex-a;
            cout << p << " \n"[i==n];
        }
    }
    return 0;
}
```

