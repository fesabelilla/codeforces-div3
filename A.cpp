#include<bits/stdc++.h>
using namespace std;

int main(){
   
   int t;
   cin>>t;
   
   while(t--){
       int n ; 
       cin>>n;
       vector<int> numberSet;
       
       while(n--){
           int a;
           cin>>a;
           numberSet.push_back(a);
       }
       sort(numberSet.begin(), numberSet.end());
       
       cout<<numberSet[numberSet.size()-1] - numberSet[0]<<endl;
   }

return 0;
}
