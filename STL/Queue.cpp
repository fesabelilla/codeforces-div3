// Queue : https://www.geeksforgeeks.org/queue-cpp-stl/
//first in first out (FIFO)


#include<bits/stdc++.h>
using namespace std;

#define pb push_back

void showQueue(queue<int> que){

    while(!que.empty()){
        cout<<que.front()<<" ";
        que.pop();
    }cout<<endl;
}


int main()
{
    queue<int>que;

    for(int i = 1 ; i<=10 ; i++){
        que.push(i*3);
    }

    cout << "The queue gquiz is : "<<endl;

    showQueue(que);

    cout << "\n que.size() : " << que.size();
    cout << "\n que.front() : " << que.front();
    cout << "\n que.back() : " << que.back();

    cout << "\n que.pop() : ";
    que.pop();
    showQueue(que);


    return 0;
}
