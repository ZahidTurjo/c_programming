// Given an array A
//  of size N
// . Print the array elements after shifting all zeroes in array A
//  to the right.

// Note: Solve this problem using function.

// Input
// First line will contain a number N
//  (1≤N≤103)
//  number of elements.

// Second line will contain N
//  numbers (0≤Ai≤103)
// .

// Output
// Print the array after shifting right all its zeros.

#include<stdio.h>
void shiftZeros(int a[],int n){
     
     int index=0;
     for(int i=0;i<n;i++){
        if(a[i]!=0){
            a[index]=a[i];
            index++;
        }
     }

     while (index <n){
        a[index]=0;
        index++;
     }

}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    shiftZeros(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}