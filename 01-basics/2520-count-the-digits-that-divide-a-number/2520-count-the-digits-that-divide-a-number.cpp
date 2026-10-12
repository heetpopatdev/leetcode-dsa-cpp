
#include <iostream>
using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int original_number = num;
        int count = 0;

        while (num > 0) {
            int digit = num % 10;

            if (digit != 0 && original_number % digit == 0) {
                count++;
            }

            num = num / 10;
        }

        return count;
    }
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    Solution solution;

    int result = solution.countDigits(num);

    cout << "Number of digits that divide " << num
         << " = " << result << endl;

    return 0;
}
