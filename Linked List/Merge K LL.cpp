 // Function to merge K sorted linked list.
    Node*merge(Node* left, Node*right){
        if(left==NULL) return right;
        if(right==NULL) return left;
        
        Node*ans = new Node(-1);
        Node*temp = ans;
        
        while(left && right){
            if(left->data < right->data){
                temp->next = left;
                temp = left;
                left = left->next;
            }
            else{
                temp->next = right;
                temp = right;
                right = right->next;
            }
        }
        while(left){
                temp->next = left;
                temp = left;
                left = left->next;
        }
        while(right){
                temp->next = right;
                temp = right;
                right = right->next;
        }
        
        return ans->next;
    }
    
    void mergeSort(vector<Node*>&arr, int s, int e){
        if(s>=e) return ;
        
        int mid = s + (e-s)/2;
        
        mergeSort(arr,s,mid);
        mergeSort(arr,mid+1,e);
        
        arr[s] = merge(arr[s],arr[mid+1]);
    }
    Node* mergeKLists(vector<Node*>& arr) {
        // Your code here
        
        int k = arr.size();
        mergeSort(arr,0,k-1);
        return arr[0];
    }
