https://ac.nowcoder.com/acm/contest/77863/A

### A 登顶

#### 题目描述                    

阿伟住的地方附近有 nnn 座山。
 今天，他想要体验一次性冲到山顶的感觉，于是他打算选择其中一座山登顶。
 已知阿伟的体力为 kkk 点，每向上爬一米消耗一点体力。
 请问他能登顶的最高的山有多高？

#### 输入描述:

```
第一行输入两个整数 n ( 1≤n≤103 )n\ (\ 1 \leq n \leq 10^3\ )n ( 1≤n≤103 ) ，k ( 1≤k≤103 )k\ (\ 1 \leq k \leq 10^3\ )k ( 1≤k≤103 ) ，代表山的数目跟阿伟的体力。
第二行输入 nnn 个整数 ai ( 1≤ai≤103 )a_i\ (\ 1 \leq a_i \leq 10^3\ )ai ( 1≤ai≤103 ) ，代表每座山的高度。
```

#### 输出描述:

```
输出一个整数，代表阿伟能登顶的最高的山的高度。
如果没有阿伟能登顶的山，请输出 −1-1−1 。                     
```

#### 输入

```
4 6
3 4 8 1
```

#### 输出

```
4
```

#### 说明

```
阿伟能登顶第 1,2,41,2,41,2,4 座山，其中最高的山为第 222 座山，高度为 444 。
```

代码：

```cpp
#include<bits/stdc++.h>
using namespace std;
int n,k,mx=-1;
int a[1005];
int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	cin>>n>>k;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		if(a[i]<=k)
			mx=max(mx,a[i]);
	}
	cout<<mx;
	return 0;
}
```

