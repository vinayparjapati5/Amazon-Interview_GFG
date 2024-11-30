 void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        
      
        d = d%n;
      
        
        vector<int>temp(d);
        
        for(int i=0; i<d; i++){
            temp[i] = arr[i];
            
        }
        
        for(int i=0; i<n-d; i++){
            arr[i] = arr[i+d];
        }
        
        for(int i=n-d; i<n; i++){
            arr[i] = temp[i-n+d];
        }
        
        
        
    }
