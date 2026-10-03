#include<iostream>
using namespace std;

class Solution {
    public:
        bool isPalindrome(int x) {
            
            long originalNumber = x;
            long reverse = 0;

            while (x > 0) {

                int num = x % 10;

                reverse = reverse * 10 + num;

                x = x / 10;
            }
            
            return originalNumber == reverse;
        }
};

int main() {

    Solution solution;

    cout << solution.isPalindrom(121) << endl;
    cout << solution.isPalindrome(-121) << endl;
    cout << solution.isPalindrome(10) << endl;

    return 0;
}