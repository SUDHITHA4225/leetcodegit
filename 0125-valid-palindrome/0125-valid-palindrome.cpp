class Solution {
public:
    bool isPalindrome(string s) {
        string t="";
        for(char ch:s){
            if(isalnum(ch)){
                t+=tolower(ch);
            }
        }
        string n=t;
        int num=t.size();
        for(int i=0;i<num/2;i++){
            
            char ch=n[i];
            n[i]=n[num-i-1];
            n[num-i-1]=ch;
             
           
        }
        if(n==t) return true;
        else return false;
    }

};