#include "SortStack.h"


void sortStack(stack<int>& inputStack) {
    stack<int> tempStack;

    while (!inputStack.empty()) {
        // Pop the top element from inputStack
        int tmp = inputStack.top();
        inputStack.pop();

        // While temporary stack is not empty and top
        // of stack is greater than temp
        while (!tempStack.empty() && tempStack.top() > tmp) {
            // pop from temporary stack and push
            // it to the input stack
            inputStack.push(tempStack.top());
            tempStack.pop();
        }

        // push temp in tempory of stack
        tempStack.push(tmp);
    }

    // Transfer the sorted elements back into inputStack
    while (!tempStack.empty()) {
        inputStack.push(tempStack.top());
        tempStack.pop();
    }
}
