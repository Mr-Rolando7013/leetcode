class Solution {
public:
    bool isValid(string s) {
        int iSize = s.length();
        stack<char> vAnswer;

        for (int i = 0; i < iSize; i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '['){
                vAnswer.push(s[i]);
                
            }
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if (vAnswer.empty()){
                    return false;
                }
                else if (s[i] == ')' && vAnswer.top() != '('){
                    return false;
                }
                else if (s[i] == ']' && vAnswer.top() != '['){
                    return false;
                }
                else if (s[i] == '}' && vAnswer.top() != '{'){
                    return false;
                }
                else{
                    vAnswer.pop();
                }

            }

        }
        if (vAnswer.empty()){
            return true;
        }
        else{
            return false;
        }

        
    }
};
