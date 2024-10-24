//Question_3
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
   results.push_back(0);
   }   
 }
}
for (int neg : results) {
  cout << neg << " ";
  }
  cout << endl;

   cout << "First negative integer for each window of size " << k << endl;
   
   for (int i = 0; i <= arr.size() - k; i++) {
    //Part that prints the array window
      if (results[i] == 0 ){
         cout << "{" << arr[i] << ", " << arr[i + k - 1]   << "} = 0 (does not contain a negative integer)" << endl;
   } else {  
   cout << "{" << arr[i] << ", " << arr[i + k - 1]   << "} = " << results[i] << endl;
   }
   }
}


int main() {
 vector <int> arr = {-8, 2, 3, -6, 10};
   int k = 2;

   firstNeg(arr, k);

   return 0;
}
