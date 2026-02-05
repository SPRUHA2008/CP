#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 0)
        return;

    cout << n << " ";
    printNumbers(n - 1);
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    printNumbers(N);
    return 0;
}
