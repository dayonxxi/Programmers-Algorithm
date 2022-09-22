#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> trans(int num, int n){
    vector<int> answer;
    
    while(num > 0){
        answer.push_back(num%2);
        num /= 2;
    }
    
    while(answer.size() != n){
        answer.push_back(0);
    }
    reverse(answer.begin(), answer.end());
    
    return answer;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    for(int i = 0; i < n; i++){
        string tmp;
        vector<int> t_arr1 = trans(arr1[i], n);
        vector<int> t_arr2 = trans(arr2[i], n);
        
        for(int j = 0; j < n; j++){
            if(t_arr1[j] || t_arr2[j])
                tmp.push_back('#');
            else
               tmp.push_back(' ');
        }
        answer.push_back(tmp);
    }
    
    return answer;
}