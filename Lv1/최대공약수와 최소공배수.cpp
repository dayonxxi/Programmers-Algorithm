#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int x = (n > m)? n : m;
    int a, b;
    
    for(int i = 1; i <= x; i++){
        if(n% i == 0 && m % i == 0)
            a = i;        
    }
    answer.push_back(a);
    
    b = n * m / a;
    answer.push_back(b);
    
    return answer;
}