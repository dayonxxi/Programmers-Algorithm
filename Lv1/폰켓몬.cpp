// 해시로 구현
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> nums) 
{
    unordered_map<int, int> hash;
    
    for(auto num: nums) {
        hash[num] +=1;
    }
    
    return min(hash.size(), nums.size() / 2);
}


// #include <vector>
// #include <algorithm>

// using namespace std;

// int solution(vector<int> nums)
// {
//     int answer = nums.size() / 2;
    
//     sort(nums.begin(), nums.end());
//     nums.erase(unique(nums.begin(), nums.end()), nums.end());
    
//     if(nums.size() < answer)
//         answer = nums.size();
    
//     return answer;
// }
