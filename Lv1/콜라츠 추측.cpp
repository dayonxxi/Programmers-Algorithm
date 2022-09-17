#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int count = 0;
    long long n = num;
    
    if(num == 1) return 0;
    
    while(n != 1){
        if(count == 500){
            return -1;
            break;
        }
        
        if(n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
        
        count ++;
    }
    
    return count;
}