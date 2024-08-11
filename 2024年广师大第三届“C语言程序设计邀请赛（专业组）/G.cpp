#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
typedef long long ll;
ll a[N];
ll ans=1e10+10,tmp;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0;i<n;++i)
		cin >> a[i];
	for(int i=0;i<n;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			tmp=a[i]^a[j];
			ans=min(ans,tmp);
		}
	}
	cout << ans << "\n";
	return 0;
}
