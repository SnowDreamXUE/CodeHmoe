# A+B Problem（高精）

https://www.luogu.com.cn/problem/P1601

## 题目描述

高精度加法，相当于 a+b problem，**不用考虑负数**。

## 输入格式

分两行输入。$a,b \leq 10^{500}$。

## 输出格式

输出只有一行，代表 $a+b$ 的值。

## 样例 #1

### 样例输入 #1

```
1
1
```

### 样例输出 #1

```
2
```

## 样例 #2

### 样例输入 #2

```
1001
9099
```

### 样例输出 #2

```
10100
```

## 提示

$20\%$ 的测试数据，$0\le a,b \le10^9$；

$40\%$ 的测试数据，$0\le a,b \le10^{18}$。

```cpp
// By SnowDream 2024/3/27
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 1e7 + 10;
string s1,s2;
int a1[N],a2[N];
ll l;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s1 >> s2;
    int l1=s1.length();
    int l2=s2.length();
    l=(l1>l2)?l1:l2;
    for(int i=l1-1;i>=0;i--)
        a1[l1-i-1]=s1[i]-'0';
    for(int i=l2-1;i>=0;i--)
        a2[l2-i-1]=s2[i]-'0';
    for(int i=0;i<l;++i)
    {
        a1[i]=a1[i]+a2[i];
        a1[i+1]+=a1[i]/10;
        a1[i]=a1[i]%10;
    }
    if(a1[l]!=0)
        l++;
    while(a1[l-1]==0&&l>1)
        l--;
    for(int i=l-1;i>=0;i--)
        cout << a1[i];
    cout << "\n";
    return 0;
}
```

