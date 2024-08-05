#include<stdio.h>
#include<string.h>
int main(){
    int flag=0 ,valid=0,i,j,len;
    char str[50];
    printf("Enter the string according to S->ab , S->Sb, S->aS\n");
    if(fgets(str,sizeof(str),stdin)!=NULL){
         len = strlen(str);
         if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }
        if(str[0]=='a'){
            flag=0;
            valid=1;
            for(i=1;str[i]!='\0';i++){
                if(str[i]=='a' && flag==1){
                    valid=0;
                    break;
                }
                else if(str[i]=='b'){
                    flag=1;
                }
                else if(str[i]!='a' && str[i]!='b'){
                    valid = 0;
                    break;
                }
            }
            if(valid && (flag==1 || str[i-1]=='a')){
                printf("Sting accep");
            }
            else{
                printf("string invalid");
            }
        }
        else{
                printf("string invalid");
        }
    }
    else{
            printf("string invalid");
        }
}