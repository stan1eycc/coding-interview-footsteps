#include <stdio.h>

void MergeSort(int x[], int x_len, int y[], int y_len) {
    
    int i_max = x_len + y_len - 1;
    int i_x = x_len - 1;
    int i_y = y_len - 1;
    
    for (int i = i_max; i >= 0; i--) {
        
        if(i_y < 0) break;
        else if(i_x < 0) x[i] = y[i_y--];
        else {
            if( x[i_x] > y[i_y] ) x[i] = x[i_x--];
            else x[i] = y[i_y--];
        }
    }
    
    return;
}

int main(void) {
    
	int A[10] = {3,4,6,9,11,15,0,0,0,0};
	int B[4] = {4,8,9,12};
	int A_l = 6;
	int B_l = 4;
	
	printf("A: ");
	for (int i = 0; i < A_l; i++) {
	    printf("%d ", A[i]);
	}
	printf("\n");

	printf("B: ");
	for (int i = 0; i < B_l; i++) {
	    printf("%d ", B[i]);
	}
	printf("\n");
	
	MergeSort(A,A_l,B,B_l);
	
	printf("SORTED: ");
	for (int i = 0; i < (A_l+B_l); i++) {
	    printf("%d ", A[i]);
	}
	printf("\n");	
	
	return 0;
}

