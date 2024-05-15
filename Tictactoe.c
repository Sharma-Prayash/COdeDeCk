//-----------------Tic-tac-toe

#include<stdio.h>

void main(){
    int chr;
    char arr[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

    for(int z=0;z<=4;z++){

        printf("turn for 0");
        scanf("%d",&chr);
        switch(chr){
            case 1: arr[0][0]='0';
            break;
            case 2: arr[0][1]='0';
            break;
            case 3: arr[0][2]='0';
            break;
            case 4: arr[1][0]='0';
            break;
            case 5: arr[1][1]='0';
            break;
            case 6: arr[1][2]='0';
            break;
            case 7: arr[2][0]='0';
            break;
            case 8: arr[2][1]='0';
            break;
            case 9: arr[2][2]='0';
            break;
        }

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                    if(arr[i][j]!='0'&&arr[i][j]!='X')
                    printf("_ ");
            else
              printf("%c ",arr[i][j]);
        }
         printf("\n");
        }
        if(z==4)
            break;
        printf("Turn for X");
        scanf("%d",&chr);
        switch(chr){
            case 1: arr[0][0]='X';
            break;
            case 2: arr[0][1]='X';
            break;
            case 3: arr[0][2]='X';
            break;
            case 4: arr[1][0]='X';
            break;
            case 5: arr[1][1]='X';
            break;
            case 6: arr[1][2]='X';
            break;
            case 7: arr[2][0]='X';
            break;
            case 8: arr[2][1]='X';
            break;
            case 9: arr[2][2]='X';
            break;
        }
        for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                        if(arr[i][j]!='X'&&arr[i][j]!='0')
                        printf("_ ");
                else
                  printf("%c ",arr[i][j]);
            }
             printf("\n");
        }
    }

}
