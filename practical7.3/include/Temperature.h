#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Fahrenheit;

class Celsius {
private:
    double temp;
public:
    Celsius(double t = 0.0);
    operator Fahrenheit() const;
    bool operator==(const Fahrenheit& other) const;
    double getTemp() const;
};

class Fahrenheit {
private:
    double temp;
public:
    Fahrenheit(double t = 0.0);
    operator Celsius() const;
    bool operator==(const Celsius& other) const;
    double getTemp() const;
};

class QueueNode {
public:
    Celsius data;
    QueueNode* next;
    QueueNode(Celsius c);
};

class DynamicQueue {
private:
    QueueNode* front;
    QueueNode* rear;
public:
    DynamicQueue();
    ~DynamicQueue();
    void enqueue(Celsius c);
    void dequeue();
    void display() const;
};

class FixedArray {
private:
    Celsius arr[10];
    int count;
public:
    FixedArray();
    void add(Celsius c);
    void display() const;
};

#endif
