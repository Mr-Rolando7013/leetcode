class Solution {
public:
    bool isSubsequence(string s, string t) {
        int iSize = t.size(), c=0;
        string sTemp;

        for (int i = 0; i < iSize; i++)
        {
            //If is not in t, ignore and continue.
            if (t[i] == s[c])
            {
                sTemp += t[i];
                c++;
            }
        }

        if (sTemp == s)
        {
            return true;
        }
        return false;
    }
};