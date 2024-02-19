
class Solution {
public:
    int myAtoi(std::string s) {
        long long result = 0;
        int sign = 1; 
        
        size_t i = 0;
        while (i < s.size() && std::isspace(s[i])) {
            ++i;
        }
        
        if (s[i] == '-' || s[i] == '+') {
            sign = (s[i++] == '-') ? -1 : 1;
        }
        
        while (i < s.size() && std::isdigit(s[i])) {
            result = result * 10 + (s[i++] - '0');
            if (result * sign > INT_MAX) return INT_MAX;
            if (result * sign < INT_MIN) return INT_MIN;
        }
        
        return result * sign;
    }
};
