#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t>0)
    {
      long long n = 0;

      cin>>n;

      map<long long, long long> mp;

      long long ans = 0;

      for(long long i = 0 ; i<n ;i++){
        long long temp ;
        cin>>temp ;
        ans += mp[temp-i];
        //cout<<"ans : "<<ans<<endl;
        mp[temp-i]++;
      }
      /*

        map<long long, long long>::iterator itr;
      for ( itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    */

    cout<<ans<<endl;

     t--;
    }




    return 0;

}
