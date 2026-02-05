#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    vector<long long> fib;

    if (n >= 1) fib.push_back(0);
    if (n >= 2) fib.push_back(1);

    for (int i = 2; i < n; i++) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }

    cout << "Fibonacci Series:\n";
    for (int i = 0; i < n; i++) {
        cout << fib[i] << " ";
    }

    return 0;
}
