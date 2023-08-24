class Solution {
public:

    bool isPalindrome(string s) {
        string ans;
        for(int i=0; i<s.length(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                ans += (s[i] + 32);
            }
            else if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                ans += s[i];
            }
        }

        cout<< ans;

        int i = 0;
        int j = ans.length() - 1;

        while(i <= j){
            if(ans[i] != ans[j]){
               return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};