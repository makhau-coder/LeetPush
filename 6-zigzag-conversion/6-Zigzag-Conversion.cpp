class Solution {
public:
    string convert(string s, int r) {
        if(r==1) return s;
        vector<string> ds(r,"");
        int ptr=0;
        int cnt=2;
        bool flag=true; //true for straight down
        for(int i=0; i<s.length(); i++) {
            if(flag) {
                ds[ptr]+=s[i];
                ptr++;
                if(ptr>=r) {
                    if(r==2) ptr=0;else flag=false;
                }
            } else {
                ds[ptr-cnt]+=s[i];
                cnt++;
                if(ptr-cnt==0) {
                    flag=true;
                    ptr=0;
                    cnt=2;
                }
            }
        }
        // for(auto it:ds) {
        //     for(auto it1:it ) {
        //         cout<<it1<<" ";
        //     }
        //     cout<<endl;
        // }
        string ans="";
        for(auto it:ds) {
            for(auto it2:it) {
                ans+=it2;
            }
        }
        return ans;
    }
};