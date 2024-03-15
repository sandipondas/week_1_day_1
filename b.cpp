#include<bits/stdc++.h>
#define nl '\n'
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int a,b;
   cin>>a>>b;
   if(a>b) cout<<0<<nl;
   else if(a==b) cout<<2<<nl;
   else
   cout<<(b-a+1)<<nl;
   return 0;
}