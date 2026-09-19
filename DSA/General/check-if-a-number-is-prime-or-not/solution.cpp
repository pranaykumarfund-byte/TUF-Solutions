class Solution{	
	public:
		bool checkPrime(int num){
            if(num<=1) return false;
            return isPrime(num,2);
		}
    private:
        bool isPrime(int num,int x){
            if(x>sqrt(num)) return true;
            if(num%x == 0) return false;
            return isPrime(num,x+1);
        }

        
};