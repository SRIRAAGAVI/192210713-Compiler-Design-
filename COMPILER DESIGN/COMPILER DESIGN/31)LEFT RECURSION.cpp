
#include<stdio.h>
#include<string.h>
int main(){
    char a[50],alpha[50],A,B;
    char s1[50] , s2[50];
    int i,k=0,j,ind2=-1;
    printf("Enter the grammar: \n");
    scanf("%s",a);
    A=a[0];
    if(a[0]==a[3]){
        printf("Left recursion:\n");
        for(i=0;a[i];i++){
            if(a[i]=='|'){
                ind2=i;
                break;
                
            }
        }
        if(ind2==0){
            printf("invalid gammar");
        }
        else{
            B=a[ind2+1];
            for(i=4;i<ind2;i++){
                alpha[k]=a[i];
                k++;
            }
            alpha[k]='\0';
            }
            snprintf(s1,sizeof(s1),"%c->%c%c` ",A,B,A);
            snprintf(s2,sizeof(s2),"%c`->%s%c`|e",A,alpha,A);
            printf("%s\n",s1);
            printf("%s\n",s2);
    }
    else{
        printf("no left recursion ");
    }
}