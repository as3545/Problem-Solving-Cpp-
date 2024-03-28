int utopianTree(int n) {
    int h=1;
    for(int i=0;i<n;i++){
        if(h%2!=0){
            h=h*2;
        } else {
            h=h+1;
        }
    } return h;
}
