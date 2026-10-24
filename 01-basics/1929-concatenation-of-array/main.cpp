#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        
        int n = nums.size();

        // here i create a new vector with twice the size of nums
        vector<int> ans(n * 2);

        // And here copy each element into both halves of the new vector
        for (int i = 0; i < n; i++) {

            // here copy the element into the first half
            ans[i] = nums[i];

            // here copy the same element into the second half
            ans[i + n] = nums[i];
        }

        return ans;
    }
};

int main() {


    vector<int> nums = {1, 2, 1};

    //here  create an object of the Solution class
    Solution solution;

    // here i Call the function and store the returned vector
    vector<int> ans = solution.getConcatenation(nums);

    // this is the resulting vector
    cout << "Concatenated Array: [";

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];

        if (i < ans.size() - 1) {
            cout << ", ";
        }
    }

    cout << "]" << endl;

    return 0;
}
