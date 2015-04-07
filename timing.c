#include <ctime>
#include <sys/time.h>

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
	printf("Time taken: %f seconds, %f microseconds\n");
}

timestamp_t time0 = get_timestamp();
// Code here
timestamp_t time1 = get_timestamp();
calc_timing(time0, time1); // Final Time