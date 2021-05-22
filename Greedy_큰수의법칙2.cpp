#include <vector> # vector 사용을 위한 헤더
#include <algorithm> # sort() 사용을 위한 헤더
#include <iostream>
using namespace std; 

int n, m, k; 
vector<int> v;  //벡터 생성 

int main() {
  // n, m, k를 공백을 기준으로 구분해 입력받기 
  cin >> n >> m >> k;

  //N개의 수를 공백을 기준으로 구분해 입력받기 
  for(int i=0; i<n; i++){
    int x;
    cin >> x;
    v.push_back(x);
  }

  sort(v.begin(), v.end()); //입력받은 수 정렬 
  int first = v[n-1];
  int second = v[n-2]; 

  //가장 큰 수가 더해지는 횟수 계산 
  int cnt = (m / (k+1))*k;
  cnt += m % (k+1);

  int result = 0;
  result += cnt * first;
  result += (m-cnt) * second; 

  cout << result << endl;
  
}
