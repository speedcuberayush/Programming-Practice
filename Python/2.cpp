class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int s=0;
        int e=nums.size()-1;
        int ans=e+1;
        while(s<=e){
        
            int mid=(s+e)/2;
            if(nums[mid]>=target) {
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
};

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1, ans = nums.size();
        while (s <= e) {
            int mid = (s + e) / 2;
            if (nums[mid] >= target) {
                ans = mid;
                e = mid - 1;  // search left side
            } else {
                s = mid + 1;  // search right side
            }
        }
        return ans;
    }
};
