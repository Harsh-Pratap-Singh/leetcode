class Solution {
public:
    int minNumberOfFrogs(string s) {
        int c = 0, r = 0,  o = 0,a = 0, k = 0;
        int f = 0;
        int ans = 0;
        for(auto i : s){
            if(i == 'c'){
                c++;
                f++;
                
            }
            else if(i == 'r'){
                r++;
                if(r>c) return -1;
            }
            else if(i == 'o'){
                o ++;
                if(o > r) return -1;
            }
            else if(i == 'a'){
                a++;
                if(a > o) return -1;
            }
            else if(i == 'k'){
                k ++;
                if(k > a) return -1;
                f--;
            }
            else{
                return -1;
            }
            ans = max(f,ans);
            
        }
        return (c == r && r == o && o == a && a == k)? ans:-1;
    
    }
};