NING-NING-chatgpt

https://ac.nowcoder.com/acm/contest/77448/H

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e6+10;
string s;
int n;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    getline(cin,s);
    for(int i=0;s[i]!='\0';++i)
    {
        if(s[i]=='4')
            printf("a");
        else if(s[i]=='6')
            printf("b");
        else if(s[i]=='3')
            printf("e");
        else if(s[i]=='9')
            printf("g");
        else if(s[i]=='1')
            printf("l");
        else if(s[i]=='0')
            printf("o");
        else if(s[i]=='5')
            printf("s");
        else if(s[i]=='7')
            printf("t");
        else if(s[i]=='2')
            printf("z");
        else
            printf("%c",s[i]);
    }
    return 0;
}
```

