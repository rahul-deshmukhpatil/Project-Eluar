#include <stdio.h>



int main(int argc, char *argv[])
{
	int i;
	int n;
	int m;
	int result = 0;
	int newM, newN;

//	fprintf(stdout, "Enter n :");
//	fscanf(stdin, "%d", &n);
	 n = atoi(argv[1]);

	m = (n + 2) / 3;

		

	/*n is odd*/
	if (n % 2) {
	} else { /* n is even*/       
		
		/*m is odd*/
		if(m % 2) {
			fprintf(stdout ," n = %d even and m = %d is odd", n, m);
			newM = m / 2;
			newN = (n -1) / 2;	
			result = newM * ( 2 * newN - newM + 1 ) + newN - newM ;			
		} else {	/*m is even*/ 
			fprintf(stdout ," both n = %d and m = %d are even", n, m);
			newM = m / 2;
			newN = (n -1) / 2;	
			result = newM * ( 2 * newN - newM + 1 );			
		}


	}

	result = result - (m * (m - 1))/2;
	fprintf(stdout, "\n Result = %d , n = %d , m = %d", result, n, m);

	return 0;	
}
