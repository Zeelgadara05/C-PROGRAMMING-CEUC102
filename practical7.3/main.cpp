#include "Temperature.h"
#include <iostream>

using namespace std;

int main() {
    Celsius c(100.0);
    Fahrenheit f(212.0);

    cout << "--- Type Conversion ---\n";
    Fahrenheit convertedToF = c;
    Celsius convertedToC = f;

    cout << c.getTemp() << " Celsius is " << convertedToF.getTemp() << " Fahrenheit.\n";
    cout << f.getTemp() << " Fahrenheit is " << convertedToC.getTemp() << " Celsius.\n\n";

    cout << "--- Equality Operator (==) ---\n";
    if (c == f) {
        cout << "100 Celsius is mathematically equal to 212 Fahrenheit.\n\n";
    }

    cout << "--- Dynamic Queue (FIFO) ---\n";
    DynamicQueue dq;
    dq.enqueue(Celsius(10.0));
    dq.enqueue(Celsius(20.0));
    dq.enqueue(convertedToC);

    cout << "Queue contents: ";
    dq.display();

    cout << "After one dequeue: ";
    dq.dequeue();
    dq.display();
    cout << "\n";

    cout << "--- Fixed Array (Static Storage) ---\n";
    FixedArray fa;
    fa.add(Celsius(0.0));
    fa.add(Celsius(37.0));
    fa.add(convertedToC);

    cout << "Array contents: ";
    fa.display();

    return 0;
}
