/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head){
    ListNode* temp = head;
    int cnt = 0;
    while(temp!= NULL){
        temp = temp->next;
        cnt++;
    }
    ListNode* ptr = head;

    if(ptr != NULL){
        if(cnt%2 == 0){
            
            for(int i = 1; i < (cnt/2)+1; i++){
                ptr = ptr->next;
            }
           
        }else{
            
            for(int i = 1; i<= ceil(cnt/2); i++ ){
                ptr = ptr->next;
            }
            
        }
    }
    
    return ptr;
}
};
