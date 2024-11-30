 int trappingWater(vector<int> &arr) {
        // code here
        
        int n = arr.size();
        
        int lmax = 0, rmax = 0;
        int l = 0, r=n-1;
        int total = 0;
        
        while(l<r){
            if(arr[l]<=arr[r]){
                if(lmax>arr[l]){
                    total += lmax-arr[l];
                }
                else{
                    lmax = arr[l];
                }
                l++;
            }
            else{
                if(rmax>arr[r]){
                    total +=rmax-arr[r];
                }
                else{
                    rmax = arr[r];
                }
                r--;
            }
        }
        
        return total;
        
    }
