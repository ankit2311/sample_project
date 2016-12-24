#include <iostream>
#include <vector>

using std::vector;

vector<int> optimal_summands(int n) {
  vector<int> summands;
  if(n == 1) {
    summands.push_back(1);
    return summands;
  }
  //write your code here
  int sum = 0;
  for(int i = 1; i <= n/2; i++ ) {
    if( sum+i <= n) {
        sum += i;
        summands.push_back(i);
    }
  }
  if(sum < n) {
    summands[summands.size()-1] += (n-sum);
  }
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
