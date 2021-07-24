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

        long long a = n/3;
        long long b = n - a*2;
        ans2 = abs(b-a);

        if(ans1<ans2){
            cout<<(n - (ceil(n/3)*2))<<" "<< ceil(n/3)<<endl;
        }

        else{
            cout<<b<<" "<< a<<endl;
        }



    }

    return 0 ;
}

