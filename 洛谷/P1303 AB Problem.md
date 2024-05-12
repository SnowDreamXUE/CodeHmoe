# A*B Problem

https://www.luogu.com.cn/problem/P1303

## 题目背景

高精度乘法模板题。

## 题目描述

给出两个非负整数，求它们的乘积。

## 输入格式

输入共两行，每行一个非负整数。

## 输出格式

输出一个非负整数表示乘积。

## 样例 #1

### 样例输入 #1

```
1 
2
```

### 样例输出 #1

```
2
```

## 提示

每个非负整数不超过 $10^{2000}$。

```cpp
// By SnowDream 2024/3/28
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 1e7 + 10;
string s1,s2;
int a1[N],a2[N],a3[N];
ll l;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s1 >> s2;
    int l1=s1.length();
    int l2=s2.length();
    l=l1+l2-1;
    for(int i=l1-1;i>=0;i--)
        a1[l1-i-1]=s1[i]-'0';
    for(int i=l2-1;i>=0;i--)
        a2[l2-i-1]=s2[i]-'0';
    for(int i=0;i<l2;++i)
    {
        for(int j=0;j<l1;++j)
        {
            a3[i+j]+=a1[j]*a2[i];
        }
    }
    for(int i=0;i<l;++i)
    {
        a3[i+1]+=a3[i]/10;
        a3[i]%=10;
    }
    if(a3[l]>0)
        l++;
    while(a3[l-1]>=10)
    {
        a3[l]=a3[l-1]/10;
        a3[l-1]%=10;
        l++;
    }
    while(a3[l-1]==0&&l>1)
        l--;
    for(int i=l-1;i>=0;i--)
        cout << a3[i];
    return 0;
}
```

