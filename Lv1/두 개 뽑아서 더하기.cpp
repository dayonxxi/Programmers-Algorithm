#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    vector<bool> exist(201, false);
    
    for(int i = 0; i < numbers.size(); i++)
           for(int j = i+1; j < numbers.size(); j++)
               if(exist[numbers[i]+numbers[j]] == false)
               {
                   answer.push_back(numbers[i]+numbers[j]);
                   exist[numbers[i]+numbers[j]] = true;
               }
    
    sort(answer.begin(), answer.end());
    // answer.erase(unique(answer.begin(), answer.end()), answer.end());
    
    return answer;
}