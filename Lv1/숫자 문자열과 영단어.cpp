#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string answer;
    string num;
    string words[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight","nine" };
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9')
            answer += s[i];
        else{
            num += s[i];
            for(int j = 0; j < 10; j++){
                if(num == words[j]){
                    answer += to_string(j);
                    num.clear();
                }
            }
        }
    }
    
    return stoi(answer);
}