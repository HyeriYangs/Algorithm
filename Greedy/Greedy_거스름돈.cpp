#include <iostream>
using namespace std;

int main() {
  int n = 1260; 
  int count = 0; 

  int coin_types[4] = {500, 100, 50, 10 };

  int coin =0;
  for(int i=0; i<4; i++){
    int coin = coin_types[i];
    count += n / coin; 
    n %= coin; 
  }

  cout<<count <<endl;
  
}
