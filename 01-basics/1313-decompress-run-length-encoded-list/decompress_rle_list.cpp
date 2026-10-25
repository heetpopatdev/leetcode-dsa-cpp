#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        // I create this vector integer type new_arr to store output and add
        // elements when needed
        vector<int> new_arr;

        // This loop has i += 2 because I want to iterate this loop on
        // frequency only. With i++ it will also iterate on value as well,
        // which I don't want.
        for (int i = 0; i < nums.size(); i += 2) {

            // Create this variable so I can write an inner loop from 0
            // to frequency and push back the value that many times
            int frequency = nums[i];

            // Create this value to store the value in new_arr using
            // push_back frequency times
            int value = nums[i + 1];

            // This inner loop pushes the value frequency times into new_arr
            for (int j = 0; j < frequency; j++) {
                new_arr.push_back(value);
            }
        }

        return new_arr;
    }
};

int main() {
    Solution solution;

    vector<int> nums = {1, 2, 3, 4};

    vector<int> result = solution.decompressRLElist(nums);

    cout << "Decompressed list: [";

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i < result.size() - 1) {
            cout << ", ";
        }
    }

    cout << "]" << endl;

    return 0;
}