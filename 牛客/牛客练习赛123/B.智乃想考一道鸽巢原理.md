智乃想考一道鸽巢原理

https://ac.nowcoder.com/acm/contest/76790/B

```
//先判断总和的奇偶，
// 如果为奇数，则不是全能留下来，就是只有最大值能留下来
// 如果为偶数，判断max与sum/2之间的大小关系进行判断
//以及当a[i]==1时进行特殊判断
```

```c++
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
ll a[N];
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
        ll sum=0;
        int max_index = 0;
        for(int i=1;i<=n;++i)
        {
            cin >> a[i];
            sum+=a[i];
            if(a[max_index]<a[i])
                max_index=i;
        }
        if(sum&1)
        {
            if(a[max_index]<=sum/2)
                for(int i=1;i<=n;++i)
                    cout << 1 << " ";
            else
            {
                for(int i=1;i<=n;++i)
                    if(max_index==i)
                        cout << 1 << " ";
                    else
                        cout << 0 << " ";
            }
        }
        else
        {
            if(a[max_index]<sum/2)
            {
                for(int i=1;i<=n;++i)
                    if(a[i]==1)
                        cout << 0 << " ";
                    else
                        cout << 1 << " ";
            }
            else if(a[max_index]==sum/2)
            {
                if(n==2)
                    cout << "0 0";
                else
                {
                    for(int i=1;i<=n;++i)
                        if(max_index==i)
                            cout << 1 << " ";
                        else
                            cout << 0 << " ";
                }
            }
            else
            {
                for(int i=1;i<=n;++i)
                    if(max_index==i)
                        cout << 1 << " ";
                    else
                        cout << 0 << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
```

