#include <stdio.h>

int main() {
	FILE *fp;
	
	int array[50];
	int cnt = 0;
	int max = 0;
	
	fp = fopen("01number.txt","r");
	
	while(fscanf(fp, "%d", &array[cnt]) && array[cnt]) {
		cnt++;
	}
	
	fclose(fp);
	
//	for(int i = cnt; i > 0; i--) printf("%d ", array[i]);
	
	for(int i = 0; i < cnt; i++) if(array[i] > max) max = array[i];
	   
    fp = fopen("result3.txt", "w"); 
    
	fprintf(fp, "%d ", max);
	printf("\n");   
}
