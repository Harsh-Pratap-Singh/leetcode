class Solution {
public:
    string minRemoveToMakeValid(string s) {
  stack<int> cnt;
  for (auto i = 0; i < s.size(); ++i) {
    if (s[i] == '(' ) 
    {
      cnt.push(i);
        }
    if (s[i] == ')') {
      if (!cnt.empty()) 
        cnt.pop();
      else s[i] = '*';
    }
  }
  while (!cnt.empty()) {
    s[cnt.top()] = '*';
    cnt.pop();
  }
  s.erase(remove(s.begin(), s.end(), '*'), s.end());
  return s;
}
};