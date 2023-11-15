#include <iostream>
#include <string>
using namespace std;

int main() {
  int N, M;
  string S, T;
  cin >> N >> M >> S >> T;

  int is_prefix = true;
  for (int i = 0; i < N; i++) {
    if (S[i] != T[i]) is_prefix = false;
  }
  int is_suffix = true;
  for (int i = 0; i < N; i++) {
    if (S[i] != T[M - N + i]) is_suffix = false;
  }

  if (is_prefix) {
    cout << (is_suffix ? 0 : 1) << endl;
  } else {
    cout << (is_suffix ? 2 : 3) << endl;
  }
}
