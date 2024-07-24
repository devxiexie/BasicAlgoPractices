#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e5+10;
int s[N];
int n;

int main(){
   cin>>n;
   int ans =0;
   int a[n];
   for(int i =0;i<n;i++)cin>>a[i];
   int j=0;
   for(int i=0;i<n;i++){
       s[a[i]]++;
       while(s[a[i]]>1){
           s[a[j]]--;
           j++;
       }
       ans = max(ans, i-j+1);
   }
   cout<<ans<<endl;
}
