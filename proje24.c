#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int s1,s2,s3,p1,ort;
	
	printf("Birinci Notunuzu Giriniz: ");
	scanf("%d",&s1);
	
	printf("Ikinci Notunuzu Giriniz: ");
	scanf("%d",&s2);
	
	printf("Ucuncu Sinav Notunuzu Giriniz: ");
	scanf("%d",&s3);
	
	printf("Proje Notunuzu Giriniz: ");
	scanf("%d",&p1);
	
	ort=(s1+s2+s3+p1)/4;
	
	if (ort>=0 && ort<50)
	{
		printf("Notunuz: ff ");
	}
	else if (ort>=50 && ort<60)
	{
		printf("Notunuz: dd ");
	}
	else if (ort>=60 && ort<70)
	{
		printf("Notunuz: cc ");
	}
	else if (ort>=70 && ort<85)
	{
		printf("Notunuz: bb ");
	}
	else if (ort>= 85 && ort<=100)
	{
		printf("Notunuz: aa ");
	}
	
	return 0;
}
