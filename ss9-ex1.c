#include <stdio.h>

int main()
{
	int num[100];
	int n;
	printf("So luong phan tu :");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d : ", i);
		scanf("%d", &num[i]);
	}
	int index, value;
	printf("Nhap vi tri muon chen : ");
	scanf("%d", &index);
	printf("Nhap gia tri muon chen :");
	scanf("%d", &value);
	if (index>=n){
        num[n] = value;
        n++; 
    } else{
        for(int j=n;j>index;j--){
            num[j] = num[j - 1];
        }
        num[index] = value;
        n++;
    }
    printf("Mang sau khi chen : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}
