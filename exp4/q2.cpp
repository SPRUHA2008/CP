#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n), temp;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> v[i];

    temp = v;              
    sort(temp.begin(), temp.end());

    if (v == temp)
        cout << "Array is Sorted";
    else
        cout << "Array is Not Sorted";

    return 0;
}
