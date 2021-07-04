#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t>0)
    {
      int n = 0;

      cin>>n;

      int arr[n-1];

      for(int i = 0 ; i<n ; i++)
        cin>>arr[i];

        int counter = 0;
      for(int j = n-1 ; j>=0 ; j--){
        int temp = arr[j];
        for(int i = 0 ; i<j ; i++){
            if((temp - arr[i]) == (j-i)){
                counter++;
            }
        }
      }
    cout<<counter<<endl;

     t--;
    }




    return 0;

}
