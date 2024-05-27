int multiplyNumbers(int m, int n) {
    // Write your code here
    if(n<1){return 0;}
    int so=multiplyNumbers(m,  n-1);
    return m+so;
}


