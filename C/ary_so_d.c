#include <stdio.h>
void sort_d(int []);
int main(void)
{
   /*For sorting in ascending order*/
	int size=5, i, M[5];
	printf (" Enter the array elements\n");
	for (i=0;i<size;i++)
		  scanf("%d", &M[i]);
	sort_d(M);
	/*printing*/
   printf("The sorted array in descending order is\n");
	for (i=0;i<size;i++)
		  printf("%5d", M[i]);
	return 0;
}
void sort_d(int M[])
{
	int item,k,temp;
	for (item=0;item<4;item++)
		for (k=item+1; k<5; k++)
			if(M[item]< M[k]) {
			 temp=M[item];
			 M[item]=M[k];
			 M[k]=temp;
          /*printf("M[%d]= %d\n", k, M[k]); */
			}
			return;
}
