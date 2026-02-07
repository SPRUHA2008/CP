#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> a = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < a[i].size(); j++)
                cout << a[i][j] << " ";
        } else {
            for (int j = a[i].size() - 1; j >= 0; j--)
                cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

