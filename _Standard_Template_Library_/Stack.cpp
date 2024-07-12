#include <bits/stdc++.h>
using namespace std;


/*Stack is a data structure that follows the Last In, First Out (LIFO) principle, meaning that the last element added to the stack is the
first one to be removed.Elements are added and removed from the same end, typically referred to as the "top" of the stack. */
//It can be compared to a stack of plates....

int main() {
    // Declaration and Initialization
    // Time Complexity: O(1) for initialization
    stack<int> myStack;

    // Pushing elements onto the stack
    // Time Complexity: O(1) for push
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Displaying the top element
    // Time Complexity: O(1) for top
    cout << "Top element: " << myStack.top() << endl;

    // Popping the top element
    // Time Complexity: O(1) for pop
    myStack.pop();

    // Checking if the stack is empty
    // Time Complexity: O(1) for empty
    if (!myStack.empty()) {
        // Time Complexity: O(1) for size
        cout << "Size of stack: " << myStack.size() << endl;
    }

    return 0;
}

