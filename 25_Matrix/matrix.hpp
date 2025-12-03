#ifndef MATRIX_HPP
#define MATRIX_HPP

template <typename T>
class Matrix
{
    protected:
        int rows, cols;
        T **data;

    public:
        Matrix(int rows = 1, int cols = 1);
        virtual ~Matrix();
        Matrix(const Matrix<T>& other);

        Matrix& operator=(const Matrix<T>& other);

        void print() const;

        Matrix<T> load(const char *file_name);

};


#endif