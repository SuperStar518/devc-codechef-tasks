#include <stdio.h>

int main() {
	FILE *fp;
	
	int array[50];
	int cnt = 0;
	
	fp = fopen("01number.txt","r");
	
	while(fscanf(fp, "%d", &array[cnt]) && array[cnt]) {
		cnt++;
	}
	
	fclose(fp);
	
//	for(int i = cnt; i > 0; i--) printf("%d ", array[i]);

	int start, end;
	

	printf("Please enter first number\n");
	scanf("%d", &start);
	
	printf("Please enter second number\n");
	scanf("%d", &end);
	
	for(int i = 0; i < cnt; i++) if(array[i] > start && array[i] < end) printf("%d ", array[i]);
	       
	printf("\n");   
}
