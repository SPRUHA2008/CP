#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {16, 17, 4, 3, 5, 2};

    int maxRight = a[a.size() - 1];
    cout << maxRight << " ";

    for (int i = a.size() - 2; i >= 0; i--) {
        if (a[i] > maxRight) {
            maxRight = a[i];
            cout << maxRight << " ";
        }
    }

    return 0;
}
