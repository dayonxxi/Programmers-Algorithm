#include <string>
#include <vector>
using namespace std;

int p1[5] = {1, 2, 3, 4, 5};
int p2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
int p3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int score[3] = {0, };
    
    for(int i = 0; i < answers.size(); i++){
        if(p1[i % 5] == answers[i]) score[0]++;
        if(p2[i % 8] == answers[i]) score[1]++;
        if(p3[i % 10] == answers[i]) score[2]++;        
    }
    
    // max_score = *max_element(score.begin(), score.end());
    int max = -1;
    for(int i = 0; i < 3; i++){
        if(max < score[i])
            max = score[i];
    }
    
    for(int i = 0; i < 3; i++){
        if(max == score[i])
            answer.push_back(i+1);
    }
    
    return answer;
}