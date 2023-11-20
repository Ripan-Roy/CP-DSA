#include<stdio.h>

int main()
{
    // Initializing A and B matrices
    //A = 3 -1   B = 1  3
    //    4  2       0  2

    int A[2][2] = {{3, -1}, {4, 2}};
    int B[2][2] = {{1, 3}, {0, 2}};

    //Initializing the answer matrix
    int ans[2][2];

    //Multiplying the matrix A by 2
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            A[i][j] = A[i][j] * 2;
        }
    }

    //Multiplying the matrix B by 3
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            B[i][j] = B[i][j] * 3;
        }
    }

    //Now subtracting the matrix 2A from 3B
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            ans[i][j] = B[i][j] - A[i][j];
        }
    }

    //Printing the answer matrix
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}