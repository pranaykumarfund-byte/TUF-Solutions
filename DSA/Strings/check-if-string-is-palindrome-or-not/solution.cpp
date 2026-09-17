class Solution{	
	public:		
		bool palindromeCheck(string& s){
			//your code goes here
            
            return isPalin(s,0,s.length()-1);
		}
    private:
        bool isPalin(string&s,int left,int right){
            if(left>=right) return true;
            if(s[left]!=s[right]){
                return false;
            }else{
                return isPalin(s,left+1,right-1);
            }
        }
};