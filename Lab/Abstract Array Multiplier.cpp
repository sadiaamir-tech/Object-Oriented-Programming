#include <iostream>
using namespace std;

class ArrayMultiplier {
public:
    virtual void calculate() = 0; 
};

class ArrayMultiplier1D : public ArrayMultiplier {
private:
    int *A, *B, *C;
    int size;

public:
    ArrayMultiplier1D(int s) {
        size = s;
        A = new int[size];
        B = new int[size];
        C = new int[size];
    }

    void input() {
        cout << "Enter elements of Array A:\n";
        for (int i = 0; i < size; i++)
            cin >> A[i];

        cout << "Enter elements of Array B:\n";
        for (int i = 0; i < size; i++)
            cin >> B[i];
    }

    void calculate() override {
        for (int i = 0; i < size; i++) {
            C[i] = A[i] * B[i];   
        }
    }

    void display() {
        cout << "Result (1D Multiplication): ";
        for (int i = 0; i < size; i++)
            cout << C[i] << " ";
        cout << endl;
    }

    ~ArrayMultiplier1D() {
        delete[] A;
        delete[] B;
        delete[] C;
    }
};

class ArrayMultiplier2D : public ArrayMultiplier {
private:
    int **A, **B, **C;
    int rows, cols;

public:
    ArrayMultiplier2D(int r, int c) {
        rows = r;
        cols = c;

        A = new int*[rows];
        B = new int*[rows];
        C = new int*[rows];

        for (int i = 0; i < rows; i++) {
            A[i] = new int[cols];
            B[i] = new int[cols];
            C[i] = new int[cols];
        }
    }

    void input() {
        cout << "Enter Matrix A:\n";
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> A[i][j];

        cout << "Enter Matrix B:\n";
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> B[i][j];
    }

    void calculate() override {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                C[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    C[i][j] += A[i][k] * B[k][j]; 
                }
            }
        }
    }

    void display() {
        cout << "Result (2D Matrix Multiplication):\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
    }

    ~ArrayMultiplier2D() {
        for (int i = 0; i < rows; i++) {
            delete[] A[i];
            delete[] B[i];
            delete[] C[i];
        }
        delete[] A;
        delete[] B;
        delete[] C;
    }
};

int main() {
    cout << "===== 1D ARRAY MULTIPLICATION =====\n";
    ArrayMultiplier1D obj1(3);
    obj1.input();
    obj1.calculate();
    obj1.display();

    cout << "\n===== 2D MATRIX MULTIPLICATION =====\n";
    ArrayMultiplier2D obj2(2, 2);
    obj2.input();
    obj2.calculate();
    obj2.display();

    return 0;
}
