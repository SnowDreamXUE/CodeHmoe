老虎机

https://ac.nowcoder.com/acm/contest/82401/C

```cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;    
ll mod=998244353;
//快速幂
ll ksm(ll a, ll b){
    ll res = 1;
    while(b) {
        if(b & 1)                    // 如果当前b的二进制数字为1，即存在
            res = res * a % mod;       // 结果乘上当前a
        a = a * a % mod;               // 下一位的a的值（开平方）
        b >>= 1;                     // b的下一位二进制数
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    ll m,a,b,c;
    while(t--)
    {
        cin>>m>>a>>b>>c;
        ll t1=m*(m-1)*(m-2)%mod;//计算概率
        ll t3=m%mod;
        ll t2=(m*m*m-t1-t3)%mod;
        ll t4=m*m*m%mod;
        ll ans=(a*t1+b*t2+c*t3)%mod*ksm(t4,mod-2)%mod;
        cout << ans << "\n";
    }
    return 0;
}

```

