#include "SquareMatrix.hpp"

template <typename T>
SquareMatrix<T>::SquareMatrix(int n = 1) : Matrix<T>(n, n) { }

template <typename T>
SquareMatrix<T> SquareMatrix<T>::load(const char *file_name)
{
    std::ifstream in(file_name);
    if (!in)
    {
        throw std::logic_error("File could not be opened\n");
    }
    
    int r, c;
    in >> r >> c; // Scan two first values form a file
    
    Matrix m(r, c);
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            in >> m.data[i][j];
        }
    }

    in.close();

    return m;
}

template <typename T>
SquareMatrix<T> SquareMatrix<T>::operator=(const SquareMatrix<T>& other)
{
    if (this->data)
    {
        for (int i = 0; i < this->rows; i++)
        {
            delete [] this->data[i];
        }
        delete [] this->data;
    }
    
    this->rows = other.rows;
    this->cols = other.cols;
    
    data = new T*[this->rows];
    for (int i = 0; i < this->rows; i++)
    {
        this->data[i] = new T[this->cols];
    }
    
    // initialization
    for (int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j < this->cols; j++)
        {
           this-> data[i][j] = other.data[i][j];
        }
    }

    return *this;
}
