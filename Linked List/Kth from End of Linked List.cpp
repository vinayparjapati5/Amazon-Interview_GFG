   int getKthFromLast(Node *head, int k) {
        // Your code here
        
        if(head==nullptr){
            
            return -1;
            
        }
        
        Node* slow = head;
        Node* fast = head;
        
        for(int i=0; i<k; i++){
            
            if(fast==nullptr){
                return -1;
            }
            
            fast = fast->next;
            
        }
        
        while(fast!=nullptr){

            fast = fast->next;
            
            slow = slow->next;
        }
    
        return slow->data;
        
    }
