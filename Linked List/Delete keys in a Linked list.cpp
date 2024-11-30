Node* deleteAllOccurances(Node *head,int x)
{
    //Your code here
    Node* dummyNode = new Node(-1);
    dummyNode->next = head;
    
    Node*curr = dummyNode;
    
    while(dummyNode!=NULL && dummyNode->next!=NULL){
        
        if(dummyNode->next->data == x){
            dummyNode->next = dummyNode->next->next;
        }
        else{
            dummyNode = dummyNode->next;
        }
    }
    
    return curr->next;
}
