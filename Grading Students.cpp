//Code

vector<int> gradingStudents(vector<int> grades) {
    vector<int> r;
    for(int i: grades){
        if(i<38){
            r.push_back(i);
        } else {
            int nm=(i/5+1)*5;
            if (nm-i<3) {
                r.push_back(nm);            
            } else {
                r.push_back(i);
            }
        }
    } return r;
}
