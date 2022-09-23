#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int p1[5] = {1, 2, 3, 4, 5};
    int p2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int p3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    vector<int> score(3, 0);
    int max_score;
    
    for(int i = 0; i < answers.size(); i++){
        if(answers[i] == p1[i%5])
            score[0]++;
        if(answers[i] == p2[i%8])
            score[1]++;
        if(answers[i] == p3[i%10])
            score[2]++;
    }
    
    max_score = *max_element(score.begin(), score.end());
    
    for(int i = 0; i < 3; i++)
        if(max_score == score[i])
            answer.push_back(i+1);
    
    return answer;
}