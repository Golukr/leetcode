class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansindex=0;
        int n = chars.size();
           while(i<n)
    {
 int j=i+1;
  while(j<n && chars[i]==chars[j])
      {
          j++;
      }       
    //At this point either we traversed whole array
        //or we hit to different element 
        // so we need to store old char
      chars[ansindex++]=chars[i];
    // ansindex++;//as after storing we will move to nect index
        
        int count=j-i;//here we are storing count of character
        
        if(count > 1)
        {
            //here we need to convert integer into string so that  two digit number like 10 can be stored as "1" and "0" as per requirement of question
            
            string cnt= to_string(count);
                for(char ch: cnt)
                {
                    chars[ansindex++]=ch;
                 // ansindex++;
                }
        }
               i=j;
           }
        return ansindex;
    }
};