#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int k = 1;
    vector<int> s;
    
    while(n>0){
        s.push_back(n%3);
        n /= 3;
    }
    
    while(!s.empty()){
        answer += s.back() * k;
        s.pop_back();
        k *= 3;
    }
    
    return answer;
}