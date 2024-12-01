    Node* segregate(Node* head) {
        // Add code here
          Node *zero = new Node(-1), *zeroTail = zero;
        Node *one = new Node(-1), *oneTail = one;
        Node *two = new Node(-1), *twoTail = two;
        
        Node *curr = head;
        
        while(curr != NULL){
            if(curr -> data == 0){
                Node *temp = curr;
                curr = curr->next;
                zeroTail -> next = temp;
                temp->next = NULL;
                zeroTail = zeroTail->next;
            }
            else if(curr -> data == 1){
                Node *temp = curr;
                curr = curr->next;
                oneTail -> next = temp;
                temp->next = NULL;
                oneTail = oneTail->next;
            }
            else{
                Node *temp = curr;
                curr = curr->next;
                twoTail -> next = temp;
                temp->next = NULL;
                twoTail = twoTail->next;
            }
        }
        
        if(one->next != NULL){
            zeroTail -> next = one -> next;
            oneTail ->next = two -> next;
        }
        else{
            zeroTail -> next = two -> next;
        }
        
        return zero->next;
        
    }
