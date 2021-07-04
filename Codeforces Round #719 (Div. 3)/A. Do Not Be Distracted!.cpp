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

        int flag = 0;
        if( n <= 2){
            cout<<"YES"<<endl;
        }


        //FFGZZZY

        else{

            for(int i = 0 ; i<n ;i++){

                    char c = arr[i]; //ffg
                    int b = 1;
                    int d = 1;

                    for(int j = 0 ; j<n ; j++){

                        if(c == arr[j] && b == 1 && d != 0){ //g
                            b = 1;
                        }
                        else if( c != arr[j]){ //gzzzy
                            b = 1;
                            d = 0;
                        }

                        else if( d == 0 && c == arr[j] && j != i){ //
                            b = 0;
                            i = n;
                            cout<<"NO"<<endl;
                            break;
                        }
                        else if( b == 1 && d == 0){
                            flag = 1;
                        }

                    }

            }
                if(flag == 1)
                 cout<<"YES"<<endl;
        }





        t--;
    }


return 0;
}
