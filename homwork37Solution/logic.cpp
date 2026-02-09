bool find_digits_Unique(long long num) {
    if (num < 0) num = -num;

    while (num > 0) {
        int currentDigit = num % 10;
        long long temp = num / 10;

        while (temp > 0) {
            if (temp % 10 == currentDigit) {
                return false;
            }
            temp /= 10;
        }
        num /= 10;
    }
    return true;
}