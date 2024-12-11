#include<stdio.h>
#include<string.h>
    int main() { 
    int dodai;
	char chuoi[100]; 
	 printf("Nhap mot chuoi bat ky: ");
	 fgets(chuoi, sizeof(chuoi), stdin);
     fputs(chuoi,stdout);
     for(int i=0;chuoi[i]!='\0';i++){
     dodai++;
     }
     printf("do dai cua chuoi ban vua nhap la:%d",dodai);
	 return 0;
     
 }
