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
    ListNode* front;
    
    bool  check;
    
    void reorderList(ListNode* head) {
        // corner case 
        if(head->next == NULL || head->next->next == NULL)
            return;
        
        return recur(head,head);
        
    }
    
    void recur(ListNode* back,ListNode* temp){
        
        if( back->next == NULL ){
                front       = temp;             // front starts from head 
                back->next  = front->next;
                front->next = back;
                front = back->next;
            
                return;
        }
        
        recur( back->next,temp ); // back is managed by recursion bhaiya 
        if(check == true) // so that folded part not gets unfolded 
            return;
        
        if( front->next == back || front == back){ // this if will run when all folding is done ( dry run to understand ) (ex 1 - 2 - 3 - 4 - 5- 6 , it will hit for front: 3 , back :4 [ updated list at that time : 1 --> 6 --> 2 --> 5 --> 3 --> 4( 4 next has 5 )
            back->next = NULL;
            check = true;
            return;
        }
        
        
        back->next   = front->next;
        front->next  = back;
        front        = back->next;
        
        
    }
};