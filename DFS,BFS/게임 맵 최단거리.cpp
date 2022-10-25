#include <vector>
#include <queue>
using namespace std;

int dist[101][101] = {0, };
bool check[101][101] = {false, };
int n, m;
queue<pair<int,int>> q;

void BFS(vector<vector<int>> maps)
{
    int xi[4] = {1, -1, 0, 0};
    int yi[4] = {0, 0, 1, -1};
    
    q.push(make_pair(0, 0));
    check[0][0] = true;
    dist[0][0] = 1;
    
    while(!q.empty()){    
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int x = curX + xi[i];
            int y = curY + yi[i];

            if(x < 0 || x >= n || y < 0 || y >= m) // map 바깥 부분일 때
                continue;
            if(maps[x][y] == 0) // 벽으로 막혔을 때
                continue;
            if(check[x][y] == true) // 이미 방문했을 때
                continue;

            check[x][y] = true;
            dist[x][y] = dist[curX][curY] + 1;
            q.push(make_pair(x, y));                    
        }    
    }
}

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    n = maps.size();
    m = maps[0].size();
    
    BFS(maps);
    answer = (dist[n-1][m-1] == 0) ? -1 : dist[n-1][m-1];
    
    return answer;
}