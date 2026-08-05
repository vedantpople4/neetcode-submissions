class Solution {
public:
    int binarySearch(vector<int> &nums, int target, int left, int right){
        int l = left, r = right;
        while(r >= l){
            int m = l+(r-l)/2;
            if(nums[m]==target) return m;
            else if (nums[m]<target){
                l = m+1;
            } else r = m-1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
         int left = 0, right = nums.size()-1;
         while(right > left){
            int mid = (left+right)/2;
            if(nums[mid]>nums[right]){
                left = mid+1;
            } else right = mid;
         }
         int pivot = left;
         int result = binarySearch(nums, target, 0, pivot-1);
         if(result != -1) return result;
         return binarySearch(nums, target, pivot, nums.size()-1);
    }
};
