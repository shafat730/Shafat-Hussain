#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
    map<int, int> count;

    for (int i = 1; i <= 9; i++) count[i] = 0;

    for (int num : nums) {
        for (int i = 1; i <= 9; i++) {
            if (num % i == 0) count[i]++;
        }
    }

    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << count[i];
        if (i != 9) cout << ", ";
    }

    cout << endl;
    return 0;
}
