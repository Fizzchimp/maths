#pragma once
#include "mat2.h"

class mat3
{
private:
    const int rows = 3;
    const int cols = 3;
    float m[9];

public:
    //// Constructors

    // Default constructor
    mat3();

    // Constructor with 9 values
    mat3(
        float x0, float y0, float z0,
        float x1, float y1, float z1,
        float x2, float y2, float z2
    );



    // Returns the value at the specified position
    float getValue(int row, int col) const;


    // Changes the value at the specified position
    void setValue(int row, int col, float value);



    // Linear multiplication
    mat3 multiply(float scalar) const;

    // Linear multiplication operator
    mat3 operator*(float scalar) const;



    // Matrix multiplication
    mat3 matmul(const mat3& other) const;

    // Matrix multiplication operator
    mat3 operator*(const mat3& other) const;



    //// Type casting

    // Cast to a float pointer
    operator const float*() const;
};