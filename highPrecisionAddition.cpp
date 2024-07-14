#include <iostream>
using namespace std;

const int N = 100010;
int A[N], B[N], C[N];

int add(int a[], int b[], int c[], int cnt) {

    int t = 0;

    for (int i=1; i<=cnt; i++) {
        t += a[i] + b[i];
        c[i] = t % 10;
        t /= 10;
    }
    if (t) c[++cnt] = 1;

    return cnt;
}

int main() {

    string a, b;
    cin >> a >> b;  

    int cnt1 = 0;
    for (int i=a.size()-1; i>=0; i--) A[++cnt1] = a[i] - '0';

    int cnt2 = 0;
    for (int i=b.size()-1; i>=0; i--) B[++cnt2] = b[i] - '0';

    int tot = add(A, B, C, max(cnt1, cnt2));

    for (int i=tot; i>=1; i--) cout << C[i];
}
