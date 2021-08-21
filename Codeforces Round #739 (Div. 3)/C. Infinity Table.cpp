#include<bits/stdc++.h>
using namespace std;


int main()
{
   int t;
   cin>>t;

   long k ;
   int row, column;
   while(t--){
    cin>>k;

    double sqrtValue = sqrt(k);

    if(floor(sqrtValue) == ceil(sqrtValue)){
        row = ceil(sqrtValue);
        column = 1;
        cout<<row <<" "<< column<<endl;
    }
    else{
        int columnValue = ceil(sqrt(k));
        int midValue = (pow((floor(sqrtValue)),2) + 1 + pow(columnValue,2))/2;

        if(k < midValue){
            column = columnValue;
            row = (k - (pow((floor(sqrtValue)),2) + 1)) + 1 ;
            cout<<row <<" "<< column<<endl;
        }
        else if(k > midValue){
            row = columnValue;
            column = (pow(columnValue,2) - k)+1;
            cout<<row <<" "<< column<<endl;
        }
        else if(k == midValue){
            cout<<columnValue <<" "<< columnValue<<endl;
        }

    }

   }



 return 0;
}
