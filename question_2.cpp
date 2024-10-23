#include <iostream>
#include <vector>
#include <stack>
#include <iomanip>
using namespace std;

void print(const vector<int>& arr) {
  stack<int> s;
  vector<int> nge (arr.size(), -1);

  for (int i = 0; i < arr.size(); ++i) {
    while (!s.empty() && arr[i] > arr[s.top()] ) {
      nge[s.top()] = arr[i];
      s.pop();
    }
    s.push(i);
  }
cout << "Output: " << endl;
  for (size_t i = 0; i < arr.size(); ++i) {
    cout << setw(6) << arr[i] << " --> " << nge[i] << endl;
  }
  cout << endl; 
}

int main () {
  vector<int> arr = {4, 5, 2, 25};
  print(arr);
  return 0;
}
