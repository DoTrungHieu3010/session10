#include<stdio.h>    
int main(){
	int n, temp;
	int arr[n];
	printf("Nhap vao so phan tu ban muon: ");
	scanf("%d", &n);
	for (int i=0;i<n;i++){
		printf("Cac phan tu ban muon: ");
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep: \n");
    for(int i=0; i<n;i++){
    	printf("%d", arr[i]);
	}
	return 0;
}
