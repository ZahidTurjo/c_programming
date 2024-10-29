// Given two numbers N and M, a 2D array of size N * M and a number X. Determine whether X exists in the 2D array A or not.

// Input
// First line contains two numbers N, M (2 ≤ N, M ≤ 100) N donates number of rows and M donates number of columns.

// Each of the next N lines will contain M numbers (1 ≤ Ai ≤ 105).

// Last line contains a number X (0 ≤ X ≤ 105) described above.

// Output
// Print "will take number" if the number doesn't exist in the 2D a
//    rray otherwise, print "will not take number ".
#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int x;
    int flag=1;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(a[i][j]==x){
            flag=0;
        }
      }
    }
    if(flag ==0){
        printf("will not take number\n");
    }else{
        printf("will take number\n");
    }

}