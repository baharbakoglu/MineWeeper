#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char array[15][15];

    int num1, num2, num3, num4, num5, i, j, x, y; //i,j,x,y are any integer//
    int mineLocX, mineLocY;


    printf("Matrix size:\n");
    scanf("%d", &num1);
    printf("How many mines do you want in the minefield?\n");
    scanf("%d", &num2);

    if((num1<=15)&&((num2>0)&&(num2<(num1*num1)))) {

        for( i=0; i < num1; i++)
            for( j=0; j < num1; j++ )
                array[i][j] = '0';


        srand(time(NULL));

        for( num3=0; num3 < num2; num3++ )
        {
                mineLocX=rand()%num2;
                mineLocY=rand()%num2;
                if(array[mineLocX][mineLocY] !='m')
                {
                    array[mineLocX][mineLocY] ='m';
                }
                else {
                    num3--;
                }
        }



                    for(x=0; x<num1; x++){

                        for(y=0; y<num1; y++) {

                            if(array[x][y]=='m') {

                                if(array[x-1][y-1]!='m')
                                    array[x-1][y-1]++;
                                if(array[x-1][y+1]!='m')
                                    array[x-1][y+1]++;
                                if(array[x+1][y-1]!='m')
                                    array[x+1][y-1]++;
                                if(array[x+1][y+1]!='m')
                                    array[x+1][y+1]++;
                                if(array[x-1][y]!='m')
                                    array[x-1][y]++;
                                if(array[x][y+1]!='m')
                                    array[x][y+1]++;
                                if(array[x+1][y]!='m')
                                    array[x+1][y]++;
                                if(array[x][y-1]!='m')
                                    array[x][y-1]++;
                            }

                        }
                    }



                    for(num4=0; num4<num1; num4++){

                        for(num5=0; num5<num1; num5++)

                            printf("%2c", array[num4][num5]);

                            printf("\n");
                }

    }

        else
            printf("you entered wrong number. plese try again.\n");



    return 0;
}
