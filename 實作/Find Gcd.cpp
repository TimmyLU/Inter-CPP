/* 
 * recursive
 * Notice: b must > a
 */
int gcd_recursive(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a%b);
}

/* loop */
int gcd(int a, int b)
{
    while(a != b) {
        if (a > b) a -= b;
        if (b > a) b -= a;
    }
    
    return a;
}

/* Least Common Multiple */
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}