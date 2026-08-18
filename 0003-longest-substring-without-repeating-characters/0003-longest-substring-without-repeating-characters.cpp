class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>st;
        int l=0;
        int ans=0;
        for(int right=0;right<s.length();right++){
            while(st.find(s[right])!=st.end()){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[right]);
            ans=max(ans,right-l+1);
            
        }
        return ans;
    }
};