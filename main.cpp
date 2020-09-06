#include <iostream>
#include <string>
#include "StackType.h"

using namespace std;


int main() {

    StackType<char> stck;
    char x;
    for (x='a'; x<='z'; x++){
        stck.Push(x);
        cout<<x<<endl;

    }
    stck.reverse(); //Created  void reverse() {} in the header file
    cout<<"Printing stack: "<<endl;

    while(!stck.IsEmpty()){
        cout<<stck.Top()<<endl;
        stck.Pop();
    }
}