class Solution {
public:
    string sortVowels(string s) {
       vector<char>hold;
       for(int i = 0;i < s.size();i++){
        char x = s[i];
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o'
            || x == 'u' || x == 'A' || x == 'E' || x == 'I'|| x == 'O' || x == 'U'){
            hold.push_back(x);
            }
       }
       sort(hold.begin(),hold.end());
       int a = 0;
       for(int i = 0;i < s.size();i++){
        char x = s[i];
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o'
            || x == 'u' || x == 'A' || x == 'E' || x == 'I'|| x == 'O' || x == 'U'){
                s[i] = hold[a];
                a++;
            }
       }
       return s;

    }
};