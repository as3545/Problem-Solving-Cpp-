//Code
string hackerrankInString(string s) {
    int count=0;
    string h="hackerrank";
    for(char c : s){
        if(c==h[count]){
            count++;
            if(count==h.size()){
                return "YES";
            }
        } 
    
} return "NO";
}
