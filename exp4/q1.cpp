#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int max1 = v[0], max2 = v[0];

    for (int i = 0; i < n; i++) {
        if (v[i] > max1)
            max1 = v[i];
    }

    for (int i = 0; i < n; i++) {
        if (v[i] > max2 && v[i] < max1)
            max2 = v[i];
    }

    cout << "Second Largest Element is: " << max2;
    return 0;
}

