#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
typedef long long ll;
int f(int x)
{
	int res=0,i;
	for(i=1;i<x;i*=2)
		res+=i;
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	int x;
	while(t--)
	{
		cin >> x;
		cout << f(x) << "\n";
	}
	return 0;
}
