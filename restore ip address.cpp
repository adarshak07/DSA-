class Solution {
    
    void util(string &s,vector<string> &ans,string curr,int ind,int curr_sec_count)
    {
        if(curr_sec_count == 4 && (s.length() == ind))//if we have found all the sections and reached the end
        {
            ans.push_back(curr);//add it to result
            return;//ans return
        }   
        if((s.length()-ind) > 3*(4-curr_sec_count) || ind >= s.length())
        return; // to check if remaining can even form valid ip
        
        //explore all possible lengths of sections
        for(int i=1;i<=3;i++)
        {
            string curr_sec = s.substr(ind,i);//we make the partition
            
            if((curr_sec.length()>1 && curr_sec[0]=='0')|| stoi(curr_sec)>255)//if conditions of a section
               continue;//are not satisfied we continue
            
            //make curr section ip by adding '.' at appropriate positions
            string temp = curr_sec_count == 0 ? curr_sec : (curr + "." + curr_sec);
            
            //call to further check the results
            util(s,ans,temp,ind+i,curr_sec_count+1);
        }
    }
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;//to store the result
        //call utility function 
        util(s,ans,"",0,0);
        //return the result
        return ans;
    }
};
