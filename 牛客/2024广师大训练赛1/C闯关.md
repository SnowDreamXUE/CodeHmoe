链接：https://ac.nowcoder.com/acm/contest/77863/C

### C 闯关

#### 题目描述                    

阿伟正在玩一款闯关游戏，游戏共有 nnn 个关卡。
 每关都有一个BOSS，BOSS有 aaa 点战斗力。
 如果阿伟目前战斗力不低于BOSS战斗力，那么阿伟就能通过这关，并获得 bbb 点战斗力（最后一关不加战斗力）。
 必须打赢前一关的BOSS才能解锁下一关。
 现在有 ttt 次询问，每次询问给你阿伟的初始战斗力，请问阿伟最多能够通过几关？

#### 输入描述:

```
第一行输入两个整数 n ( 1≤n≤105 )n\ (\ 1 \leq n \leq 10^5\ )n ( 1≤n≤105 )，q ( 1≤q≤105 )q\ (\ 1 \leq q \leq 10^5\ )q ( 1≤q≤105 )，代表关卡数量跟询问次数。
第二行输入 nnn 个整数 ai ( 1≤ai≤109 )a_i\ (\ 1 \leq a_i \leq 10^9\ )ai ( 1≤ai≤109 )，代表每关BOSS的战斗力。
第三行输入 n−1n-1n−1 个整数 bi ( 1≤bi≤109 )b_i\ (\ 1 \leq b_i \leq 10^9\ )bi ( 1≤bi≤109 )，代表通过每关获得的战斗力。
随后 ttt 行，每行输入一个整数 k ( 1≤k≤109 )k\ (\ 1 \leq k \leq 10^9\ )k ( 1≤k≤109 )，代表阿伟的初始战斗力。
```

#### 输出描述:

```latex
输出 ttt 行，每行一个整数，代表阿伟最多能通过的关卡数。                    
```

#### 输入

```
5 2
12 23 41 34 61
5 12 6 7
14
20
```

#### 输出

```
1
2
```

#### 说明

```latex
初始战斗力为 141414 时，能闯过第一关，战斗力变为 191919 ，但是战斗力比第二关BOSS低，闯不过。
初始战斗力为 202020 时，只能闯过前两关。
```

代码

```cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+10;
ll a[N],b[N],c[N],k;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin >> n >> q;
    for(int i=1;i<=n;++i)
        cin >> a[i];
    for(int i=1;i<n;++i)
    {
        cin >> b[i];
        b[i]+=b[i-1];
        //闯过第o关后总共加了多少战斗力
    }
    for(int i=1;i<=n;++i)//关键点
    {
        c[i]=max(c[i-1],a[i]-b[i-1]);
        //闯过当前关卡所需最小初始战斗力为闯过当前关所需战斗力减去前i-1关获得的战斗力
		//闯过当前关卡所需最小初始战斗力不能小于闯过前一关所需最小初始战斗力
    }
    while(q--)
    {
        cin >> k;
        int l=0,r=n;
        while(l<r)//二分查找
        {
            int mid = (r+l+1)>>1;
            if(c[mid]<=k)
                l=mid;
            else
                r=mid-1;
        }
        cout << l << "\n";
    }
    return 0;
}

```

