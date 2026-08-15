class Solution {
public:
    void pattern18(int n) {
        for(int i = n-1;i>=0;i--){
            for(char j = 'A'+i;j<='A'+n-1;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};