#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll m, n;
    cin >> m >> n;

    // last digit of m, n
    int last_digit_of_m = m % 10;
    int last_digit_of_n = n % 10;

    // print last digit of m, n summation
    cout << last_digit_of_m + last_digit_of_n;
    
    return 0;
}