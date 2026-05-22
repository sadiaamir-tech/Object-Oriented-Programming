#include <iostream>
using namespace std;

template <class T>
class Matrix {
    int rows, cols;
    T arr[10][10];

public:

    // Constructor
    Matrix(int r = 0, int c = 0) {
        rows = r;
        cols = c;
    }

    // Input
    void input() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> arr[i][j];
            }
        }
    }

    // Display
    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Matrix Multiplication
    Matrix operator*(Matrix m) {

        if (cols != m.rows) {
            throw "Matrix dimensions do not match!";
        }

        Matrix result(rows, m.cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < m.cols; j++) {

                result.arr[i][j] = 0;

                for (int k = 0; k < cols; k++) {
                    result.arr[i][j] += arr[i][k] * m.arr[k][j];
                }
            }
        }

        return result;
    }

    // Scalar Division
    Matrix operator/(T num) {

        if (num == 0) {
            throw "Division by zero!";
        }

        Matrix result(rows, cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.arr[i][j] = arr[i][j] / num;
            }
        }

        return result;
    }

    // Transpose
    Matrix transpose() {

        Matrix t(cols, rows);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                t.arr[j][i] = arr[i][j];
            }
        }

        return t;
    }

    // Determinant
    T determinant() {

        if (rows != 2 || cols != 2) {
            throw "Determinant only for 2x2 matrix!";
        }

        return (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
    }
};

int main() {

    try {

        Matrix<int> A(2,2), B(2,2);

        cout << "Enter Matrix A:\n";
        A.input();

        cout << "Enter Matrix B:\n";
        B.input();

        // Multiplication
        Matrix<int> C = A * B;

        cout << "\nMultiplication Result:\n";
        C.display();

        // Scalar Division
        Matrix<int> D = A / 2;

        cout << "\nAfter Division by 2:\n";
        D.display();

        // Transpose
        cout << "\nTranspose of A:\n";
        Matrix<int> T = A.transpose();
        T.display();

        // Determinant
        cout << "\nDeterminant = "
             << A.determinant() << endl;
    }

    catch (const char* msg) {
        cout << "Exception: " << msg;
    }

    return 0;
} 

#include <iostream>
#include <stdexcept>
using namespace std;

template <class T>
class Matrix {
    int rows, cols;
    T** arr;   // dynamic 2D array

public:
    // Default + Parameterized Constructor
    Matrix(int r = 0, int c = 0) {
        if (r < 0 || c < 0)
            throw invalid_argument("Invalid matrix size!");
        rows = r;
        cols = c;

        if (rows > 0 && cols > 0) {
            arr = new T*[rows];
            for (int i = 0; i < rows; i++) {
                arr[i] = new T[cols];
            }
        } else {
            arr = nullptr;
        }
    }

    // Destructor
    ~Matrix() {
        if (arr) {
            for (int i = 0; i < rows; i++) {
                delete[] arr[i];
            }
            delete[] arr;
        }
    }

    // Input
    void input() {
        cout << "Enter " << rows*cols << " elements:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> arr[i][j];
            }
        }
    }

    // Display
    void display() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Matrix Multiplication
    Matrix operator*(const Matrix& m) const {
        if (cols != m.rows)
            throw invalid_argument("Matrix dimensions do not match for multiplication!");

        Matrix result(rows, m.cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < m.cols; j++) {
                result.arr[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.arr[i][j] += arr[i][k] * m.arr[k][j];
                }
            }
        }
        return result;
    }

    // Scalar Division
    Matrix operator/(T num) const {
        if (num == 0)
            throw invalid_argument("Division by zero!");

        Matrix result(rows, cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.arr[i][j] = arr[i][j] / num;
            }
        }
        return result;
    }

    // Transpose
    Matrix transpose() const {
        Matrix t(cols, rows);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                t.arr[j][i] = arr[i][j];
            }
        }
        return t;
    }

    // Determinant (only for 2x2)
    T determinant() const {
        if (rows != 2 || cols != 2)
            throw invalid_argument("Determinant only defined for 2x2 matrix!");

        return (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
    }
};

int main() {
    try {
        Matrix<int> A(2,2), B(2,2);

        cout << "Enter Matrix A:\n";
        A.input();

        cout << "Enter Matrix B:\n";
        B.input();

        // Multiplication
        Matrix<int> C = A * B;
        cout << "\nMultiplication Result:\n";
        C.display();

        // Scalar Division
        Matrix<int> D = A / 2;
        cout << "\nAfter Division by 2:\n";
        D.display();

        // Transpose
        cout << "\nTranspose of A:\n";
        Matrix<int> T = A.transpose();
        T.display();

        // Determinant
        cout << "\nDeterminant of A = " << A.determinant() << endl;
    }
    catch (const exception& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}

