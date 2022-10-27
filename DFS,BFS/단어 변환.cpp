#include <string>
#include <queue>
#include <vector>

using namespace std;

bool check[51];

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    int n = words.size();
    int len = begin.size();
    
    queue<pair<int, string>> q;
    q.push(make_pair(0, begin));
    
    while(!q.empty()){
        int cnt = q.front().first;
        string cur = q.front().second;
        q.pop();
            
        for(int i = 0; i < n; i++){
            if(check[i]) continue; // 이미 사용한 문자는 pass
            
            // 한자리 수만 다른지 확인
            int diff_cnt = 0;
            for(int c = 0; c < len; c++)
                if(words[i][c] != cur[c]) diff_cnt++;
            
            if(diff_cnt == 1){ // 한자리 수만 다르다면
                if(words[i] == target){ // target과 동일하다면 
                    answer = cnt + 1;
                    break;
                }
                                
                q.push(make_pair(cnt+1, words[i]));
                check[i] = true;
            }
        }
    }
    
    return answer;
}