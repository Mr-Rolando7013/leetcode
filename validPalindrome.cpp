#include <vector>

class Solution {
public:
    
    bool isPalindrome(string s) {
        int iSize = s.length();
        vector<char> vPal, vTemp;

        for (int i = 0; i < iSize; i++)
        {
            if (isalnum(s[i]))
            {
                vPal.push_back(tolower(s[i]));
            }
            if (isalnum(s[iSize - (i+1)]))
            {
                vTemp.push_back(tolower(s[iSize - (i+1)]));
            }
        }

        if (vPal == vTemp)
        {
            return true;
        }


        return false;
    }
};