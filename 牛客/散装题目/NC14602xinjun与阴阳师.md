xinjun与阴阳师

https://ac.nowcoder.com/acm/problem/14602

```cpp
#include<cstdio>
#include<cstring>
#include<algorithm>
#define MAX 1001
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,m;
        int a[MAX]={0},v[MAX][MAX]={0},w[MAX][MAX]={0},dp[MAX]={0};
        scanf("%d %d",&n,&m);
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            for(int j=1;j<=a[i];j++)
                scanf("%d",&v[i][j]);
            for(int j=1;j<=a[i];j++)
                scanf("%d",&w[i][j]);
        }
        for(int i=1;i<=n;i++)
            for(int j=m;j>=0;j--)
                for(int k=1;k<=a[i];k++)
                    if(j>=w[i][k])
                        dp[j]=max(dp[j],dp[j-w[i][k]]+v[i][k]);
        printf("%d\n",dp[m]);
        t--;
    }
}
```

