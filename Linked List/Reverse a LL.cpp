 struct Node* reverseList(struct Node* head) {
        // code here
        // return head of reversed list
        
        
        // ITERATIVE SOLN
        /*Node* temp = head;
        
        Node* prev = NULL;
        
        while(temp!=NULL){
            Node*front  = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        
        return prev;*/
        
        // RECURSIVE 
        
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        Node* newHead = reverseList(head->next);
        
        Node* front = head->next;
        front->next = head;
        head->next = NULL;
        
        return newHead;
    }
