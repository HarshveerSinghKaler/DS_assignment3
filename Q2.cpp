#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str;
    cout<<"Enter string: ";
    getline(cin, str);

    stack<char> st;

    for(char ch : str) {
        st.push(ch);
    }

    while(st.size() != 0) {
        cout<<st.top();
        st.pop();
    }

    return 0;
}