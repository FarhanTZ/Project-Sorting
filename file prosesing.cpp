#include <stdio.h>

void simpandata(int data){
	FILE *fptr;
	fptr = fopen("BF20.txt","a");
	fprintf(fptr,"Angka yang disimpang = %d\n",data);
	fclose(fptr);
}

int no[1000];
char nama[1000][1000];
char alamat[1000][1000];
char telp[1000][1000];
int count=0;

void readdatasampebawa(){
	FILE *fp;
	fp = fopen("BF20.txt","r");
	if(fp==NULL){
		printf("file tidak ada");
	}
	while(fscanf(fp,"%d;%[^;];%[^;];%s\r\n",&no[count],&nama[count],&alamat[count],&telp[count])!=EOF){
		printf("%d %s %s %s\n",no[count],nama[count],alamat[count],telp[count]);
		count++;
	}
	fclose(fp);	
}
int main(){
	readdatasampebawa();
}
