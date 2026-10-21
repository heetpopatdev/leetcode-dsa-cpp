#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth_of_richest_customer = 0;

        // Visit each customer
        for (int outer = 0; outer < accounts.size(); outer++) {
            int sum = 0;

            // Calculate the current customer's total wealth
            for (int inner = 0; inner < accounts[outer].size(); inner++) {
                sum += accounts[outer][inner];
            }

            // Update the maximum wealth if this customer has more
            if (sum > maxWealth_of_richest_customer) {
                maxWealth_of_richest_customer = sum;
            }
        }

        return maxWealth_of_richest_customer;
    }
};

int main() {
    Solution solution;

    vector<vector<int>> accounts = {
        {1, 2, 3},
        {3, 2, 1}
    };

    cout << "Richest customer wealth: "
         << solution.maximumWealth(accounts) << endl;

    return 0;
}
