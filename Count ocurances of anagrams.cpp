class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int ans = 0;
	    
	    int i=0;
	    int j=0;
	    
	    int k = pat.size();
	    
	   
	    
	    unordered_map<char,int> mp;
	    
	    for(int i=0;i<pat.size();i++) {
	        mp[pat[i]]++;
	    }
	    
	     int count = mp.size();
	    
	    while(j < txt.size()) {
	        
	        if(mp.find(txt[j]) != mp.end()) {
	            mp[txt[j]]--;
	            
	            if(mp[txt[j]] == 0) {
	                count--;
	            }
	        }
	        
	        if(j-i+1 < k) {
	            j++;
	        }
	        else if(j-i+1 == k) {
	            
	            if(count == 0) {
	                ans++;
	            }
	            if(mp.find(txt[i]) != mp.end()) {
	                mp[txt[i]]++;
	            
	            if(mp[txt[i]] == 1) {
	                count++;
	            }
	            }
	            i++;
	            j++;
	        }
	        
	    }
	    return ans;
	}

};
