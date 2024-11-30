 Node* divide(Node* head) {
        // code here
        
        Node* oddHead = new Node(-1), *oddTail = oddHead;
        Node* evenHead = new Node(-1), *evenTail = evenHead;
        
        Node* curr = head, *temp;
        
        while(curr){
            temp = curr;
            curr = curr->next;
            temp->next = nullptr;
            
            // odd node
            if(temp->data & 1){
                oddTail->next = temp;
                oddTail = temp;
            }
            else{
                evenTail->next = temp;
                evenTail = temp;
            }
            evenTail->next = oddHead->next;
            
        }
        
        
        return evenHead->next;
        
        
    }
