#include <iostream>
using namespace std;

int main() {
    int a[] = {0, 1, 0, 3, 12};
    int n = 5, index = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] != 0)
            a[index++] = a[i];
    }

    while (index < n)
        a[index++] = 0;

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
