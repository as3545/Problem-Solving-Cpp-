//Code
string funnyString(string s) {
    string a=s;
    reverse(a.begin(), a.end());
    for(int i=1;i<s.size();i++){
        if(abs(s[i]-s[i-1])!=abs(a[i]-a[i-1]))
            return "Not Funny";  
 } return "Funny";
 
}
