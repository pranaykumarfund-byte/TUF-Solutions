class Solution {
public:
    void pattern19(int n) {
        for(int i = 0;i<n;i++){
            for(int j = 1;j<=n-i;j++){
                cout<<"*";
            }
            for(int j = 1;j<=2*i;j++){
                cout<<" ";
            }
            for(int j = 1;j<=n-i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i = 0;i<n;i++){
            for(int j = 1;j<=i+1;j++){
                cout<<"*";
            }
            for(int j = 1;j<=(2*n-2)-2*i;j++){
                cout<<" ";
            }
            for(int j = 1;j<=i+1;j++){
                cout<<"*";
            }
            cout<<endl;
        }

    }
};