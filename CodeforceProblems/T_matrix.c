// Given a number N and a 2D array A of size N * N. Print the absolute difference between the summation of its two diagonals (primary diagonal and secondary diagonal).

// Input
// First line contains a number N (1 ≤ N ≤ 100) described above.

// Each of the next N lines will contain N numbers ( - 100 ≤ Ai ≤ 100).

// Output
// Print the absolute difference between the summation of the matrix main diagonals.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    int main_sum=0;
    int second_sum=0;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&a[i][j]);

            if(i == j){
                main_sum+=a[i][j];
            }
            if((i+j) == (n-1)){
                  second_sum+=a[i][j];
            }

        }
    }

    int diff=main_sum - second_sum;
    if(diff<0){
        printf("%d",diff*-1);
    }
    else{
        printf("%d",diff);
    }
}