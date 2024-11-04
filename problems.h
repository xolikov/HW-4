int floorFunction(float n) {
    return static_cast<int>(n);
}

int ceilingFunction(float n) {
    int ans = static_cast<int>(n);
    if (n > ans) return ans + 1;
    else return ans;
}

void swap_values(float &a, float &b) {
    a += b;
    b = a - b;
    a -= b;
}

int multiply(int a, int b) {
    if (b == 0) return 0;
    if (b < 0) return - multiply(a, -b);
    else return a + multiply(a, b - 1);
}

int calculate(int n) {
    if (n == 0) return 0;
    return n % 10 + calculate(n / 10);
}

int bin(int n) {
    if (n == 0) return 0;
    int pos = 1;
    int bin = 0;
    while (n > 0) {
        bin += (n % 2) * pos;
        n /= 2;
        pos *= 10;
    }
    return bin;
}

int midValue(int a, int b, int c) {
    if ((a >= b && a <= c) || (a <= b && a >= c)) return a;
    else if ((b >= a && b <= c) || (b <= a && b >= c)) return b;
    else return c;
}
