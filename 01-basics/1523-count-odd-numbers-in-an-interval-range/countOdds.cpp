#include <iostream>
using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;

        for (int i = low; i <= high; i++) {
            if (i % 2 != 0) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    int low, high;

    cout << "Enter low: ";
    cin >> low;

    cout << "Enter high: ";
    cin >> high;

    Solution obj;

    int result = obj.countOdds(low, high);

    cout << "Count of odd numbers: " << result << endl;

    return 0;
}