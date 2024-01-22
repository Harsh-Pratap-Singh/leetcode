class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>ans;
        long first , second,third;
        unordered_set<string> sign = { "+","-","*","/"};
        for(auto i :tokens){
            if(sign.find(i)== sign.end()){
                ans.push(stoi(i));
            }
            else{
                second = ans.top();
                ans.pop();
                first = ans.top();
                ans.pop();
                
                if(i == "+"){
                    first = first+second;
                }
                if(i == "-"){
                    first = first-second;
                }
                if(i == "*"){
                    first = first*second;
                }
                if(i == "/"){
                    if(second == 0){
                        return INT_MAX;
                    }
                    first = first/second;

                }
                ans.push(first);
            }
        }return ans.top();
    }
};