#include <stdio.h>

int main() {
	int n,delete_num;

	printf("enter the length of an array: ");
	scanf("%d",&n);

	int a[n];

	for(int i=0; i<n; i++) {
		printf("enter the %d of array: ",i);
		scanf("%d",&a[i]);
	}

	for(int j=0; j<n; j++) {
		printf(" %d ",a[j]);
	}

	printf("\n\n");

	printf("which number do you want to delete: ");
	scanf("%d",&delete_num);

	for(int b=0; b<n; b++) {
		if(a[b]==delete_num) {
			for(int d=b;d<n-1;d++){
				a[b] = a[b+1];
			}
		}
	}



	for(int c=0; c<n; c++) {
		printf(" %d ",a[c]);
	}
	return 0;
}
