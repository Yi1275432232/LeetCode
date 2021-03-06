class Solution {
public:
    void rotate(vector<int> &nums, int k) {
        int size = nums.size();
        k %= size;

        my_reverse(nums, 0, size - k);
        my_reverse(nums, size - k, size);
        my_reverse(nums, 0, size);
    }

    void my_reverse(vector<int> &nums, int begin, int end) {
        int temp;

        while (begin < end - 1) {
            temp = nums[begin];
            nums[begin++] = nums[end - 1];
            nums[end-- - 1] = temp;
        }
    }
};