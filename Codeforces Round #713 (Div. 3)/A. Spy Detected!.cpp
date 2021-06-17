#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;

    for(int i  = 0 ; i<t ; i++){
       cin>>n;
       int arr[n+1];

       for(int j = 0 ; j<n ; j++){
        cin>>arr[j];
       }

      int temp = arr[0];
      int counter = 1;

      for(int k = 1 ; k<n ; k++){
        if(temp == arr[k]){
            counter++;
        }
      }
      if(counter == 1 ){
        cout<<1<<endl;
      }
      else{
        for(int k = 0 ; k<n ; k++){
            if(temp != arr[k]){
                cout<<k+1<<endl;
            }
        }
      }
    }

return 0;
}
