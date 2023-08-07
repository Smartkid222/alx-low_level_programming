#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - nested loop to make grid
* @width: width input
* @height: height input
* Return: pointer to 2 dim. array
*/

int **alloc_grid(int width, int height)
{
	int **sk;
	int s;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);
	sk = malloc(sizeof(int *) * height);
	if (sk == NULL)
	return (NULL);
	for (s = 0; s < height; s++)
	{
		sk[s] = malloc(sizeof(int) * width);
		if (sk[s] == NULL)
		{
			for (; s >= 0; s--)
				free(sk[s]);
			free(sk);
			return (NULL);
		}
	}
	for (s = 0; s < height; s++)
	{
		for (k = 0; k < width; k++)
			sk[s][k] = 0;
	}
	return (sk);
}
