#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    // 항상 w >= h
    int total = brown + yellow;
    
    for(int i = 1; i <= total; i++){
        int j = total / i;
        
        if((i-2)*(j-2) == yellow){
            answer.push_back(j);
            answer.push_back(i);
            break;
        }
    }    
    
    return answer;
}