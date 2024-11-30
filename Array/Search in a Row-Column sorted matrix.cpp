  bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        
        /*int n = mat.size();
        int m = mat[0].size();
        
        for(int i=0; i<n; i++){
            if(mat[i][0]<=x && x<=mat[i][m-1]){
                return binarySearch(mat[i],x);
            }
        }
        
        return false;*/
        
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i=0; i<n; i++){
            int low = 0;
            int high = m-1;
            
            int mid = low+(high-low)/2;
            
            while(low<=high){
                
                int el = mat[i][mid];
                
                if(el == x){
                    return true;
                }
                else if(x<el){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
                
                mid = low +(high-low)/2;
                
            
            }
        }
        
        return false;
        
     
    }
