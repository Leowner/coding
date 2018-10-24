/**
 * @purpose : compare two-dimensional array with a pointer
 *            of pointer variable.
 * @author  : Yanqing WANG
 * @date    : Oct 10, 2018
 * @version : 1.0.0
*/

#include <stdio.h>
#include <stdlib.h>

const int ROW_SIZE = 3 ; // row size of the matrix
const int COL_SIZE = 5 ; // colomn size of the matrix

int main()
{
    /* to define the variables */
    int indexRow ;
    int indexColumn ;
    int **thePointer ; /* thePointer is the pointer of the pointers */
    int theArray[ ROW_SIZE ][ COL_SIZE ] ; /* the two-dimentional array */
    int counter = 0 ;

    /* define a two-dimentional array, initialize and display it */
    for ( indexRow = 0; indexRow < ROW_SIZE; indexRow++ )
    {
        for ( indexColumn = 0; indexColumn < COL_SIZE; indexColumn++ )
        {
            theArray[ indexRow ][ indexColumn ] = counter++ ;
            printf( "%5d", theArray[ indexRow ][ indexColumn ]) ;
        }
        printf("\n") ;
    }


    /* Allocate memory for each element of thePointer.
       Each element of thePointer is a pointer to a pointer of integers */
    thePointer = ( int ** )malloc( ROW_SIZE * sizeof( int * ) ) ;
    if ( thePointer == NULL )
    {
        printf( "Cannot allocate memory" ) ;
        exit( 1 ) ;
    }

    /* Allocate memory for each array (row) in thePointer */
    for( indexRow = 0; indexRow < ROW_SIZE; indexRow++ )
    {
        thePointer[ indexRow ] = ( int * )malloc( COL_SIZE * sizeof( int ) ) ;
        if ( thePointer[ indexRow ] == NULL )
        {
            printf( "Cannot allocate memory" ) ;
            exit( 1 ) ;
        }
    }

    /* Display the array values just computed */
    printf( "\nThe values in the array are:\n" ) ;
    for ( indexRow = 0; indexRow < ROW_SIZE; indexRow++ )
    {
        for ( indexColumn = 0; indexColumn < COL_SIZE; indexColumn++ )
        {
            thePointer[ indexRow ][ indexColumn ] = ( indexRow  + 1 ) * ( indexColumn + 1 );
            printf( "%5d", thePointer[ indexRow ][ indexColumn ]) ;
        }
        printf("\n") ;
    }

    /* free the allocated memory */
    for ( indexRow = 0; indexRow < ROW_SIZE; indexRow++ )
    {
        free( thePointer[ indexRow ] );
    }
    free( thePointer ) ;
}

/*
 下面的代码段，您嘞可能用得着

    // 阿斯蒂芬
    int num = 0;
    scanf("%d", &num) ;

    // 立刻就好
    int *elements = (int *)malloc(num * sizeof(int)) ;
    for (int index = 0; index < num; index++)
    {
        scanf("%d", elements + index) ;
    }

    // 下面代码段，只是验证上面输入的对不对。不需要时，果断删除
    for (int index = 0; index < num; index++)
    {
        printf("%d\n", *(elements + index)) ;
    }

    // 其它的代码，就仰仗您嘞
    ...

    // 总而言之，如果输入如下：
    6
    0,1,4,10,12,17

    则非常有可能输出：
    1
    3 4
    6 9 10
    2 8 11 12
    5 7 13 16 17

    好好漂亮吧？！
*/
