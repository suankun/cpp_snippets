// https://www.codewars.com/kata/5a46179ce626c5ef8d000024/train/cpp
void check_is_contained(int **mat1, const int mat2[3][3],const int nrows,
                        const int ncols, int &row, int &col) {
    row = -1;
    col = -1;
    for (int rows = 0; rows < nrows; rows++)
        for (int cols = 0; cols < ncols; cols++) {
            bool isFound = true;
            if (mat1[rows][cols] == mat2[0][0]) {
                for (int rows2 = 0; rows2 < 3; rows2++) {
                    for (int cols2 = 0; cols2 < 3; cols2++)

                        if (mat1[rows+rows2][cols+cols2] != mat2[rows2][cols2]) {
                            isFound = false;
                            break;
                        }
                    if (!isFound)
                        break;
                }
                if (isFound) {
                    row = rows;
                    col = cols;
                }
            }
        }
}
//
#include <iostream>

void check_is_contained(int **mat1, const int mat2[3][3],const int nrows, const int ncols, int &row, int &col)
{
    row=-1;col=-1;
    int ok=0;
    for(int i=0;i<=nrows-3;i++) {
            for(int j=0;j<=ncols-3;j++) {

                if(mat1[i][j]==mat2[0][0])ok++;
                if(mat1[i+1][j]==mat2[1][0])ok++;
                if(mat1[i+2][j]==mat2[2][0])ok++;
                if(mat1[i][j+1]==mat2[0][1])ok++;
                if(mat1[i][j+2]==mat2[0][2])ok++;
                if(mat1[i+1][j+1]==mat2[1][1])ok++;
                if(mat1[i+2][j+1]==mat2[2][1])ok++;
                if(mat1[i+1][j+2]==mat2[1][2])ok++;
                if(mat1[i+2][j+2]==mat2[2][2])ok++;
                if(ok==9){row=i;col=j;break;}
                else ok=0;

        }

        if(row!=-1)break;
    }
}
