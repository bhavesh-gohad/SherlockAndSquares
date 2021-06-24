#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int q, a, b;
    cin >> q;
    while(q--) {
        cin >> a;
        cin >> b;
        cout << floor(sqrt(b)) - ceil(sqrt(a)) + 1 << endl;
    }
    return 0;
}
