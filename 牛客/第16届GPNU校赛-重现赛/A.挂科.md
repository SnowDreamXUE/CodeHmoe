挂科

https://ac.nowcoder.com/acm/contest/83433/

考试成绩20分以下，必挂

计算60分的平时分，排序，当过的人大于等于$n-k$时，输出最后一个人的平时分，如果n小于等于k，直接0分

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
int n,k;
double a[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int die=0,save=0;
    double min_ans;
    cin >> n >> k;
    for(int i=1;i<=n;++i)
    {
        cin >> a[i];
        if(a[i]<20)
            die++;
        a[i]=120-a[i];
    }
    sort(a+1,a+n+1);
    if(die>k)
    {
        cout << -1;
        return 0;
    }
    for(int i=1;i<=n;++i)
    {
        if(save>=n-k)
            break;
        save++;
        min_ans=a[i];
    }
    printf("%.2f",min_ans);
    return 0;
}
```

