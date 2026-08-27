class Solution {
public:
    bool isSubString(string a, string b){
        if(b.size() > a.size()) return false;

        for(int i=0; i<=a.size()-b.size(); i++){
            int j;

            for(j=0; j<b.size(); j++){
                if(a[i+j] != b[j]){
                    break;
                }
            }

            if(j == b.size())
                return true;
        }

        return false;
    }

    int repeatedStringMatch(string a, string b) {
        int k = (b.size() + a.size() - 1) / a.size();

        string s = "";

        for(int i=0; i<k; i++){
            s += a;
        }

        if(isSubString(s,b)){
            return k;
        }

        // Need one additional copy
        s += a;

        if(isSubString(s,b)){
            return k + 1;
        }

        return -1;
    }
};