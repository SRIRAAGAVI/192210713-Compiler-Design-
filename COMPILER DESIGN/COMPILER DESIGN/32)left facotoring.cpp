#include<stdio.h>
#include<string.h>
int main(){
    char part1[20],part2[20],newg[20],mode[20],gram[20];
    int i=0,j=0,k=0,pos=0;
    printf("Enterthe gram A->");
    gets(gram);
    for(i=0;gram[i]!='|';i++,j++){
        part1[j]=gram[i];
    }
    part1[j]='\0';
    for(j=++i,i=0;gram[i]!='\0';i++,j++){
        part2[i]=gram[j];
    }
    part2[i]='\0';
    for(i=0;i<strlen(part1) && strlen(part2);i++){
        if(part1[i]==part2[i]){
            mode[k++]=part1[i];
            pos=i+1;
        }
        else{
            break;
        }
    }
    for(i=pos,j=0;part1[i]!='\0';i++,j++){
        newg[j]=part1[i];
    }
    newg[j++]='|';
    for(i=pos;part2[i]!='\0';i++,j++){
        newg[j]=part2[i];
    }
    newg[j]='\0';
    printf("\nA->%sA|e`\n",mode);
    printf("\nA`->%s\n",newg);
    
}