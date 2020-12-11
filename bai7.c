#include<stdio.h>
void nhapmang(int *a, int *n){
	printf("Nhap so luong phan tu: ");
	scanf("%d", n);
	int i;
	for(i=0; i<*n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void xuatmang(int *a, int n){
	int i;
	for (i=0; i<n; i++){
		printf("%4d", a[i]);
	}
}
void sapxeptang(int *a, int n ){
	int i,j;
	for (i=0; i<n-1; i++){
		for (j=n-1; j>i; j--){
			if(a[j]<a[i]){
				int t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
	}
}
void sapxepgiam(int *a, int n ){
	int i,j;
	for (i=0; i<n-1; i++){
		for (j=n-1; j>i; j--){
			if(a[j]>a[j-1]){
				int t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
	}
}
int main(){
	int a[100], n;
	nhapmang(a,&n);
	printf("\nCac phan tu truoc khi sap xep: ");
	xuatmang(a,n);
	printf("\nCac phan tu sau khi xep tang dan: ");
	sapxeptang(a,n);
	xuatmang(a,n);
	printf("\nCac phan tu sau khi xep giam dan: ");
	sapxepgiam(a,n);
	xuatmang(a,n);
	return 0;
}

