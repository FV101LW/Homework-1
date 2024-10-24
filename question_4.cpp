#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void interleave(queue<int>& q) {
int n = q.size();


//Step 1: Store the 1st half in a vector
vector<int> firstHalf;
for(int i = 0; i < n / 2; ++i) {
  firstHalf.push_back(q.front());
  q.pop();
 }

//Step 2: Store the 2nd half in a vector
vector<int> secondHalf;
for(int i = 0; i < n / 2; ++i) {
  secondHalf.push_back(q.front());
  q.pop();
 }

//Step 3: Interleave the 2 halves
for(int i = 0; i < n / 2; ++i) {
  q.push(firstHalf[i]);
  q.push(secondHalf[i]);
 }
}

int main() {
  //Initialize queue with an even number of integers
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);

  queue<int> tempQueue = q;
  while (!tempQueue.empty()) {
    cout << tempQueue.front() << " ";
    tempQueue.pop();
  }
  cout << endl;

  //To interleave the queue
interleave(q);

  while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;

  return 0;
}
