#include<stdio.h>
#include<string.h>
int vowels_count(char c[],int i,int n){
        if(i==n){
            return 0;
        }
        if(c[i] == 'a'|| c[i]=='e' || c[i]=='i' ||c[i]=='o'|| c[i]=='u'){
            return 1+ vowels_count(c,i+1,n);
        }
        else{
            return vowels_count(c,i+1,n);
        }

}
int main()
{
    char c[201];
   fgets(c,sizeof(c),stdin);
    int length=strlen(c);
   int ans=vowels_count(c,0,length);
   printf("%d",ans);
}