gzhu is all you need！

https://ac.nowcoder.com/acm/contest/77448/K

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+10;
char s[N];
int p[4];
int x;
int n;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    int lost=0;
    for(int i=0;i<n;++i)
        cin >> s[i];
    for(int i=0;i<n;++i)
    {
        if(p[0]>0&&p[1]>0&&p[2]>0&&p[3]>0)
        {
            x=p[0]+p[1]+p[2]+p[3];
            memset(p,0,sizeof p);
        }
        if(x==0)
        {
            if(s[i]=='g')
                p[0]++;
            else if(s[i]=='z')
                p[1]++;
            else if(s[i]=='h')
                p[2]++;
            else if(s[i]=='u')
                p[3]++;
            lost++;
        }
        else
            x--;
    }
    cout << lost << "\n";
    return 0;
}
```

