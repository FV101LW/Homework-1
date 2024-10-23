#include <iostream>
#include <stack>
using namespace std;

void insertBottom (stack<int>& stk, int a) {
    if (stk.empty()) {
        stk.push(a);
        return;
    }
    
    int top = stk.top();
    stk.pop();
    
    insertBottom(stk, a);
    
    stk.push(top);
}

void revStack(stack<int>& stk) {
    if (stk.empty()) {
        return;
    }
    
    int top = stk.top();
    stk.pop();
    
    revStack(stk);
    
    insertBottom(stk, top);
}

int main() {
    int e = 4, value;
    stack<int> stk;
    
    cout << "Enter the elements to push unto the stack: ";
    //cin >> e;
    
    for (int b = 0; b < e; ++b) {
        cin >> value;
        stk.push(value);
    }
    
    
    
    cout << "Original Stack: " << endl;
    stack<int> temp = stk;
    
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
    
    revStack(stk);
    
    cout << "Reversed Stack: " << endl;
    
    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;

    return 0;
}
