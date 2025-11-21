#include "matrix.hpp"
#include <stdexcept>

Matrix::Matrix(int rows, int cols)
{
    if (rows < 1 || cols < 1)
    {
        this->rows = 0;
        this->cols = 0;
        throw std::logic_error("Rows and cols should be positive\n");
    }

    this->rows = rows;
    this->cols = cols;

    data = new int*[this->rows];
    for (int i = 0; i < this->rows; i++)
    {
        data[i] = new int[this->cols];
    }
    
    // initialize the values with 0's
    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->cols; j++)
        {
            data[i][j] = 0;
        }
    }

}