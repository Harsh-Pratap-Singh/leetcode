class Solution {
public:
    string reverseWords(string s) {
        stack<string>cnt;

        int j = 0;
        string x = "";

        for(auto i: s){
            if(isspace(i)){
                if(x != ""){
                    cnt.push(x);
                    x = "";
                    j++;
                }
            }
            else{
                x += i;
            }
        }
        if(x != ""){
            cnt.push(x);
            j++;
        }
        
        int k = 0;
        string y = "";
        while(!cnt.empty()){
            y += cnt.top();
            if( k!= j-1){
                y += " ";
                k++;
            }
            cnt.pop();
        }
        return y;
    }
};