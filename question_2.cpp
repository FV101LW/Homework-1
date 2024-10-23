#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void print(const vector<int>& arr) {
  stack<int> stk;
  vector<int> nge (arr.size(), -1);

  for (int i = 0; i < arr.size(); ++i) {
    while (!s.empty() && arr[i] > arr[s.top()] ) {
      nge[s.top()] = arr[i];
      s.pop();
    }
    s.push(i);
  }
cout << "Next Greater Elements: " << endl;
  for (const auto& element : nge) {
    cout << element << " ";
  }
  cout << endl; 
}

main () {
  vector<int> arr = {4, 5, 2, 25};
  print(arr);
  return 0;
}
