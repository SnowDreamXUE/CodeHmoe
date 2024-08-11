#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
typedef long long ll;
const double eps = 1e-7;
struct Point3{double x,y,z;}p[35];
int n;
double Distance(Point3 A,Point3 B){
	return sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y)+(A.z-B.z)*(A.z-B.z));
}
double solve(){
	double T=100.0;
	double delta = 0.98;
	Point3 c = p[0];
	int pos;
	double r;
	while(T>eps){
		pos=0;r=0;
		for(int i=0;i<n;++i)
		{
			if(Distance(c,p[i]>r))
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	return 0;
}
