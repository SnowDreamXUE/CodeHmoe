神说要有光

https://ac.nowcoder.com/acm/contest/78965/I

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
char s[2005][2005];
int n;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(s,'a',sizeof s);
    int q;
    cin >> n;
    cin >> q;
    while(q--)
    {
        int choice,which;
        char color;
        cin >> choice;
        if(choice==5)
        {
            cin >> which;
            for(int i=1;i<=n;++i)
                cout << s[which][i];
            cout << "\n";
        }
        else
        {
            cin >> which >> color;
            if(choice==1) 
            {
                for(int i=1;i<=n;++i)
                    s[which][i]=color;
            }
            else if(choice==2)
            {
                for(int i=1;i<=n;++i)
                    s[i][which]=color;
            }
            else if(choice==3)
            {
                for(int i=1;i<=n;++i)
                {
                    if(which-i>0)
                    {
                        s[i][which-i]=color;
                        s[which-i][i]=color;
                    }
                }
            }
            else if(choice==4)
            {
                for(int i=1;i<=n;++i)
                    for(int j=1;j<=n;++j)
                        if(i-j==which)
                            s[i][j]=color;
            }
        }
    }
    return 0;
}
```

