#include <iostream>

using namespace std;

void calcSum(int a, int b);
void calcDiv(int a, int b);
int retSum(int a, int b);
float retDiv(int a, int b);

int main()
{
    int a;
    int b;

    cout << "Anna luku a: " << endl;
    cin >> a;
    cout << "Anna luku b: " << endl;
    cin >> b;
    cout << "Luku a = " << a << " ja luku b = " << b << endl;
    calcSum(a, b);
    calcDiv(a, b);

    int sumResult = retSum(a, b);
    cout << "retSum palautti: " << sumResult << endl;

    try {
        float result = retDiv(a, b);
        cout << a << " / " << b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

void calcSum(int a, int b) {
    int sum = a + b;
    cout << "Lukujen summa = " << sum << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "jakaja ei saa olla nolla!" << endl;
    } else {
        int div = a / b;
        cout << "Lukujen osamaara = " << div << endl;
    }
}

int retSum (int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("jakaja ei saa olla nolla!");
    }
    return (float) a / b;
}