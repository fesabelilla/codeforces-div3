//stack : https://www.geeksforgeeks.org/stack-in-cpp-stl/

// LIFO(Last In First Out)

#include<bits/stdc++.h>
using namespace std;

#define pb push_back

int main()
{
    stack<int> stk;

    for(int i = 1; i<=10 ; i++){
        stk.push(i*2);
    }

    cout<<"Print Stack :: "<<endl;
    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }cout<<endl;


    return 0;
}
