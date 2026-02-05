#include <iostream>
using namespace std;

int c(int arr[], int n, int sum) {
    if (sum == 0)
        return 1;
    if (n == 0)
        return 0;

    if (arr[n - 1] > sum)
        return c(arr, n - 1, sum);

    return c(arr, n - 1, sum) +
           c(arr, n - 1, sum - arr[n - 1]);
}

int main() {
    int n, sum;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter required sum: ";
    cin >> sum;

    cout << "Count of subsets: " << c(arr, n, sum);
    return 0;
}
