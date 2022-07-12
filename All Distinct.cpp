#include <bits/stdc++.h>
using namespace std;


int solve(vector<int> & ans)
{
    unordered_map<int,int> mp;
    for(int i=0;i<ans.size();i++){
        mp[ans[i]]++;
    }
    if(mp.size()==1 && ans.size()%2!=0) return 1;
    if(mp.size()==1 && ans.size()%2==0 ) return 0;
    return ans.size()%2==0 ? mp.size():mp.size()-1;
    
    
}

int main(){
    int t;
    cin>>t;
    

    while(t--){
        int n;
        cin>>n;
    
        vector<int> ans;
        while(n--){
            int s;
            cin>>s;
            ans.push_back(s);
                 
        }
        cout<<solve(ans)<<endl;   
        
    }
    
    return 0;
    
}