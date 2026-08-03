class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>frq;
        for(int i=0;i<nums.size();i++){
            frq[nums[i]]++;
        }
        priority_queue<pair<int,int>>pri;
        for(auto tp:frq){
            pri.push({tp.second,tp.first});
        }
        vector<int>arr;
        while(k--){
            auto top=pri.top();
            arr.push_back(top.second);
            pri.pop();
        }
        return arr;

    }
};