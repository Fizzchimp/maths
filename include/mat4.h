#pragma once
#include "mat2.h"

class mat4
{
private:
    const int rows = 4;
    const int cols = 4;
    float m[16];

public:
    //// Constructors

    // Default constructor
    mat4();

    // Constructor with 16 values
    mat4(
		float x0, float y0, float z0, float w0,
		float x1, float y1, float z1, float w1,
		float x2, float y2, float z2, float w2,
		float x3, float y3, float z3, float w3
	);



    // Returns the value at the specified position
    float getValue(int row, int col) const;

    // Changes the value at the specified position
    void setValue(int row, int col, float value);



    // Linear multiplication
    mat4 multiply(float scalar) const;

    // Linear multiplication operator
    mat4 operator*(float scalar) const;



    // Matrix multiplication
    mat4 matmul(const mat4& other) const;

    // Matrix multiplication operator
    mat4 operator*(const mat4& other) const;

    

    // Convert to a two by two matrix
    mat2 xy() const;



    //// Type casting
    
    // Cast to a float pointer
    operator const float* () const;


    
    //// Static methods

    // Generate a rotation matrix (around the x axis)
    static mat4 rotationMatX(float angle);

    // Generate a rotation matrix (around the y axis)
    static mat4 rotationMatY(float angle);

    // Generate a rotation matrix (around the z axis)
    static mat4 rotationMatZ(float angle);
};