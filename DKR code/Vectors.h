#pragma once
#include <iostream>
#include <cmath>

class Vectors {
private:
    double x;
    double y;
    double z;

public:
    // конструктор шо приймаЇ 3 параметри 
    Vectors(double xVal, double yVal, double zVal) : x(xVal), y(yVal), z(zVal) {}
    
    // метод обчисленн€ модулл€ вектора
    double calculateModulus() const;
    // скал€рний добуток 
    double calculateScalarProduct(const Vectors& other) const;

    //operator overload
    // перевантаженн€ оператор≥в у клас≥, типу сво€ д≥€ додаванн€
    Vectors operator+(const Vectors& other) const;
    Vectors operator-(const Vectors& other) const;
    Vectors operator*(double constant) const;
    
    
    // перев≥рка кол≥н або ортог

    bool areCollinear(const Vectors& other) const;
    bool areOrthogonal(const Vectors& other) const;
    
    // перев≥рка в≥дношенн€ м≥ж векторами
    void checkRelation(const Vectors& other) const;
  
};
