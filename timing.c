#include <time.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned long long timestamp_t;
const int MICROSECONDS_PER_SECOND = 1000000.0L;

void calc_timing(timestamp_t time0, timestamp_t time1)
{
	// Precondition: None
	// Postcondition: The time taken for counting has been printed
	double secs = (time1 - time0) / (MICROSECONDS_PER_SECOND * 1.0);
	long usecs = time1 - time0;
	//std::cout << "Time taken (secs): " << secs << ", usecs: " << usecs << std::endl;
	printf("Time taken: %f seconds, %ld microseconds\n", secs, usecs);
}

int main()
{
	int indexMax = 1000000;
	clock_t time0 = clock();
	int i;
	for(i = 0; i < indexMax; ++i) // Pointless for loop to take up running time
	{
		int x = 243;
	}
	clock_t time1 = clock();
	calc_timing(time0, time1); // Final Time

	return 0;
}
