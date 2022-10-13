#include <string>
#include <vector>

using namespace std;
int dp[101][101];   

int solution(int m, int n, vector<vector<int>> puddles) {
    fill(dp[0], dp[101], 1);
    
    // 물웅덩이는 0으로 초기화
    for(int i = 0; i < puddles.size(); i++){
        dp[puddles[i][1]][puddles[i][0]] = 0;
       
        if(puddles[i][0] == 1)
            for(int j = puddles[i][1]; j <= n; j++)
                dp[j][1] = 0; 
        
        if(puddles[i][1] == 1)
            for(int j = puddles[i][0]; j <= m; j++)
                dp[1][j] = 0;
    }
        
    // [i][j] 로는 위[i-1][j] , 왼쪽[i][j-1] 에서만 올 수 있음    
    for(int i = 2; i <= n; i++){
        for(int j = 2; j <= m; j++){
            // 물웅덩이면 continue
            if(dp[i][j] == 0) continue;
            
            dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % 1000000007;
        }
    }
    
    return dp[n][m];
}