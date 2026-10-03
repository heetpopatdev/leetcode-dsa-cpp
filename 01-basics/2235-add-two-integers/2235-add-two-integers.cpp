#include <iostream>
using namespace std;

int addDigits(int num) {

    int last_digit = 0;
    int sum = 0;

    // First digit-sum calculation
    while (num > 0) {
        last_digit = num % 10;
        sum = sum + last_digit;
        num = num / 10;
    }

    // Repeat until only one digit remains
    while (sum > 9) {

        int temp = sum;
        sum = 0;

        while (temp > 0) {
            last_digit = temp % 10;
            sum = sum + last_digit;
            temp = temp / 10;
        }
    }

    return sum;
}

int main() {

    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = addDigits(num);

    cout << "Answer: " << result << endl;

    return 0;
}