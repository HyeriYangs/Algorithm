#include <iostream>
using namespace std; 

int n,m;
int result;

int main() {
  //n,m을 공백을 기준으로 입력받기 
  cin >> n >> m;

  for(int i=0; i<n; i++){
    int min_value = 100;
    for(int j=0; j<m; j++){
      int x;
      cin >> x;
      min_value=min(min_value, x);
    }
    result = max(result, min_value);
  }
  cout << result <<endl;
}
