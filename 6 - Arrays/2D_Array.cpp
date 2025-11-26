#include <iostream>

/*

int main()
{
    int matrix [4][3];

    matrix [0][0] = 1;
    matrix [0][1] = 2;
    matrix [0][2] = 3;

    matrix [1][0] = 4;
    matrix [1][1] = 5;
    matrix [1][2] = 6;

    matrix [2][0] = 7;
    matrix [2][1] = 8;
    matrix [2][2] = 9;

    matrix [3][0] = 10;
    matrix [3][1] = 11;
    matrix [3][2] = 12;

    int row = 4, col = 3;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            std::cout << matrix [i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}

*/

int main()
{
    int matrix [4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};

    int pos = matrix[2][1] = 69;

    std::cout << pos;
}
