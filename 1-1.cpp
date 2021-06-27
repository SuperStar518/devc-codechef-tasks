#include <stdio.h>

int main ()
{
    FILE *fp;
    
    int array[50];
    int cnt = 0;
    
    fp = fopen("01number.txt","r");
    
    
    while((fscanf(fp, "%d", &array[cnt]) && array[cnt]) == 1) {
    	cnt++;
	}
    
    fclose(fp);
    
    fp = fopen("result1.txt", "w"); 
    
	for(int i = 0; i < cnt; i++) fprintf(fp, "%d ", array[i]);
	printf("\n");    
    
//	for(int i = 0; i < cnt; i++) printf("%d ", array[i]);
//	printf("\n");
	
    return 0;
}

