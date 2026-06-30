#include "mat3.h"

//// Constructors

// Defauls constructor
mat3::mat3() : 
    m{
        1.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 1.0f
    } {}

// Constructor with 9 values
mat3::mat3(
    float x0, float y0, float z0,
    float x1, float y1, float z1,
    float x2, float y2, float z2
) : 
    m{
        x0, y0, z0,
        x1, y1, z1,
        x2, y2, z2
    } {}



// Returns the value at the specified position
float mat3::getValue(int row, int col) const
{
    return m[col * rows + row];
}

// Changes the value at the specicfied position
void mat3::setValue(int row, int col, float value)
{
    m[col * rows + row] = value;
}



// Linear multiplication
mat3 mat3::multiply(float scalar) const
{
    mat3 result;
    for (int i = 0; i < rows * cols; i++)
    {
        result.m[i] = m[i] * scalar;
    }
    return result;
}

// Linear multiplication operator
mat3 mat3::operator*(float scalar) const
{
    return multiply(scalar);
}



// Matrix multiplication
mat3 mat3::matmul(const mat3& other) const
{
    mat3 result;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result.m[i * cols + j] = 
            m[i * cols + 0] * other.m[0 * cols + j] +
            m[i * cols + 1] * other.m[1 * cols + j] +
            m[i * cols + 2] * other.m[2 * cols + j];
        }
    }
    return result;
}

// Matrix multiplication operator
mat3 mat3::operator*(const mat3& other) const
{
    return matmul(other);
}



//// Type casting

// Cast to a float pointer
mat3::operator const float*() const
{
    return m;
}