// stl : https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
// Vector :: https://www.geeksforgeeks.org/vector-in-cpp-stl/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define vt vectorTest
#define pv printVector


void printVector(vector<int>v){
    for(int i = 0 ;i<v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<endl;

}

void iterators(vector<int>vt){
    cout<<endl<<"####  Iterators  ####"<<endl;


    //## Iterators: ##//
     cout << "Output of begin and end: "<<endl;

     for(auto i = vt.begin(); i != vt.end() ; ++i){
        cout<<*i<<" ";
     }
     cout<<endl;

     cout << "Output of rbegin and rend: "<<endl;
     for(auto i = vt.rbegin(); i != vt.rend() ; ++i){
        cout<<*i<<" ";
     }
     cout<<endl;


}

void capacity(vector<int>vt){
    //## Capacity: ##//
    cout<<endl<<"####  Capacity  ####"<<endl;

    cout << "Size : " << vt.size()<<endl;
    cout << "Capacity : " << vt.capacity()<<endl;
    cout << "Max_Size : " << vt.max_size()<<endl;


    vt.resize(4);

    if(vt.empty()){
        cout<<"Vector is empty"<<endl;
    }else{
        cout<<"Vector is not empty"<<endl;
    }

    vt.shrink_to_fit();

    cout<<"After resizing :: "<<endl;

    for(auto i = vt.begin(); i!=vt.end() ; ++i){
        cout<<*i<<" ";
    }
    cout<<endl;

}

 void elementAccess(vector<int>vt){
    //## Element access: ##//
    cout<<endl<<"####  Element Access  ####"<<endl;

    cout << "Reference operator  = " << vt[2]<<endl;

    cout << "at : = " << vt.at(3)<<endl;

    cout << "front() = " << vt.front()<<endl;

    cout << "back() = " << vt.back()<<endl;

    // pointer to the first element
    int* pos = vt.data();

    cout << "\nThe first element is " << *pos<<endl;
    pv(vt);

 }




void modifiers(){
    //## Modifiers: ##//

    cout<<endl<<"####  Modifiers  ####"<<endl;

    vector<int> v;

    // fill the array with 10 five times
    v.assign(5,10);

    cout << "The vector elements are: ";
    pv(v);

    // inserts 15 to the last position
    v.push_back(15);
    int length = v.size();
    cout<<"The last element is : "<<v[length-1];

    // removes last element
    v.pop_back();

    //print the vector
    cout << "\nThe vector elements are: ";
    pv(v);

    // inserts 5 at the beginning
    v.insert(v.begin(),5);
    cout << "\nThe first element is: " << v[0];

    // removes the first element
    v.erase(v.begin());
    cout << "\nThe first element is: " << v[0];

    // Inserts 20 at the end
    v.emplace_back(20);
    int n = v.size();
    cout << "\nThe last element is: " << v[n - 1];

    // erases the vector
    v.clear();
    cout << "\nVector size after erase(): " << v.size()<<endl;

    // two vector to perform swap
    vector<int> v1,v2;
    v1.pb(1);
    v1.pb(2);
    v2.pb(3);
    v2.pb(4);

    cout << "\n\nVector 1: ";
    pv(v1);

    cout << "\nVector 2: ";
    pv(v2);

    // Swaps v1 and v2
    v1.swap(v2);

    cout << "\nAfter Swap \nVector 1: ";
    pv(v1);

    cout << "\nVector 2: ";
    pv(v2);

}


int main()
{

    vector<int> vectorTest;

    for(int i = 1 ; i<= 10; i++){
        vt.pb(i*10);
    }

    iterators(vt);

    capacity(vt);

    elementAccess(vt);

    modifiers();


    return 0;
}
