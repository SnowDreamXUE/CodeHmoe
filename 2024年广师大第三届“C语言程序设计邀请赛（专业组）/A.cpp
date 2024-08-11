#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
typedef long long ll;
string x,y;
map<string,string> s;
set<string> s1;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
	{
		cin >> x >> y;
		if(s1.find(y)==s1.end())
		{
			s[x]=y;
		}
		else
		{
			s[x]=s[y];
		}
		s1.insert(x);
		s1.insert(y);
		cout << s[x] << "\n";
	}
	return 0;
}
