

int tribonacci(int n){
    int T0 = 0;
    int T1 = 1;
    int T2 = 1;
    int T3 = 0;
    if(n == 0) return T0;
    if(n == 1 || n == 2) return T1;
    for(int i = 2; i < n; i++){
        T3 = T2 + T1 + T0;
        T0 = T1;
        T1 = T2;
        T2 = T3;
    }
    return T2;
}