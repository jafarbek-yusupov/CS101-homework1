#include <iostream>
using namespace std;


void problem1() {
    int a, b,c;
    cin >> a >> b >> c;
    cout << a-b-c << endl;
    cout << c*b-a << endl;
    cout << (2*b)-c+(5*a) << endl;
}

void problem2() {
    int a, b;
    cin >> a >> b;
    cout << (a*b)/2. << endl;
}

void problem3() {
    double a;
    cin >> a;
    cout << "The temperature in Farenheit is equal to " << ((9/5.)*a)+32 << endl;
}

void problem4() {
    int n;
    cin >> n;
    int groups = n/50;
    cout << 50 * ( 1 - n/50. + n/50)  << endl;
}

void problem5() {
    double a, b;
    cin >> a >> b;
    b*=30.48;
    cout << (b>a) << endl;
}
int main() {
    problem1();
    problem2();
    problem3();
    problem4();
    problem5();

    return 0;
}
