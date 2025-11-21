#ifndef MATRIX_HPP
#define MATRIX_HPP

class Matrix
{
    private:
        int rows, cols;
        int **data;

    public:
        Matrix(int rows, int cols);
        ~Matrix();
        Matrix(const Matrix& other);

        Matrix& operator=(const Matrix& other);

        void print() const;

};


#endif