#include <time.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned long long timestamp_t;
const int MICROSECONDS_PER_SECOND = 1000000.0L;

timestamp_t get_timestamp()
{
	// Precondition: None
	// Postcondition: The current time is returned
	struct timeval now;
	::gettimeofday (&now, NULL);
	return now.tv_usec + static_cast<timestamp_t>(now.tv_sec) * MICROSECONDS_PER_SECOND;
}

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

	timestamp_t time0 = get_timestamp();
	// Code here
	timestamp_t time1 = get_timestamp();
	calc_timing(time0, time1); // Final Time

	return 0;
}
