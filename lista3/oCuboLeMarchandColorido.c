#include <stdio.h>

int main() {

    int cubo[6][3][3] = {0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,4,4,4,4,4,4,4,4,4,5,5,5,5,5,5,5,5,5};

    int temp1, temp2, temp3;
    char m, d;

    while(scanf(" %c%c", &m, &d) != EOF){
    
        if (d == 'L'){
            switch (m)
            {
            case 'B': // B / muda a face 0
                        temp1 = cubo[0][0][0];         temp2 = cubo[0][0][1];
                cubo[0][0][0] = cubo[0][2][0]; cubo[0][0][1] = cubo[0][1][0];
                cubo[0][2][0] = cubo[0][2][2]; cubo[0][1][0] = cubo[0][2][1];
                cubo[0][2][2] = cubo[0][0][2]; cubo[0][2][1] = cubo[0][1][2];
                cubo[0][0][2] = temp1;         cubo[0][1][2] = temp2;

                        temp1 = cubo[1][0][0];         temp2 = cubo[1][0][1];         temp3 = cubo[1][0][2];
                cubo[1][0][0] = cubo[3][0][2]; cubo[1][0][1] = cubo[3][1][2]; cubo[1][0][2] = cubo[3][2][2];
                cubo[3][0][2] = cubo[5][2][2]; cubo[3][1][2] = cubo[5][2][1]; cubo[3][2][2] = cubo[5][2][0];
                cubo[5][2][2] = cubo[2][2][0]; cubo[5][2][1] = cubo[2][1][0]; cubo[5][2][0] = cubo[2][0][0];
                cubo[2][2][0] = temp1;         cubo[2][1][0] = temp2;         cubo[2][0][0] = temp3;
                break;

            case 'L': // L' / muda a face 2
                        temp1 = cubo[2][0][0];         temp2 = cubo[2][0][1];
                cubo[2][0][0] = cubo[2][0][2]; cubo[2][0][1] = cubo[2][1][2];
                cubo[2][0][2] = cubo[2][2][2]; cubo[2][1][2] = cubo[2][2][1];
                cubo[2][2][2] = cubo[2][2][0]; cubo[2][2][1] = cubo[2][1][0];
                cubo[2][2][0] = temp1;         cubo[2][1][0] = temp2;

                        temp1 = cubo[1][0][0];         temp2 = cubo[1][1][0];         temp3 = cubo[1][2][0];
                cubo[1][0][0] = cubo[4][0][0]; cubo[1][1][0] = cubo[4][1][0]; cubo[1][2][0] = cubo[4][2][0];
                cubo[4][0][0] = cubo[5][0][0]; cubo[4][1][0] = cubo[5][1][0]; cubo[4][2][0] = cubo[5][2][0];
                cubo[5][0][0] = cubo[0][2][2]; cubo[5][1][0] = cubo[0][1][2]; cubo[5][2][0] = cubo[0][0][2];
                cubo[0][2][2] = temp1;         cubo[0][1][2] = temp2;         cubo[0][0][2] = temp3;
                break;

            case 'U': // U / muda a face 1
                        temp1 = cubo[1][0][0];         temp2 = cubo[1][0][1];
                cubo[1][0][0] = cubo[1][2][0]; cubo[1][0][1] = cubo[1][1][0];
                cubo[1][2][0] = cubo[1][2][2]; cubo[1][1][0] = cubo[1][2][1];
                cubo[1][2][2] = cubo[1][0][2]; cubo[1][2][1] = cubo[1][1][2];
                cubo[1][0][2] = temp1;         cubo[1][1][2] = temp2;

                        temp1 = cubo[0][0][2];         temp2 = cubo[0][0][1];         temp3 = cubo[0][0][0];
                cubo[0][0][2] = cubo[2][0][2]; cubo[0][0][1] = cubo[2][0][1]; cubo[0][0][0] = cubo[2][0][0];
                cubo[2][0][2] = cubo[4][0][2]; cubo[2][0][1] = cubo[4][0][1]; cubo[2][0][0] = cubo[4][0][0];
                cubo[4][0][2] = cubo[3][0][2]; cubo[4][0][1] = cubo[3][0][1]; cubo[4][0][0] = cubo[3][0][0];
                cubo[3][0][2] = temp1;         cubo[3][0][1] = temp2;         cubo[3][0][0] = temp3;
                break;

            case 'R': // R / muda a face 3
                        temp1 = cubo[3][0][0];         temp2 = cubo[3][0][1];
                cubo[3][0][0] = cubo[3][2][0]; cubo[3][0][1] = cubo[3][1][0];
                cubo[3][2][0] = cubo[3][2][2]; cubo[3][1][0] = cubo[3][2][1];
                cubo[3][2][2] = cubo[3][0][2]; cubo[3][2][1] = cubo[3][1][2];
                cubo[3][0][2] = temp1;         cubo[3][1][2] = temp2;

                        temp1 = cubo[1][0][2];         temp2 = cubo[1][1][2];         temp3 = cubo[1][2][2];
                cubo[1][0][2] = cubo[4][0][2]; cubo[1][1][2] = cubo[4][1][2]; cubo[1][2][2] = cubo[4][2][2];
                cubo[4][0][2] = cubo[5][0][2]; cubo[4][1][2] = cubo[5][1][2]; cubo[4][2][2] = cubo[5][2][2];
                cubo[5][0][2] = cubo[0][2][0]; cubo[5][1][2] = cubo[0][1][0]; cubo[5][2][2] = cubo[0][0][0];
                cubo[0][2][0] = temp1;         cubo[0][1][0] = temp2;         cubo[0][0][0] = temp3;
                break;

            case 'F': // F' / muda a face 4
                        temp1 = cubo[4][0][0];         temp2 = cubo[4][0][1];
                cubo[4][0][0] = cubo[4][0][2]; cubo[4][0][1] = cubo[4][1][2];
                cubo[4][0][2] = cubo[4][2][2]; cubo[4][1][2] = cubo[4][2][1];
                cubo[4][2][2] = cubo[4][2][0]; cubo[4][2][1] = cubo[4][1][0];
                cubo[4][2][0] = temp1;         cubo[4][1][0] = temp2;

                        temp1 = cubo[1][2][0];         temp2 = cubo[1][2][1];         temp3 = cubo[1][2][2];
                cubo[1][2][0] = cubo[3][0][0]; cubo[1][2][1] = cubo[3][1][0]; cubo[1][2][2] = cubo[3][2][0];
                cubo[3][0][0] = cubo[5][0][2]; cubo[3][1][0] = cubo[5][0][1]; cubo[3][2][0] = cubo[5][0][0];
                cubo[5][0][2] = cubo[2][2][2]; cubo[5][0][1] = cubo[2][1][2]; cubo[5][0][0] = cubo[2][0][2];
                cubo[2][2][2] = temp1;         cubo[2][1][2] = temp2;         cubo[2][0][2] = temp3;
                break;

            case 'D': // D' / muda a face 5
                        temp1 = cubo[5][0][0];         temp2 = cubo[5][0][1];
                cubo[5][0][0] = cubo[5][0][2]; cubo[5][0][1] = cubo[5][1][2];
                cubo[5][0][2] = cubo[5][2][2]; cubo[5][1][2] = cubo[5][2][1];
                cubo[5][2][2] = cubo[5][2][0]; cubo[5][2][1] = cubo[5][1][0];
                cubo[5][2][0] = temp1;         cubo[5][1][0] = temp2;

                        temp1 = cubo[4][2][0];         temp2 = cubo[4][2][1];         temp3 = cubo[4][2][2];
                cubo[4][2][0] = cubo[3][2][0]; cubo[4][2][1] = cubo[3][2][1]; cubo[4][2][2] = cubo[3][2][2];
                cubo[3][2][0] = cubo[0][2][0]; cubo[3][2][1] = cubo[0][2][1]; cubo[3][2][2] = cubo[0][2][2];
                cubo[0][2][0] = cubo[2][2][0]; cubo[0][2][1] = cubo[2][2][1]; cubo[0][2][2] = cubo[2][2][2];
                cubo[2][2][0] = temp1;         cubo[2][2][1] = temp2;         cubo[2][2][2] = temp3;
                break;
            
            default:
                break;
            }
        }
        else if (d == 'R'){
            switch (m)
            {
            case 'B': // B' / muda a face 0
                        temp1 = cubo[0][0][0];         temp2 = cubo[0][0][1];
                cubo[0][0][0] = cubo[0][0][2]; cubo[0][0][1] = cubo[0][1][2];
                cubo[0][0][2] = cubo[0][2][2]; cubo[0][1][2] = cubo[0][2][1];
                cubo[0][2][2] = cubo[0][2][0]; cubo[0][2][1] = cubo[0][1][0];
                cubo[0][2][0] = temp1;         cubo[0][1][0] = temp2;

                        temp1 = cubo[1][0][0];         temp2 = cubo[1][0][1];         temp3 = cubo[1][0][2];
                cubo[1][0][0] = cubo[2][2][0]; cubo[1][0][1] = cubo[2][1][0]; cubo[1][0][2] = cubo[2][0][0];
                cubo[2][2][0] = cubo[5][2][2]; cubo[2][1][0] = cubo[5][2][1]; cubo[2][0][0] = cubo[5][2][0];
                cubo[5][2][2] = cubo[3][0][2]; cubo[5][2][1] = cubo[3][1][2]; cubo[5][2][0] = cubo[3][2][2];
                cubo[3][0][2] = temp1;         cubo[3][1][2] = temp2;         cubo[3][2][2] = temp3;
                break;

            case 'L': // L / muda a face 2
                        temp1 = cubo[2][0][0];         temp2 = cubo[2][0][1];
                cubo[2][0][0] = cubo[2][2][0]; cubo[2][0][1] = cubo[2][1][0];
                cubo[2][2][0] = cubo[2][2][2]; cubo[2][1][0] = cubo[2][2][1];
                cubo[2][2][2] = cubo[2][2][0]; cubo[2][2][1] = cubo[2][1][2];
                cubo[2][0][2] = temp1;         cubo[2][1][2] = temp2;

                        temp1 = cubo[1][0][0];         temp2 = cubo[1][1][0];         temp3 = cubo[1][2][0];
                cubo[1][0][0] = cubo[0][2][2]; cubo[1][1][0] = cubo[0][1][2]; cubo[1][2][0] = cubo[0][0][2];
                cubo[0][2][2] = cubo[5][0][0]; cubo[0][1][2] = cubo[5][1][0]; cubo[0][0][2] = cubo[5][2][0];
                cubo[5][0][0] = cubo[4][0][0]; cubo[5][1][0] = cubo[4][1][0]; cubo[5][2][0] = cubo[4][2][0];
                cubo[4][0][0] = temp1;         cubo[4][1][0] = temp2;         cubo[4][2][0] = temp3;
                break;

            case 'U': // U' / muda a face 1
                        temp1 = cubo[1][0][0];         temp2 = cubo[1][0][1];
                cubo[1][0][0] = cubo[1][0][2]; cubo[1][0][1] = cubo[1][1][2];
                cubo[1][0][2] = cubo[1][2][2]; cubo[1][1][2] = cubo[1][2][1];
                cubo[1][2][2] = cubo[1][2][0]; cubo[1][2][1] = cubo[1][1][0];
                cubo[1][2][0] = temp1;         cubo[1][1][0] = temp2;

                        temp1 = cubo[0][0][2];         temp2 = cubo[0][0][1];         temp3 = cubo[0][0][0];
                cubo[0][0][2] = cubo[3][0][2]; cubo[0][0][1] = cubo[3][0][1]; cubo[0][0][0] = cubo[3][0][0];
                cubo[3][0][2] = cubo[4][0][2]; cubo[3][0][1] = cubo[4][0][1]; cubo[3][0][0] = cubo[4][0][0];
                cubo[4][0][2] = cubo[2][0][2]; cubo[4][0][1] = cubo[2][0][1]; cubo[4][0][0] = cubo[2][0][0];
                cubo[2][0][2] = temp1;         cubo[2][0][1] = temp2;         cubo[2][0][0] = temp3;
                break;

            case 'R': // R' / muda a face 3
                        temp1 = cubo[3][0][0];         temp2 = cubo[3][0][1];
                cubo[3][0][0] = cubo[3][0][2]; cubo[3][0][1] = cubo[3][1][2];
                cubo[3][0][2] = cubo[3][2][2]; cubo[3][1][2] = cubo[3][2][1];
                cubo[3][2][2] = cubo[3][2][0]; cubo[3][2][1] = cubo[3][1][0];
                cubo[3][2][0] = temp1;         cubo[3][1][0] = temp2;

                        temp1 = cubo[1][0][2];         temp2 = cubo[1][1][2];         temp3 = cubo[1][2][2];
                cubo[1][0][2] = cubo[0][2][0]; cubo[1][1][2] = cubo[0][1][0]; cubo[1][2][2] = cubo[0][0][0];
                cubo[0][2][0] = cubo[5][0][2]; cubo[0][1][0] = cubo[5][1][2]; cubo[0][0][0] = cubo[5][2][2];
                cubo[5][0][2] = cubo[4][0][2]; cubo[5][1][2] = cubo[4][1][2]; cubo[5][2][2] = cubo[4][2][2];
                cubo[4][0][2] = temp1;         cubo[4][1][2] = temp2;         cubo[4][2][2] = temp3;
                break;

            case 'F': // F / muda a face 4
                        temp1 = cubo[4][0][0];         temp2 = cubo[4][0][1];
                cubo[4][0][0] = cubo[4][2][0]; cubo[4][0][1] = cubo[4][1][0];
                cubo[4][2][0] = cubo[4][2][2]; cubo[4][1][0] = cubo[4][2][1];
                cubo[4][2][2] = cubo[4][0][2]; cubo[4][2][1] = cubo[4][1][2];
                cubo[4][0][2] = temp1;         cubo[4][1][2] = temp2;

                        temp1 = cubo[1][2][0];         temp2 = cubo[1][2][1];         temp3 = cubo[1][2][2];
                cubo[1][2][0] = cubo[2][2][2]; cubo[1][2][1] = cubo[2][1][2]; cubo[1][2][2] = cubo[2][0][2];
                cubo[2][2][2] = cubo[5][0][2]; cubo[2][1][2] = cubo[5][0][1]; cubo[2][0][2] = cubo[5][0][0];
                cubo[5][0][2] = cubo[3][0][0]; cubo[5][0][1] = cubo[3][1][0]; cubo[5][0][0] = cubo[3][2][0];
                cubo[3][0][0] = temp1;         cubo[3][1][0] = temp2;         cubo[3][2][0] = temp3;
                break;

            case 'D': // D / muda a face 5
                        temp1 = cubo[5][0][0];         temp2 = cubo[5][0][1];
                cubo[5][0][0] = cubo[5][2][0]; cubo[5][0][1] = cubo[5][1][0];
                cubo[5][2][0] = cubo[5][2][2]; cubo[5][1][0] = cubo[5][2][1];
                cubo[5][2][2] = cubo[5][0][2]; cubo[5][2][1] = cubo[5][1][2];
                cubo[5][0][2] = temp1;         cubo[5][1][2] = temp2;

                        temp1 = cubo[4][2][0];         temp2 = cubo[4][2][1];         temp3 = cubo[4][2][2];
                cubo[4][2][0] = cubo[2][2][0]; cubo[4][2][1] = cubo[2][2][1]; cubo[4][2][2] = cubo[2][2][2];
                cubo[2][2][0] = cubo[0][2][0]; cubo[2][2][1] = cubo[0][2][1]; cubo[2][2][2] = cubo[0][2][2];
                cubo[0][2][0] = cubo[3][2][0]; cubo[0][2][1] = cubo[3][2][1]; cubo[0][2][2] = cubo[3][2][2];
                cubo[3][2][0] = temp1;         cubo[3][2][1] = temp2;         cubo[3][2][2] = temp3;
                break;
            
            default:
                break;
            }
        }
    }
    
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                printf("%d", cubo[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}