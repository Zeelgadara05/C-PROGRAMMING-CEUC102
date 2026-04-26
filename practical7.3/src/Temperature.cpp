#include "Temperature.h"
#include <iostream>

using namespace std;

Celsius::Celsius(double t) {
    temp = t;
}

double Celsius::getTemp() const {
    return temp;
}

Celsius::operator Fahrenheit() const {
    return Fahrenheit((temp * 9.0 / 5.0) + 32.0);
}

bool Celsius::operator==(const Fahrenheit& other) const {
    Celsius converted = other;
    return this->temp == converted.temp;
}

Fahrenheit::Fahrenheit(double t) {
    temp = t;
}

double Fahrenheit::getTemp() const {
    return temp;
}

Fahrenheit::operator Celsius() const {
    return Celsius((temp - 32.0) * 5.0 / 9.0);
}

bool Fahrenheit::operator==(const Celsius& other) const {
    Fahrenheit converted = other;
    return this->temp == converted.temp;
}

QueueNode::QueueNode(Celsius c) {
    data = c;
    next = nullptr;
}

DynamicQueue::DynamicQueue() {
    front = nullptr;
    rear = nullptr;
}

DynamicQueue::~DynamicQueue() {
    while (front != nullptr) {
        dequeue();
    }
}

void DynamicQueue::enqueue(Celsius c) {
    QueueNode* newNode = new QueueNode(c);
    if (rear == nullptr) {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

void DynamicQueue::dequeue() {
    if (front == nullptr) {
        return;
    }
    QueueNode* temp = front;
    front = front->next;
    if (front == nullptr) {
        rear = nullptr;
    }
    delete temp;
}

void DynamicQueue::display() const {
    QueueNode* temp = front;
    while (temp != nullptr) {
        cout << temp->data.getTemp() << "C ";
        temp = temp->next;
    }
    cout << "\n";
}

FixedArray::FixedArray() {
    count = 0;
}

void FixedArray::add(Celsius c) {
    if (count < 10) {
        arr[count] = c;
        count++;
    }
}

void FixedArray::display() const {
    for (int i = 0; i < count; i++) {
        cout << arr[i].getTemp() << "C ";
    }
    cout << "\n";
}
