#include <iostream>
using namespace std;

int main () {

    int m, n, ans;
    int mask = 0;

    cin>> m;

    n = m;

    // if ( m == 0 ) {
    //     cout<<1;
    // }

    while ( n != 0 ) {

        mask = (mask << 1) | 1;
        n = n >> 1;

    }

    ans = (~m) & mask;
    cout<< ans;

}