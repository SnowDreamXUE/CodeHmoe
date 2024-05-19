A+B

https://ac.nowcoder.com/acm/contest/83433/B

将需要进位的位数及其之后的位数提取出来，进行高精度减法

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
string s2;
int n1[N],n2[N];
int n,k;
void sub()//只限大非负整数减小非负整数
{
    int len = k;
    //读取字符串转换为int类型并倒置储存至数组
    n1[len]=1;
    for(int i=0;i<len;++i)
    {
        n2[len-1-i]=s2[i]-'0';
    }
    //模拟竖式减法
    for(int i=0;i<=len;++i)
    {
        n1[i]-=n2[i];
        if(n1[i]<0)//向高位借一个
        {
            n1[i]+=10;
            n1[i+1]--;
        }
    }
    while(!n1[--len]&&len>0);//去除前置0
    len++;
    for(int i=len-1;i>=0;i--)
    {
        cout << n1[i];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> n >> s >> k;
    bool flag=false;
    for(int i=n-k;i<n;++i)
    {
        s2+=s[i];
        if(s[i]!='0')
            flag= true;
    }
    if (flag)
        sub();
    else
        cout << -1;
    return 0;
}
```

