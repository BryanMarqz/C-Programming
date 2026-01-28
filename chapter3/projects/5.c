#include <stdio.h>

int main(void)
{
	int r11, r12, r13, r14, r21, r22, r23, r24, r31, r32, r33, r34, r41, r42, r43, r44;

	printf("Enter the numbers from 1 to 16 in any order: \n");
	scanf(" %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &r11, &r12, &r13, &r14, &r21, &r22, &r23, &r24, &r31, &r32, &r33, &r34, &r41, &r42, &r43, &r44);	

	printf("%d %d %d %d\n", r11, r12, r13, r14);
	printf("%d %d %d %d\n", r21, r22, r23, r24);
	printf("%d %d %d %d\n", r31, r32, r33, r34);
	printf("%d %d %d %d\n\n", r41, r42, r43, r44);
	
	printf("Row sums: %d %d %d %d\n", (r11 + r12 + r13 + r14), (r21 + r22 + r23 + r24), (r31 + r32 + r33 + r34), (r41 + r42 + r43 + r44));
	printf("Column sums: %d %d %d %d\n", (r11 + r21 + r31 + r41), (r12 + r22 + r32 + r42), (r13 + r23 + r33 + r43), (r14 + r24 + r34 + r44));
	printf("Diagonal sums: %d %d\n", (r11 + r22 + r33 + r44), (r14 + r23 + r32 + r41));

	return 0;
}
