#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int arr_len = arr.size();
    
    for(int i = 0; i < arr_len; i++){
        answer += arr[i];
    }
    answer /= arr_len;
    
    return answer;
}