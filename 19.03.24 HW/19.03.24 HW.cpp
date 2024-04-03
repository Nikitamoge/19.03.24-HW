#include <iostream>
using namespace std;

int length(int n) {
    int l = 0;
    do {
        l++;
        n /= 10;
    } while (n);
    return l;
}

bool isEvenSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return (sum % 2 == 0);
}

void luckyticket(int n) {
    if (isEvenSum(n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

void ticket(int n) {
    if (length(n) <= 5) {
        throw "A number less than or equal to 5";
    }
    else if (length(n) >= 7) {
        throw exception("A number greater than or equal to 7");
    }
    luckyticket(n);
}

int main() {
    int number;
    cout << "Enter numbers: ";
    cin >> number;
    try {
        ticket(number);
    }
    catch (const char* p) {
        cout << p << endl;
    }
    catch (const exception& ex) {
        cout << ex.what() << endl;
    }
}
