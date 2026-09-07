class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int floorVal = -1;
        int ceilVal = -1;

       
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == x) {
                floorVal = nums[mid];
                break; 
            } else if (nums[mid] < x) {
                floorVal = nums[mid]; 
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        
        low = 0; 
        high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == x) {
                ceilVal = nums[mid];
                break; 
            } else if (nums[mid] > x) {
                ceilVal = nums[mid]; 
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return {floorVal, ceilVal};
    }
};
