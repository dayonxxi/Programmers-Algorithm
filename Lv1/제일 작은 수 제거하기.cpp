#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min_idx = 0;
    
    for(int i = 1; i < arr.size(); i++){
        if(arr[min_idx] > arr[i])
            min_idx = i;
    }
    arr.erase(arr.begin() + min_idx);
    
    if(arr.size() == 0)
        answer.push_back(-1);
    else answer = arr;
    
    return answer;
}