bool isAnagram(string s, string t) {
        int sSize = s.length(), tSize = t.length(), cSize = 0, index = 0;
        bool swap;
     
        if (sSize != tSize){
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s == t){
            return true;
        }
        return false;
        
    }