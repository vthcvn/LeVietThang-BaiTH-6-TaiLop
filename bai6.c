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
void timminmax(int a[], int n){
	int i, max=a[0], min=a[0];
	for(i=0; i<n; i++){
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	if(min==max)
		printf("\nKhong co max va min");
	else
		printf("\nMax = %d, Min =%d", max, min);
}
int main(){
	int a[100], n;
	nhapmang(a,&n);
	xuatmang(a,n);
	timminmax(a,n);
	return 0;
}

