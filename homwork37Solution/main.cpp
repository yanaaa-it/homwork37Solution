#include"util.h"
#include"logic.h"

int main() {
    long long number;

    cout << "Enter a natural number: ";
    cin >> number;

    bool unique = find_digits_Unique(number);
   
    string msg = unique ? "All digits are unique." : "There are duplicate digits.";

    print(msg);

    return 0;
}