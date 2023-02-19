#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Stack {
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool push(int x) {
        if (top >= (MAX_SIZE - 1)) {
            cout << "Error: Stack overflow\n";
            return false;
        }
        else {
            arr[++top] = x;
            return true;
        }
    }

    int pop() {
        if (top < 0) {
            cout << "Error: Stack underflow\n";
            return -1;
        }
        else {
            return arr[top--];
        }
    }

    bool isEmpty() {
        return (top < 0);
    }

    bool search(int x) {
        for (int i = 0; i <= top; i++) {
            if (arr[i] == x) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int x;
    cout << "Enter a value to search: ";
    cin >> x;

    if (s.search(x)) {
        cout << x << " was found in the stack\n";
    }
    else {
        cout << x << " was not found in the stack\n";
    }

    return 0;
}
