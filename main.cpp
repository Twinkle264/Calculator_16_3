#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

    string buffer;
    double a, b, result;
    char operation;
    cout << "Input \"exit\" to complete." << endl;

    while (buffer != "exit") {

        cout << "Input an arithmetic operation: ";
        cin >> buffer;

        if (buffer == "exit") return 0;

        std::stringstream buffer_stream(buffer);
        buffer_stream >> a >> operation >> b;

        cout << endl;

        switch (operation) {
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '*':
                result = a * b;
                break;
            case '/':
                if (b == 0) {
                    cerr << "Error! Can't divide by zero." << endl;
                    continue;
                }
                result = a / b;
                break;
            default:
                cerr << "Error! Invalid input." << endl;
                continue;
        }

        cout << "Result: " << result << endl;
        cout << endl;
    }

    return 0;
}
