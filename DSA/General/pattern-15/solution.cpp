class Solution {
public:
    void pattern15(int n) {
        for(int i = 0;i<n;i++){
            char ch = 'A';
            for(int j = 1;j<=n-i;j++){
                cout<<ch;
                ch++;
            }
            cout<<endl;
        }

    }
};