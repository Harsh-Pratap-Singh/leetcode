/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        vector<int>arr;
        ListNode*temp = head;
        while(temp != NULL){
            arr.push_back(temp ->val);
            temp = temp ->next;
        }
        vector<int>cnt;
        int n = arr.size() - 1;
        int cur = arr[n];
        cnt.push_back(arr[n]);
        for(int i = n-1;i >= 0;i --){
            if(arr[i] >= cur){
                cur = arr[i];
                cnt.push_back(arr[i]);
            }
        }
        reverse(cnt.begin(),cnt.end());

        ListNode*ans= new ListNode(cnt[0]);
        ListNode*m = ans;
        for(int i = 1;i < cnt.size();i++){
            ListNode* temp =  new ListNode(cnt[i]);
            m -> next = temp;
            m = temp;
        }
        return ans;
    }
};