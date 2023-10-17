//Code
int camelcase(string s) {
    int count=1;
    for(char c:s){
        if(isupper(c)){
            count++;
        }
    } return count;
}
