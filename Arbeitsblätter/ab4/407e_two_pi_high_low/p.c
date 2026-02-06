#include <stdio.h>

int main()
{
	const unsigned long long two_pi_high_ll = 0x401921FB54442D18;
	const unsigned long long two_pi_low_ll = 0x3CB1A62633145C06;

	double two_pi_high = *((double*) &two_pi_high_ll);
	double two_pi_low = *((double*) &two_pi_low_ll);

	printf("two_pi_high: %.16e\n",two_pi_high);
	printf("two_pi_low: %.16e\n",two_pi_low);

}