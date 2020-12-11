#include<stdio.h>
void nhapmang(int *a, int *n){
	printf("Hay nhap so luong phan tu: ");
	scanf("%d", n);
	int i;
	for (i=0; i<*n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void xuatmang(int *a, int n){
	printf("Cac phan tu trong mang la: ");
	int i;
	for(i=0; i<n; i++){
		printf("%2d", a[i]);
	}
}
int timsochan(int a[], int n){
	int i;
	for(i=n-1; i>=0; i--){
		if(a[i]%2==0)
			return a[i];		
	}
	return -1;
}
int main(){
	int a[100], n;
	nhapmang(a,&n);
	xuatmang(a,n);
	printf("\nSo chan cuoi cung trong mang la: %d", timsochan(a,n));
	return 0;
}

