#include <stdio.h>

int main()
{
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg1 = sum / 3;
	double avg2 = (double)sum / 3;

	printf("������� 1: %f\n", avg1);
	printf("������� 2: %f\n", avg2);
}