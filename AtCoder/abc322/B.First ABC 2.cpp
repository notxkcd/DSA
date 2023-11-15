#include <iostream>
#include <string>
using namespace std;
int main(){
  
  size_t N;
  string S;
  cin >> N >> S;
  
  for (size_t i = 0; i < N-2; i++){
    if (S[i] == 'A')
    	if (S[i+1] == 'B')
    		if (S[i+2] == 'C' )
      			{cout << i+1;return 0;}
    }
    
    cout << -1;
      
  }
  
