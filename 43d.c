#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int i,j;

    for(i=1;i<=n;i++){
        if(i==n){
        for(j=1;j<=n;j++){
            printf("*");}
        }

        
        else{
        for(j=1;j<=i;j++){
            if((j==1)||(j==i)){
                printf("*");}
            
            else{
                printf(" ");}
        }
    }printf("\n");
}
}