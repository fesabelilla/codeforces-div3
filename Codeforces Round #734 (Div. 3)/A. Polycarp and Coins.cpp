#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t = 0;

    cin>>t;

    double  n;
    while(t--){
        cin>>n;
        double ans1,ans2;

        ans1 = abs((n - (ceil(n/3)*2)) - ceil(n/3));

        int a = n/3;
        int b = n - a*2;
        ans2 = abs(b-a);

        if(ans1<ans2){
            cout<<(int)(n - (ceil(n/3)*2))<<" "<<(int) ceil(n/3)<<endl;
        }

        else{
            cout<<(int)b<<" "<< (int)a<<endl;
        }



    }

    return 0 ;
}

