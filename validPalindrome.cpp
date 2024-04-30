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
        }

        for (int i = iSize-1 ; i >= 0; i--)
        {
            if (isalnum(s[i]))
            {
                vTemp.push_back(tolower(s[i]));
            }
        }

        if (vPal == vTemp)
        {
            return true;
        }


        return false;
    }
};