#include <string>
#include <stack>
using namespace std;


class CQueue {
public:
    stack<int> stackA;
    stack<int> stackB;
    CQueue() {

    }

    void appendTail(int value) {
        stackA.push(value);
    }

    int deleteHead() {
        int rtn = 0;
        if (!stackB.empty()) {
            rtn = stackB.top();
            stackB.pop();
            return rtn;
        }
        if (stackA.empty())
            return -1;
        else {
            while (!stackA.empty()) {
                stackB.push(stackA.top());
                stackA.pop();
            }
            rtn = stackB.top();
            stackB.pop();
            return rtn;
        }
    }
};