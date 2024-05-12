伐木机不要石头！！！(easy version)

https://ac.nowcoder.com/acm/contest/78936/B

```cpp
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
using namespace std;
typedef long long ll;
const int N=1e5+10;

ll a[N],b[N];
int main()
{
	int n,m;
	cin >> n >> m;
	for(int i=0;i<n;++i)
	{
		cin >> a[i];
	}
	for(int i=0;i<m;++i)
	{
		cin >> b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	int ans=0,j=m-1;
	for(int i=n-1;i>=0&&j>=0;i--)
	{
		if(b[j]>=a[i])
		{
			ans++;
			j--;
		}
	}
	cout << ans << "\n";
	return 0;
}
```

