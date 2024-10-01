#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));

	int score[50];
	int order;

	for (int i = 0;i < 50;i++) 
	{
		score[i] = (rand() % 101);
		printf("%d¹ø %dÁ¡ \n",i+1, score[i]);
	}

	printf("\n");

	for (int j = 0; j < 50; j++)
	{
		int temp = 100;
		
		for (int k = j; k<50; k++)
		{
			if(temp>=score[k])
			{
				temp = score[k];
				order = k;
			}
		}
		score[order] = score[j];
		score[j] = temp;
		printf("%d \n",score[j]);

	}
	

}