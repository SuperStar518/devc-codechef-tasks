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
	
	for(int i = cnt; i > 0; i--) printf("%d ", array[i]);
}
