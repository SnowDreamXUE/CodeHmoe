小红的白色字符串

https://ac.nowcoder.com/acm/contest/76609/C

```cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int ans =0;
    bool f = false;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            if(f)
            {
                ans++;
                f=false;
            }
            else
            {
                f=true;
            }
        }
        else
        {
            if(!f)
            {
                f=true;
            }
        }
    }
    cout << ans <<endl;
}
```

