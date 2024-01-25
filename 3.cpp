#include <iostream>

using namespace std;

const int full = 100;


void inputMatrix(int A[full][full], int m, int n);
void displayMatrix(int A[full][full], int m, int n);
int sumOfMatrix(int A[full][full], int m, int n);
void displayRowSum(int A[full][full], int m, int n);
void displayColSum(int A[full][full], int m, int n);
void transposeMatrix(int A[full][full], int m, int n);

int main() {
    int m, n;
    int matrix[full][full];

    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Input elements into matrix\n";
        cout << "2. Display elements of matrix\n";
        cout << "3. Sum of all elements of matrix\n";
        cout << "4. Display row-wise sum of matrix\n";
        cout << "5. Display column-wise sum of matrix\n";
        cout << "6. Create transpose of matrix\n";
        cout << "7. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputMatrix(matrix, m, n);
                break;
            case 2:
                displayMatrix(matrix, m, n);
                break;
            case 3:
                cout << "Sum of all elements: " << sumOfMatrix(matrix, m, n) << endl;
                break;
            case 4:
                displayRowSum(matrix, m, n);
                break;
            case 5:
                displayColSum(matrix, m, n);
                break;
            case 6:
                transposeMatrix(matrix, m, n);
                break;
            case 7:
                cout << "Exiting the program. Allah Hafiz\n";
                break;
            default:
                cout << "Durust option ka intekhab kijiye\n";
        }

    } while (choice != 7);

    return 0;
}

void inputMatrix(int A[full][full], int m, int n) {
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> A[i][j];
        }
    }
}

void displayMatrix(int A[full][full], int m, int n) {
    cout << "Matrix elements are:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}

int sumOfMatrix(int A[full][full], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += A[i][j];
        }
    }
    return sum;
}

void displayRowSum(int A[full][full], int m, int n) {
    cout << "Row-wise sum of matrix:\n";
    for (int i = 0; i < m; ++i) {
        int rowSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += A[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }
}

void displayColSum(int A[full][full], int m, int n) {
    cout << "Column-wise sum of matrix:\n";
    for (int j = 0; j < n; ++j) {
        int colSum = 0;
        for (int i = 0; i < m; ++i) {
            colSum += A[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
}

void transposeMatrix(int A[full][full], int m, int n) {
    int transposed[full][full];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            transposed[i][j] = A[j][i];
        }
    }

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << transposed[i][j] << "\t";
        }
        cout << endl;
    }
}
