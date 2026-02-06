static inline double my_fabs(double x) { return x < 0 ? -x : x; }

double my_cos(double x)
{
	const double two_pi = 6.283185307179586;	// 2 * pi
	double x2;									// x^2
	long long n;							

	// Bereichs-Anpassung von x auf -pi ... 0 ... pi
	n = x/two_pi + (x>=0 ? 0.5 : -0.5);
	x = x - n*two_pi;

	// x Quadrat berechnen
	x2 = x*x;

	double term = 1.0;
	double sum = 1.0;

	for(int i = 2; i < 30;i=i+2){
		term *= - x2/(i*(i-1));
		sum += term;
	}

	return sum;
}

