#include<bits/stdc++.h>
using namespace std;

int solve(int a, int b , int c){
    return max(0, max(b,c) + 1 - a);
}

int main()
{
    int t;
    long long a,b,c,d,e,f;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;

        cout<<solve(a,b,c)<<" "<<solve(b,a,c)<<" "
        <<solve(c,a,b)<<endl;

    }


 return 0;
}
