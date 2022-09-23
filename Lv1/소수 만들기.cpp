#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    vector<int> v;
    
    for(int i = 0; i < nums.size(); i++)
        for(int j = i+1; j < nums.size(); j++)
            for(int k = j+1; k < nums.size(); k++)
                v.push_back(nums[i] + nums[j] + nums[k]);
    
    for(int i = 0; i < v.size(); i++){
        bool prime = false;
        for(int j = 2; j < v[i]; j++){
            if(v[i] % j == 0){
                prime = false;
                break;
            }
            prime = true;
        }
        if(prime == true) answer++;
    }
    
    return answer;
}