#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n;

    cin>>t;

    while(t>0)
    {
        cin>>n;

        if(n>0 && n<10)
        {
            cout<<n<<endl;
        }
        else
        {
            string str = to_string(n);
            int len = str.length();
            //cout<<"Len "<<len<<endl;
            int total = 9 * (len-1);
            //cout<<"total "<<total<<endl;
            int number = 1;

            if(len<10){
            for(int i = 1 ; i<len ; i++){
                number = number + pow(10,i);
            }
            //cout<<number<<endl;

            int match = 0;
            for(int i = 1 ; i<10 ; i++){
              match = number*i;

              if(match<=n){
                total = total + 1 ;
              }
            }
            }
                cout<< total<<endl;

            }

        t--;
    }

    return 0;
}
