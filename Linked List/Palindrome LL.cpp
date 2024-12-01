   Node *reverse(Node*head){
        Node*prev = NULL;
        Node*temp = head;
        
        while(temp){
            Node*front = temp->next;
            temp->next = prev;
            prev = temp;
            temp= front;
        }
        return prev;
    }
    
    bool isPalindrome(Node *head) {
        // Your code here
        
        if(head==NULL || head->next == NULL){
            return true;
        }
        
        Node*slow = head;
        Node*fast = head;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            
        }
        
        Node* newHead = reverse(slow->next);
        
        Node*first = head;
        
        Node*second = newHead;
        
        while(second!=NULL){
            if(first->data!=second->data){
                
                reverse(newHead);
                return false;
            }
            
            first = first->next;
            second = second->next;
            
            
        }
        
        reverse(newHead);
        return true;
    }
