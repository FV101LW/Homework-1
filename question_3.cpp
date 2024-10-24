#include <iostream>
#include <vector>
#include <deque>
using namespace std;

void firstNeg(const vector<int>& arr, int k) {
deque<int> negativeInd; //For index of negative integers
vector<int> results;

for(int i = 0; i < arr.size(); i++) {
if (!negativeInd.empty() && negativeInd.front() < i - k + 1) {
negativeInd.pop_front();
   }

if (arr[i] < 0) {
   negativeInd.push_back(i);
}

if (i >= k - 1) {
   if (!negativeInd.empty()) {
    results.push_back(arr[negativeInd.front()]); }
  else {
   result.push_back(0);
  }
 }
}
for (int neg : results) {
  cout << neg << " ";
}
cout << endl;
 }
}
