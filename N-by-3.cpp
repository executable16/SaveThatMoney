int Solution::repeatedNumber(const vector<int> &nums) {
   
  int n=nums.size();
        
        
        int count1=0, count2=0;
        int result1=INT_MAX, result2=INT_MAX;
        
        for(int num:nums){
            if(num==result1) count1++;
            else if(num==result2) count2++;
            else if(count1==0) { result1=num; count1=1; }
            else if(count2==0) { result2=num; count2=1; }
            else { count1--; count2--; }
        }
        
        count1=count2=0;
        for(int num:nums){
            if(num==result1) count1++;
            else if(num==result2)  count2++;
        }
        
        
        
        if(count1>n/3) return (result1);
        if(count2>n/3) return(result2);
        else
        return -1;
        
    
	
	
}
