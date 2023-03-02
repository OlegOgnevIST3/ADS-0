
int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
  if (a % b == 0) {
    return b;
  }
  if (b % a == 0) {
    return a;
  }
  if (a > b) {
    return gcd(a%b, b); 
  }
  return gcd(a, b%a);
}
