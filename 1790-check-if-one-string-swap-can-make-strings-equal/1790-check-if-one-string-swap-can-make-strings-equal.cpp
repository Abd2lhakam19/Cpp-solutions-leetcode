class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int>pos;
 int cnt = 0;
 if(s1.size()!=s2.size())
    return false;
 if(s1==s2)
    return true;
 else {
 for(int i =0;i<s1.size();i++)
 {
     if(s1[i]!=s2[i]){
        cnt++;
        pos.push_back(i);
     }
 }
 if(cnt!=2)
 {
     return false;
 }
 else
 {
     swap(s1[pos[0]],s1[pos[1]]);
     if(s1==s2)
        return true;
     else
        return false;
 }
 }
    }
};