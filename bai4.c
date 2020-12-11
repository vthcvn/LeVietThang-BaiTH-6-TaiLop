#include<stdio.h>
void nhapmang(float *a, int *n){
	printf("Nhap so phan tu: ");
	scanf("%d", n);
	int i;
	for(i=0; i<*n; i++){
		printf("a[%d] = ", i);
		scanf("%f", &a[i]);
	}
}
void xuatmang(float *a, int n){
	printf("Cac phan tu trong mang: ");
	int i;
	for(i=0; i<n; i++){
		printf("%2f", a[i]);
	}
}
void lietkevitriam(float a[], int n){
	int i;
	printf("\nCac vi tri co so am la: ");
	for(i=0; i<n; i++){
		if(a[i]<0)
			printf("%2d", i);
	}
}
int main(){
	float a[100];
	int n;
	nhapmang(a,&n);
	xuatmang(a,n);
	lietkevitriam(a,n);
	return 0;
}

