#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter an expression: ";
    cin >> str;

    stack<char> s;
    bool balanced = true;

    for (char ch : str) {
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty()) {
                balanced = false;
                break;
            }
            char open = s.top();
            s.pop();
            if ((ch == ')' && open != '(') ||
                (ch == '}' && open != '{') ||
                (ch == ']' && open != '[')) {
                balanced = false;
                break;
            }
        }
    }

    if (!s.empty()) balanced = false;

    if (balanced)
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";

    return 0;
}