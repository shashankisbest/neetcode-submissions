class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())return false;
        vector<int> freq(26,0);
        for(auto&str : s)freq[str - 'a']++;

        for(auto& a : t){
            int index = a-'a';
            if(freq[index]--<=0)return false;
            
        }
        return true;
    }
};
