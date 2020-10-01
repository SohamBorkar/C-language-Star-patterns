// *********************************************************************
//  Author - Aashish Shirgave
//  Date :- 22nd October 2019
//  Language :- C Language
//  About :- Star Pattern Triangle
//  *********************************************************************


//  //////////////////////////////////////////////////////////////////////

//          *
//         * *
//        * * *
//       * * * *
//      * * * * *
//     * * * * * *
//    * * * * * * *

//  //////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main() {
    printf("This will print triangular star pattern. \n");
    int n = 7;
    int k = 2*n - 2;
    int i, j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<k; j++)
            printf(" ");
        k = k - 1;
        for (j=0; j<=i; j++ )
        {
            printf("* ");
        }
        printf("\n");
    }
}
