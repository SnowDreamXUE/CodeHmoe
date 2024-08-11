#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
typedef long long ll;
ll a[N],k,numb,tmp;
int ans;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n >> k;
	numb=(ll)pow(2,k);
	for(int i=1;i<=n;++i)
	{
		cin >> a[i]; 
	}
	int i=1,j=1;
	tmp=a[i];
	while(i<=n)
	{
		if(a[i]<=numb)
		{
			while(tmp<=numb)
			{
				++j;
				if(j>n)
					break;
				tmp*=a[j];
			}
			ans+=(j-i);
			if(j<=n)
				tmp/=a[j];
			j--;
		}
		tmp/=a[i];
		i++;
	}
	cout << ans;
	return 0;
}
