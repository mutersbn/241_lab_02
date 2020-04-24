/* main function for lab02 */
#include "lab02.h"

int main()
{
	int runs = 100, diff, count=0;
	float difference;
	printf("\nRAND_MAX = %d\n", RAND_MAX);

	random_char(200000);
	printf("%11s %10s\n", "Runs", "Difference");
	
	for(count=1;count<18;count++)
	{
		diff = coin_toss(runs);
		difference = (float)diff/runs;
		printf("%11d %1.9f\n", runs, difference);
		runs*=3;
	}



	return 0;
}
