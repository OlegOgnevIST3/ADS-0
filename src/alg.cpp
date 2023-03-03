
int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
    while(a != 0 && b != 0) {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    return a + b;    
}
