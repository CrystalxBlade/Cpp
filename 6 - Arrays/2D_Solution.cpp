#include <iostream>

/*
    Q1.
    -------------------------------->

int main()
{
    int matrix [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    int m = sizeof(matrix) / sizeof(matrix[0]);
    int n = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            std::cout << matrix [i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}

    Q2.
    -------------------------------->
*/

int main()
{
    int matrix [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    int m = sizeof(matrix) / sizeof(matrix[0]);
    int n = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    
}