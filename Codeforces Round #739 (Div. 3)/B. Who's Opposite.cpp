#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t ;
    cin>>t;

    int a,b,c;
    while(t--){
        cin>>a>>b>>c;

        int diff = abs(a-b);
        int values = diff*2;

        if(a>values || b>values || c>values){
            cout<<-1<<endl;
        }
        else{
            int d = c + diff;
            if(d>values)
                d = c - diff;
            cout<<d<<endl;
        }

    }



 return 0;
}

