#include <string>
#include <vector>
using namespace std;

int answer = 0;

void DFS(vector<int> numbers, int target, int sum, int index){
  // 종료 조건 (numbers 모두 사용했을 때)
  if(index == numbers.size()){
      if(sum == target)
          answer++;
      
      return;
  }
  
  // 종료 조건 만족하지 않으면 계속 탐색
  DFS(numbers, target, sum + numbers[index], index + 1);
  DFS(numbers, target, sum - numbers[index], index + 1);
}

int solution(vector<int> numbers, int target) {
    DFS(numbers, target, 0, 0);
    
    return answer;
}