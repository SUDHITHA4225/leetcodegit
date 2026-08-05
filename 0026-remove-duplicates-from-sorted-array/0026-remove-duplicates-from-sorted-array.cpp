class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
          if (nums.empty()) return 0;
          map<int,int>m;
          
          for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
          }
          int c=0;
          for(auto ele:m){
            nums[c]=ele.first;
            c++;
          }
              return c;
    }
};