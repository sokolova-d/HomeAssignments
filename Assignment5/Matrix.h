/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number five.
*/

#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <stdexcept>

template <typename T>
class Matrix
{
private:
    size_t rows;
    size_t cols;
    std::vector<T> data;

public:
    Matrix(size_t m, size_t n, const T& value = T())
        : rows(m), cols(n), data(m * n, value) {}

    size_t rowCount() const
    {
        return rows;
    }
    size_t colCount() const
    {
        return cols;
    }

    T& operator()(size_t i, size_t j)
    {
        if (i >= rows || j >= cols)
            throw std::out_of_range("Index out of range");
        return data[i * cols + j];
    }

    const T& operator()(size_t i, size_t j) const
    {
        if (i >= rows || j >= cols)
            throw std::out_of_range("Index out of range");
        return data[i * cols + j];
    }

//Multiplication by a scalar
    Matrix operator*(const T& scalar) const
    {
        Matrix result(rows, cols);
        for (size_t i = 0; i < data.size(); ++i)
            result.data[i] = data[i] * scalar;
        return result;
    }

//Matrix addition
    Matrix operator+(const Matrix& other) const
    {
        if (rows != other.rows || cols != other.cols)
            throw std::invalid_argument("Matrix sizes do not match");
        Matrix result(rows, cols);
        for (size_t i = 0; i < data.size(); ++i)
            result.data[i] = data[i] + other.data[i];
        return result;
    }

// Matrix multiplication
    Matrix operator*(const Matrix& other) const
    {
        if (cols != other.rows)
            throw std::invalid_argument("Invalid matrix sizes for multiplication");
        Matrix result(rows, other.cols, T());
        for (size_t i = 0; i < rows; ++i)
            for (size_t j = 0; j < other.cols; ++j)
                for (size_t k = 0; k < cols; ++k)
                    result(i, j) = result(i, j) + (*this)(i, k) * other(k, j);
        return result;
    }

// Transposition if the matrix
    Matrix transpose() const
    {
        Matrix result(cols, rows);
        for (size_t i = 0; i < rows; ++i)
            for (size_t j = 0; j < cols; ++j)
                result(j, i) = (*this)(i, j);
        return result;
    }
};

#endif
