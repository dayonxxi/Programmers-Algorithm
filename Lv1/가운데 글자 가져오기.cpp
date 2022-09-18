#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int mid = s.length() / 2;
    
    if(s.length() % 2 == 0)
        answer = s.substr(mid-1, 2);
    else 
        answer = s[mid];
    
    return answer;
}