class Solution {
public:
    void pattern16(int n) {
        char ch = 'A';
        for(int i = 1;i<=n;i++){
            for(int j = 0;j<i;j++){
                cout<<ch;
            }
            ch++;
            cout<<endl;
        }

    }
};