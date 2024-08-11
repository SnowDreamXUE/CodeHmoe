#include<bits/stdc++.h>
using namespace std;
const int N = 1e4+10;
typedef long long ll;
const double pi = acos(-1.0);
const double eps = 1e-8;
int sgn(double x){
	if(fabs(x)<eps)
		return 0;
	else
		return x<0?-1:1;
}
struct Point{
	double x,y;
	Point(){}
	Point(double x,double y):x(x),y(y){}
	Point operator + (Point B){return Point(x+B.x,y+B.y);}
	Point operator - (Point B){return Point(x-B.x,y-B.y);}
	Point operator * (double k){return Point(x*k,y*k);}
	Point operator / (double k){return Point(x/k,y/k);}
	bool operator == (Point B){return sgn(x-B.x)==0&&sgn(y-B.y)==0;}
};
typedef Point Vector;
double Cross(Vector A,Vector B){return A.x*B.y-A.y*B.x;};
struct Line{
	Point p1,p2;
	Line(){}
	Line(Point p1,Point p2):p1(p1),p2(p2){}
	Line(Point p,double angle){
		p1=p;
		if(sgn(angle-pi/2)==0){p2=(p1+Point(0,1));}
		else{p2=(p1+Point(1,tan(angle)));}
	}
	Line(double a,double b,double c){
		if(sgn(a)==0){
			p1=Point(0,-c/b);
			p2=Point(1,-c/b);
		}
		else if(sgn(b)==0){
			p1=Point(-c/a,0);
			p2=Point(-c/a,1);
		}
		else{
			p1=Point(0,-c/b);
			p2=Point(1,(-c-a)/b);
		}
	}
};
double Dot(Vector A,Vector B){return A.x*B.x+A.y*B.y;}
bool Point_on_seg(Point p,Line v){
	return sgn(Cross(p-v.p1,v.p2-v.p1))==0&&sgn(Dot(p-v.p1,p-v.p2))<=0;
}
int Point_in_polygon(Point pt,Point *p,int n)
{
	for(int i=0;i<n;++i)
	{
		if(p[i]==pt)
			return 3;
	}
	for(int i=0;i<n;++i){
		Line v = Line(p[i],p[(i+1)%n]);
		if(Point_on_seg(pt,v))
			return 2;
	}
	int num=0;
	for(int i=0;i<n;++i)
	{
		int j=(i+1)%n;
		int c=sgn(Cross(pt-p[j],p[i]-p[j]));
		int u=sgn(p[i].y-pt.y);
		int v=sgn(p[j].y-pt.y);
		if(c>0&&u<0&&v>=0)num++;
		if(c<0&&u>=0&&v<0)num--;
	}
	return num != 0;
}
Point p[N],pt;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	
	for(int i=0;i<n;++i)
	{
		cin >> p[i].x >> p[i].y;
	}
	for(int i=0;i<m;++i)
	{
		cin >> pt.x >> pt.y;
		int ans = Point_in_polygon(pt,p,n);
		if(ans==3||ans==2)
		{
			cout << "on\n";
		}
		else if(ans==1)
		{
			cout << "in\n";
		}
		else
		{
			cout << "out\n";
		}
	}
	return 0;
}
