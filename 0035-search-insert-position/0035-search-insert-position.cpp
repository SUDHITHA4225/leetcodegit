class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int mis=l+(h-l)/2;
            if(nums[mis]==target){
                return mis;
            }
            else if(nums[mis]>target){
                h=mis-1;
            }
            else{
                l=mis+1;
            }
        }
   return l;
        
    }
};
