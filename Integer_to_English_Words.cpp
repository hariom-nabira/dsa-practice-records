class Solution {
public:
    string numberToWords(int num) {
        unordered_map<string,int> mp;
        mp[" "] = num%1000;
        num/=1000;
        mp["Thousand "] = num%1000;
        num/=1000;
        mp["Million "] = num%1000;
        num/=1000;
        mp["Billion "] = num%1000;
        num/=1000;
        string ans;
        if(mp["Billion "]){
            ans += helper(mp["Billion "]);
            ans += " Billion";
        }
        if(mp["Million "]){
            if(ans!="") ans+=" ";
            ans += helper(mp["Million "]);
            ans += " Million";
        }
        if(mp["Thousand "]){
            if(ans!="") ans+=" ";
            ans += helper(mp["Thousand "]);
            ans += " Thousand";
        }
        if(ans!="") ans+=" ";
        ans += helper(mp[" "]);
        return ans;
    }
    vector<string> units = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    vector<string> teens = {"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    vector<string> tens = {" Z "," O ","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

    string helper(int n){
        string ans="";
        bool flag = true;
        if(n/100){
            ans += units[n/100];
            ans += " Hundred"; 
        }
        if((n%100)/10 == 1){
            if(ans!="") ans+=" ";
            ans += teens[n%10];
            flag=false;
        }else if((n%100)/10){
            if(ans!="") ans+=" ";
            ans += tens[(n%100)/10];
        }
        if(flag){
            if(ans=="") ans+= units[n%10];
            else if(n%10){
                ans += " "+units[n%10];
            }
        }
        return ans;
    }
};
// Title: Integer to English Words
