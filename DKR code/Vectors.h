#pragma once
#include <iostream>
#include <cmath>

class Vectors {
private:
    double x;
    double y;
    double z;

public:
    // ����������� �� ������ 3 ��������� 
    Vectors(double xVal, double yVal, double zVal) : x(xVal), y(yVal), z(zVal) {}
    
    // ����� ���������� ������� �������
    double calculateModulus() const;
    // ��������� ������� 
    double calculateScalarProduct(const Vectors& other) const;

    //operator overload
    // �������������� ��������� � ����, ���� ���� �� ���������
    Vectors operator+(const Vectors& other) const;
    Vectors operator-(const Vectors& other) const;
    Vectors operator*(double constant) const;
    
    
    // �������� ���� ��� �����

    bool areCollinear(const Vectors& other) const;
    bool areOrthogonal(const Vectors& other) const;
    
    // �������� ��������� �� ���������
    void checkRelation(const Vectors& other) const;
  
};
