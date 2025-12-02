#include <iostream>
#include <climits>
/*
    Q31.
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

    Q32.
    -------------------------------->


int main()
{
    int matrix [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    int m = sizeof(matrix) / sizeof(matrix[0]);
    int n = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    int sum = 0;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            sum += matrix[i][j];
        }
    }

    std::cout << "Sum of matrix: " << sum;

    return 0;
}

    Q33.
    -------------------------------->

int main()
{
    int matrix [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    int m = sizeof(matrix) / sizeof(matrix[0]);
    int n = sizeof(matrix[0]) / sizeof(matrix[0][0]);


    for(int i = 0; i < m; i++)
    {
        int rowSum = 0;

        for(int j = 0; j < n; j++)
        {
            rowSum += matrix[i][j];
        }

        std::cout << "rowSum of : " << i << " - " << rowSum << " \n";
    }

    std::cout << "------------------\n";
    
    for(int j = 0; j < n; j++)
    {
        int colSum = 0;

        for(int i = 0; i < m; i++)
        {
            colSum += matrix[i][j];
        }
        std::cout << "colSum of : " << j <<  " - " << colSum << " \n";
    }

    return 0;
}

*/