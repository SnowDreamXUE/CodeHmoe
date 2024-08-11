#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
typedef long long ll;
int a[3];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t,n=3;
	cin >> t;
	while(t--)
	{
		for(int i=0;i<3;++i)
		{
			cin >> a[i];
		}
		sort(a,a+3);
		if(a[0]+a[2]==2*a[1]&&a[0]*a[2]==a[1]*a[1])
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
