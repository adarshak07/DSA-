int majorityElement(int a[], int size)
    {
        
        int ele;
        int freq;
        
        ele = a[0];
        freq = 1;
        
        for(int i=1;i<size;i++) {   //we cancel out elements etc .
            
            if(freq == 0) {
                ele = a[i];
                freq = 1;
            }
            else if(ele == a[i]) freq++;
            
            else freq--;
        }
        
        int count;
        for(int i=0;i<size;i++) {
            if(ele == a[i]) count++;
            
        }
        
        int required = size/2;
        if(count > required)
            return ele;
        else return -1;    
        
