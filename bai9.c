#include<stdio.h>
void nhapmang (float *a, int *n){
	printf("Nhap so phan tu: ");
	scanf("%d", n);
	int i;
	for(i=0; i<*n; i++){
		printf("a[%d] = ", i);
		scanf("%f", &a[i]);
	}
}
void xuatmang(float *a, int n){
	int i;
	printf("\nCac phan tu trong mang la: ");
	for(i=0; i<n; i++){
		printf("%4f", a[i]);
	}
}
void lietke(float a[], int n){
	int i,j;
	printf("\nCac cap (a, b) thoa DK a <= b,khac nhau tung doi mot:");
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[i]<a[j] || a[i]==a[j]){
				printf("\nCap <%.3f, %.3f> vi tri <a[%d],a[%d]>", a[i],
a[j], i, j);
			}
		}
	}
}
int main(){
	int n;
	float a[100];
	nhapmang(a,&n);
	xuatmang(a,n);
	lietke(a,n);
	return 0;
}

