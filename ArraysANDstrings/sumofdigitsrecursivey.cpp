int sumOfDigits(int n) {
    // Write your code here
    if(n/10==0){return n;}
    return n%10+sumOfDigits(n/10);
}
