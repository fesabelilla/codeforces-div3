#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n;

    cin>>t;

    while(t>0){
        cin>>n;

        char arr[n];

        for(int i = 0 ; i<n ;i++){
            cin>>arr[i];
        }

        if( n <= 2){
            cout<<"YES"<<endl;
        }


        //FFGZZZY
        else{

        for(int i = 0 ; i<n ;i++){
                char c = arr[i]; int b = 1;
                for(int j = 0 ; j<n ;j++){
                    if(c == arr[j] && b == 1)
                        b = 1;
                    else if( c != arr[j])
                        b = 0;
                    else if( b == 0 && c == arr[j]){
                        i = n;
                        cout<<"NO"<<endl;
                        break;
                    }
                }
                else{
                        cout<<"YES"<<endl;
                    }

        }
        }



        t--;
    }


return 0;
}
