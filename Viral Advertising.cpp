/*
  Initialize variables to keep track of the number of people who liked the advertisement (liked) and the number of people who shared it on the first day (shared).
Iterate from day 1 to the given day (n).
For each day:
Calculate the number of people who liked the advertisement (liked) by taking half of the number of people who received the advertisement on the previous day (shared).
Update the number of people who shared the advertisement on the current day (shared) by multiplying the number of people who liked it (liked) by 3 (since each person shares it with 3 friends).
Update the cumulative number of people who liked the advertisement.
After iterating through all days, return the cumulative number of people who liked the advertisement.
  */
int s=5;
    int l=0;
    int cl=0;
    for(int i=1;i<=n;i++){
        l=s/2;
        cl +=l;
        s=l*3;
    } return cl;
