#include <iostream>
#include <cmath>
using namespace std;


double result = 0;
double sumEquation(int n) {
    if (n > 0) {
        result += pow(-1, n+1) / n;
        sumEquation(n-1);
    }
    return result;
}

double sumEquation() {
    result = 0;
    int n;
    while (true){
        cout <<"Enter the n value: ";
        cin >> n;
        if (n < 1) {
            cout <<"Please enter a number that is greater or equal to 1" << endl;
        }else{
            break;
        }
    }

    result = sumEquation(n);
    return result;
}

int main() {
    int n;
    while (true){
        cout <<"Enter the n value: ";
        cin >> n;
        if (n < 1) {
            cout <<"Please enter a number that is greater or equal to 1" << endl;
        }else{
            break;
        }
    }
    cout <<"Result of the question is: " << sumEquation(n) << endl;

    double answer = sumEquation();
    cout <<"Result of the question is: " << answer << endl;

    return 0;
}
