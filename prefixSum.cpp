#include <iostream>
using namespace std;

const int N=1e6+10;
int q[N]={0};

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        int x;
        scanf("%d", &x);
        q[i]=q[i-1]+x;
    }
    for(int i=0; i<m; i++){
        int a,b; 
        scanf("%d%d", &a, &b);
        printf("%d\n", q[b]-q[a-1]);
    }
    return 0;
}
