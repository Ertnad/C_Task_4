#include <clocale>

using namespace std;

int main()
{
    int Rows, Columns;
    printf("Enter the dimensionality of the matrix (Rows, Columns): ");
    scanf_s("%i%i", &Rows, &Columns);
    int **A = new int*[Rows];
    for (int i = 0; i < Rows; i++)
    {
        A[i] = new int[Columns];
    }
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            printf("Enter the element [%i][%i] ", i, j);
            scanf_s("%i", &A[i][j]);
        }
    }
    printf("Initial matrix:\n");
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            printf("%i ", A[i][j]);
        }
        printf("\n");
    }
    printf("Odd columns:\n");
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j += 2)
        {
            printf("%i ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}