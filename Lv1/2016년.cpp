#include <string>
#include <vector>

using namespace std;

int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string day[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};

string solution(int a, int b) {
    string answer = "";
    int sum = 0;
    
    for(int i = 0; i < a-1; i++)
        sum += month[i];
    sum = (sum + b - 1) % 7;
    
    answer = day[sum];
    
    return answer;
}