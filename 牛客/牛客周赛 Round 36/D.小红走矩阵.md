小红走矩阵

https://ac.nowcoder.com/acm/contest/76609/D

```cpp
#include <bits/stdc++.h>
using namespace std;
// 使用宏定义将x和y分别替换为pair中的first和second成员，方便访问pair的第一个和第二个元素。
#define x first
#define y second
constexpr int N = 1001;
constexpr int INF = 0x3f3f3f3f;

int n, m;
string s[1002];
int dis[N][N];//定义了一个二维数组dis，用于记录从起点到各个位置的最短路径长度。
//定义了四个方向的横纵坐标变化。
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};
//定义了一个函数check，用于检查坐标(x, y)是否在合法范围内。
bool check(int x, int y)
{
    return 0 <= x && x < n && 0 <= y && y < m;
}
int main()
{
    ios::sync_with_stdio(false);//关闭输入输出流的同步，加快输入输出速度。
    cout.tie(nullptr);//取消cout与cin的绑定，避免混合使用时的性能损失。
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        cin >> s[i];//读入第i行的迷宫地图信息。
        for(int j=0;j<m;j++)
        {
            dis[i][j] = INF;//将起点到每个位置的最短路径长度初始化为无穷大。
        }
    }

    queue<array<int, 3>> q;//定义一个存储三个整数的队列q，用于BFS遍历。
    q.push({0, 0, 0});//将起点(0, 0)加入队列，并初始化距离为0。
    dis[0][0] = 0;//起点到自身的距离为0。
    while(!q.empty())
    {
        auto [x, y, d] = q.front();//利用结构化绑定，将队列中的第一个元素解构为横坐标x、纵坐标y和距离d。
        q.pop();
        for(int k=0;k<4;k++)
        {
            int vx = x + dx[k];
            int vy = y + dy[k];
            if(check(vx, vy) && s[x][y] != s[vx][vy] && d + 1 < dis[vx][vy])
            {
                dis[vx][vy] = d + 1;
                q.push({vx, vy, d + 1});
            }
        }
    }
    if(dis[n - 1][m - 1] != INF)
        cout << dis[n - 1][m - 1];
    else
        cout << -1;
}
```

