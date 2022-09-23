#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<double> failure;
    double people = stages.size();
    
    for(int i = 1; i <= N; i++){
        double count = 0;
        
        for(int j = 0; j < stages.size(); j++){
            if(stages[j] == i)
                count++;
        }
        
        if(count == 0)
            failure.push_back(0);
        else
            failure.push_back(count / people);
        
        people -= count;
    }
    
    for(int i = 0; i < N; i++){
        auto itr = max_element(failure.begin(), failure.end());
        answer.push_back(itr - failure.begin() + 1);
        *itr = -1;
    }
    
    return answer;
}