#include<bits/stdc++.h>
#define nl '\n'
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int a,b;
   cin>>a>>b;
   int ans;
   if(a>b)
   {
      int x=a+a-1;
      int y=a+b;
      ans=max(x,y);
   }
   else if(a<b)
   {
      int x=b+b-1;
      int y=a+b;
      ans=max(x,y);
   }
   else
   {
      ans=a+b;
   }
   cout<<ans<<nl;
   
   return 0;
}