#ifndef SQUAREMATRIX_HPP
#define SQUAREMATRIX_HPP

template <typename T>
class SquareMatrix :public Matrix<T>
{
    private:

    public:
        SquareMatrix(int n = 1);

        SquareMatrix<T> load(const char *file_name);

        SquareMatrix<T> operator=(const SquareMatrix<T>& other);

};


#endif