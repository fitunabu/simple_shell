#include <iostream>
/**
* m3
* c2
* n4
*/
using namespace std;

#define m 3
#define c 2
#define n 4

int main(void)
{

int i, j, k;

/* first matrix */

int x[m][c] = {{1,2},{3,4},{5,6}};

/* second matrix */

int y[c][n] = {{7,8,9,10},{11,12,13,14}};

/* for storing the matrix product result */

int z[m][n];

for(i=0; i<m; i++)

for(j=0; j<n; j++)
{

z[i][j] = 0;

for(k=0; k<c; k++)

/* same as z[i][j] = z[i][j] + x[i][k] * y[k][j]; */

z[i][j] += x[i][k] * y[k][j];
}

cout<<"\nMultiply matrix x and matrix y,";
cout<<"\nThen store the result in matrix z.";
cout<<"\nMatrix x is 3x2, and matrix y is 2x4,";
cout<<"\nso, the result, z should be matrix 3x4\n";
cout<<"\nThe matrix product is: \n";

for (i=0; i<m; i++)
{
cout<<"\n";

for(j=0; j<n; j++)

/* display the result... */
cout<<" "<<z[i][j];
}

cout<<endl;

return 0;
}
