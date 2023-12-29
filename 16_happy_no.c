bool isHappy(int n) {
    int ans = 0;
    if (n < 10) {
        if (n == 1 || n == 7) { 
            return true;
        } else {
            return false;
        }
    }

    while (n > 0) { 
        int a = n % 10;
        ans += a * a; 
        n = n / 10;
    }
    return isHappy(ans);
}
