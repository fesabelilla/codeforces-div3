#include<bits/stdc++.h>
using namespace std;


int main()
{
   vector<int> vec;

   int t;
   cin>>t;

   int n;
   while(t--){
    vec.clear();
    cin>>n;

    int a;
    for(int i = 0 ; i<n*2 ; i++){
        cin>>a;
        vec.push_back(a);
    }

    int evenCount = 0;
    int oddCount = 0;
    for(int i = 0 ; i<vec.size() ; i++){
        if(vec[i]%2 == 0)
            evenCount++;
        else
            oddCount++;

    }

    if(evenCount == oddCount)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
   }


 return 0;
}
