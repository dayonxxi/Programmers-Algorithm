#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int N;
bool cmp(string a, string b){
    if(a[N] == b[N])
        return a < b;
    else
        return a[N] < b[N];
}

vector<string> solution(vector<string> strings, int n) {
    N = n;
    vector<string> answer = strings;
    
    sort(answer.begin(), answer.end(), cmp);
    
    
    return answer;
}