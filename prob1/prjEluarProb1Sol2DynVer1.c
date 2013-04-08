#include <stdio.h>

int arr[256];
int count;
void printArr(int m)
{
	int i = 0;
	fprintf(stdout, "\n %d> ", ++count);
	for(i = 0; i< m; i++){
		fprintf(stdout, " %d ", arr[i]);
	}
	
}

int find(int index, int current_max, int current_sum,int sum, int m)
{
	int i;//=0;
	if (m == index ) {
		if( sum == current_sum) {
	//		printArr(m);
			count++;
		}
	}
	else {
	for(i = current_max; i <= (sum - current_sum); i++){
//		current_sum += i;	
//		arr[index] = i;
		find(index + 1, i, current_sum+i, sum, m);		
//		current_sum -= i;	
	}
	}
}



int main(int argc, char *argv[])
{
	int i;
        int result = 0;
	int n;
	int m = 3;
       // fprintf(stdout, "Enter n :");
       // fscanf(stdin, "%d", &n);
       	n = atoi(argv[1]);
	find(0,1,0,n,m);
	fprintf(stdout, "result = %d, n = %d", count, n);
	return 0;
}
