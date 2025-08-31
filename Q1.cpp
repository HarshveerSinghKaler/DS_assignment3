#include <iostream>
#include <stack>
using namespace std;

void push(int arr[], int n, int val, int& top) {
    top++;
    arr[top] = val;
}

void pop(int arr[], int n, int& top) {
    top--;
} 

void isEmpty(int arr[], int n, int& top) {
    if(top == -1) cout<<"Empty";
}

void isFull(int arr[], int n, int& top) {
    if(top > n-1) cout<<"Full";
}

void peek(int arr[], int n, int& top) {
    cout<<arr[top]<<" ";
}

void display(int arr[], int n, int& top) {
    for(int i=top; i>=0; i--) {
        cout<<arr[i]<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

    int top = -1;

    cout<<"Select from 1-6: ";
    cout<<"1 for push: ";
    cout<<"2 for pop: ";
    cout<<"3 for check if empty: ";
    cout<<"4 for check if full: ";
    cout<<"5 for peek: ";
    cout<<"6 for display: ";
    cout<<"0 to exit: ";
    while(1) {
        int choice;
    cin>>choice;
    switch(choice) {
        case 1:
            cout<<"Enter value to push: ";
            int val;
            cin>>val;
            push(arr, n, val, top);
            break;
        case 2:
            pop(arr, n, top);
            break;
        case 3:
            isEmpty(arr, n, top);
            break;
        case 4:
            isFull(arr, n, top);
            break;
        case 5:
            display(arr, n, top);
            break;
        case 6:
            exit(0);
            break;
        default:
            cout<<"Select any one amongst 1-6: ";
        }
    }

    return 0;
}