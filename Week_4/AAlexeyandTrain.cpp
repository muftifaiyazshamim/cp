#include <bits/stdc++.h>
int main() {
   using namespace std;
 
   int t; cin >> t; while (t--) {
      int N; cin >> N;
      vector<int> A(N + 1);
      vector<int> B(N + 1);
      vector<int> T(N);
      for (int i = 0; i < N; i++) {
        cin >> A[i + 1] >> B[i + 1];
      }
      for (int i = 0; i < N; i++) {
        cin >> T[i];
      }
      int cur_time = 0;
      for (int i = 0; i < N; i++) {
         cur_time += (B[i] - A[i] + 1) / 2;
         cur_time = max(cur_time, B[i]);
         cur_time =cur_time+ A[i + 1] - B[i] + T[i];
      }
      cout << cur_time << endl;
   }
}