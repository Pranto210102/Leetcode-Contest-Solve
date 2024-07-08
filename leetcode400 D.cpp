#include<bits/stdc++.h>
using namespace std;
void minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        set<int>fasiable;
        int ans=INT_MAX;
        for(int i=n-1;i>=0;i--){                  // 1 2 4 5      k=3
            set<int>new_fasiable;
                                                    //  start indx 3
            for(auto v : fasiable){                 //  5
                new_fasiable.insert(nums[i] | v);   //  start indx 2
            }                                       //  4 5
            new_fasiable.insert(nums[i]);           //  start indx 1
                                                    //  2 6 7
            cout<<"start indx "<<i<<"\n";           //  start indx 0                                                  //
            for(auto v : new_fasiable){             //  1 3 7
                cout<<v<<" ";                       //  0  final value for k
                ans=min(ans, abs(v-k));
            }
            cout<<"\n";

            fasiable=new_fasiable;
        }

        cout<<ans<<"\n";


    }
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int k;
    cin>>k;
    minimumDifference(a,k);
}
