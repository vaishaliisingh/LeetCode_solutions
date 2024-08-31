//problem n0. 448 | find all numbers disaapeared in an array
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;  // To store the missing numbers
        int n = nums.size();  // Size of the array
        // Mark positions in the array as visited
        for (int i = 0; i < n; i++) {
            int index = abs(nums[i]) - 1;  // Calculate the index (1-based to 0-based)
            if (nums[index] > 0) {  // If the value at index is positive
                nums[index] = -nums[index];  // Mark it as visited by negating
            }
        }
        // Find the indices that are still positive, which means the corresponding numbers are missing
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {  // Positive value indicates the number (i + 1) is missing
                ans.push_back(i + 1);  // Add the missing number to the result
            }
        }
        
        return ans;  // Return the list of missing numbers
    }
};
