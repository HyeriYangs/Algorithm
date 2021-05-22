#include <iostream>
using namespace std; 

int n, k;
int result;

int main() {
  //n, k 를 공백을 기준으로 입력 
  cin >> n >> k; 

  while (true){
    //n이 k로 나누어 떨어지는 수가 될때까지 1씩 빼기 
    int target = (n / k)*k;
    result += (n-target);
    n = target;

    //n이 k보다 작을 때 반복문 탈출 
    if (n<k)
      break; 
    
    //k로 나누기 
    result +=1;
    n /=k;
  }

  // 마지막으로 남은 수에 대해 1씩 빼기 
  result += (n-1);
  cout << result << endl;
}
