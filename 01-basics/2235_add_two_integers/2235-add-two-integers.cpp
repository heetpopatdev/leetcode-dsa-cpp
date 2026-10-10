#include <iostream>
using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
    Solution solution;

    cout << solution.sum(12, 5) << endl;
    cout << solution.sum(-10, 4) << endl;
    cout << solution.sum(3, 0) << endl;

    return 0;
}