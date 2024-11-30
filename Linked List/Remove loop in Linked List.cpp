    Node* detectLoop(Node* head){
        Node*slow = head;
        Node*fast = head;
        
        bool hasLoop = false;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow ==fast){
                
                hasLoop = true;
                break;
                
            }
            
        }
        
        if(!hasLoop) return nullptr;
        
        slow = head;
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow;
    }
    
    
    void removeLoop(Node* head) {
        // code here
        // just remove the loop without losing any nodes
        
        Node* loopStart = detectLoop(head);
        
        if(loopStart==nullptr) return ;
        
        Node*mover = loopStart->next;
        
        while(mover->next!=loopStart){
            mover = mover->next;
        }
        mover->next = nullptr;
    }
