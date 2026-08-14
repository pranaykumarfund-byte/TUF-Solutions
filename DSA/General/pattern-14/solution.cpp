class Solution {
public:
    void pattern14(int n) {
        for(int i = 1;i<=n;i++){
            char el = 'A';
            for(int j = 0;j<i;j++){
                cout<<el;
                el++;
            }
            cout<<endl;
        }
    }
};