#include <string>

using namespace std;

bool solution(int x) {
    int total = 0;
    int num=x;
    
    while(num>0){
        total += num%10;
        num = num/10;
    }

    return (x % total == 0)?true:  false;
}