交换数字

https://ac.nowcoder.com/acm/contest/82401/B

```cpp
// By SnowDream
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
string s1,s2,ans;
int n1[N],n2[N],n3[N];//n1储存被乘数，n2储存乘数，n3储存积

void mul()
{
    int l1=(int)s1.size();
    int l2=(int)s2.size();
    //读取字符串转换为int类型并倒置储存至数组
    for(int i=0;i<l1;++i)
    {
        n1[l1-1-i]=s1[i]-'0';
    }
    for(int i=0;i<l2;++i)
    {
        n2[l2-1-i]=s2[i]-'0';
    }

    for(int i=0;i<l1;++i)
    {
        for(int j=0;j<l2;++j)
        {
            n3[i+j]+=n1[i]*n2[j];
        }
    }
    //处理进位
    int l_max=l1+l2;
    for(int i=0;i<l_max;++i)
    {
        n3[i+1]+=n3[i]/10;
        n3[i]%=10;
    }

    if(n3[l_max])
        l_max++;
    while(n3[l_max-1]>=10)
    {
        n3[l_max]=n3[l_max-1]/10;
        n3[l_max-1]%=10;
        l_max++;
    }
    while(n3[l_max-1]==0&&l_max>1)
        l_max--;

    for(int i=l_max-1;i>=0;i--)
    {
        ans+= to_string(n3[i]);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cin >> s1 >> s2;
    char tmp;
    for(int i=0;i<n;++i)
    {
        if(s1[i]>s2[i])
        {
            tmp=s2[i];
            s2[i]=s1[i];
            s1[i]=tmp;
        }
    }
    ll d1=0,d2=0;
    for(int i=0;i<n;++i)
    {
        d1=(d1*10+(s1[i]-'0'))%998244353;
        d2=(d2*10+(s2[i]-'0'))%998244353;
    }
    s1= to_string(d1);
    s2= to_string(d2);
    mul();
    ll d=0;
    for(int i=0;i<ans.size();++i)
    {
        d=(d*10+(ans[i]-'0'))%998244353;
    }
    cout << d;
    return 0;
}
```

