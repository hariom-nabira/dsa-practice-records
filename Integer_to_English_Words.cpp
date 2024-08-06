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
            ans += " Billion ";
        }
        if(mp["Million "]){
            ans += helper(mp["Million "]);
            ans += " Million ";
        }
        if(mp["Thousand "]){
            ans += helper(mp["Thousand "]);
            ans += " Thousand ";
        }
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
            ans += " Hundred "; 
        }
        if((n%100)/10 == 1){
            ans += teens[n%10];
            flag=false;
        }else if((n%100)/10){
            ans += tens[(n%100)/10];
            ans += " ";
        }
        if(flag){
            if(ans=="") ans+= units[n%10];
            else if(n%10){
                ans += units[n%10];
            }
        }
        return ans;
    }
};