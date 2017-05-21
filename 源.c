#include <stdio.h>
#define PI 3.1415926 /*VALUE OF PI*/
#define times 20 /*HOW MANY TIMES USE TAYLOR'S THEOREM*/

double sin(double angle_degree)
{
	double angle_radian = (angle_degree)*PI / 180;/*TRANSFORM ANGLE DEGREE TO ANGLE RADIAN */
	double answer = angle_radian;
	double temp = angle_radian;
	int i;
	for (i=1; i <=times; i += 2)
	{

			temp = temp*(-1)*angle_radian*angle_radian / ((i + 1)*(i + 2));
			answer = answer + temp;

	}
		
	return answer;
	
}



double cos(double angle_degree)
{
	double angle_radian = angle_degree*PI / 180;
	double answer = 1;
	double temp = 1;
	int i;
	for (i=1;i<=times;i+=2)
	{

		temp = temp*(-1)*angle_radian*angle_radian / (i*(i + 1));
		answer=answer + temp;

	}
	
	return answer;
}

double tan(double angle_degree)
{

}
main()
{
	double x,v_sin,v_cos,v_tan;

	printf("Please input an angle degree.\n\n");
	scanf_s("%lf", &x);
	
	v_sin = sin(x);
	v_cos = cos(x);
	v_tan = tan(x;)
	printf("the vale of sin(%lf)is %lf\n\n", x, v_sin);
	printf("the vale of cos(%lf)is %lf\n\n",x,v_cos);


}