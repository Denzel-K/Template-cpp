#include <iostream> 
#include <cmath>
using namespace std; 

template <typename T, typename U>

auto max(T x, U y){
  return (x > y) ? x: y;
}

int main(){
  
  cout << max(1.2, 16) << " is greater";
  
  return 0;
}