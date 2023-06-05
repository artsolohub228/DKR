#include "Vectors.h"

double Vectors::calculateModulus() const {
    return std::sqrt(x * x + y * y + z * z);
}

double Vectors::calculateScalarProduct(const Vectors& other) const {
    return x * other.x + y * other.y + z * other.z;
}

Vectors Vectors::operator+(const Vectors& other) const {
    return Vectors(x + other.x, y + other.y, z + other.z);
}

Vectors Vectors::operator-(const Vectors& other) const {
    return Vectors(x - other.x, y - other.y, z - other.z);
}

Vectors Vectors::operator*(double constant) const {
    return Vectors(x * constant, y * constant, z * constant);
}

bool Vectors::areCollinear(const Vectors& other) const {
    double scalarProduct = calculateScalarProduct(other);
    double modulusProduct = calculateModulus() * other.calculateModulus();

    return scalarProduct == modulusProduct;
}

bool Vectors::areOrthogonal(const Vectors& other) const {
    double scalarProduct = calculateScalarProduct(other);

    return scalarProduct == 0;
}

void Vectors::checkRelation(const Vectors& other) const {
    if (areCollinear(other)) {
        std::cout << "The vectors are collinear." << std::endl;
    }
    else if (areOrthogonal(other)) {
        std::cout << "The vectors are orthogonal." << std::endl;
    }
    else {
        std::cout << "The vectors are neither collinear nor orthogonal." << std::endl;
    }
}

