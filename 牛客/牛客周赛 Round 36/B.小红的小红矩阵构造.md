小红的小红矩阵构造

https://ac.nowcoder.com/acm/contest/76609/B

```cpp
#include<bits/stdc++.h>
using namespace std;
bool test(int a[100][100],int n,int m)
{
    set<int> s;
    for(int i=0;i<n;i++)
    {
        int tmp=0;
        for(int j=0;j<m;j++)
        {
            tmp^=a[i][j];
        }
        s.insert(tmp);
    }
    for(int j=0;j<m;j++)
    {
        int tmp=0;
        for(int i=0;i<n;i++)
        {
            tmp^=a[i][j];
        }
        s.insert(tmp);
    }
    return s.size()==1;
}

int main()
{
    int n,m;
    long long x,sum=0;
    scanf("%d %d %lld",&n,&m,&x);
    int a[100][100]={0};
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    if(sum==x&&test(a,n,m))
        printf("accepted\n");
    else
        printf("wrong answer\n");
    return 0;
}
```

