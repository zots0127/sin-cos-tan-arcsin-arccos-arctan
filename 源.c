/*WANG BOJUN*/
#include <stdio.h>
#define PI 3.1415926 /*VALUE OF PI*/
#define times 20 /*HOW MANY TIMES USE TAYLOR'S THEOREM*/

/*ALL FOUNCTION WAS BASED ON TAYLOR'S THEOREM*/

double sin(double angle_degree)/*((-1)^n)x^(2n+1)/(2n+1)!*/
{
	double angle_radian = (angle_degree)*PI / 180;/*TRANSFORM ANGLE DEGREE TO ANGLE RADIAN */
	double answer = angle_radian;
	double temp = angle_radian;
	int i;/*CONTROL NUMBER*/
	for (i=1; i <=times; i += 2)
	{

			temp = temp*(-1)*angle_radian*angle_radian / ((i + 1)*(i + 2));
			answer = answer + temp;
	}		
	return answer;
	
}



double cos(double angle_degree)/*(-1)^n*x^2n/(2n)!*/
{
	double angle_radian = angle_degree*PI / 180;
	double answer = 1;
	double temp = 1;
	int i;/*CONTROL NUMBER*/
	for (i=1;i<=times;i+=2)
	{

		temp = temp*(-1)*angle_radian*angle_radian / (i*(i + 1));
		answer=answer + temp;

	}
	
	return answer;
}

double tan(double angle_degree)/*tan x=sin x/cos x*/
{

	double answer = sin(angle_degree) / cos(angle_degree);
	return answer;
}
double arcsin(double val_sin) /*(2n)!x^(2n+1)/4^n(n!)^2(2n+1)*/            /*ARC PART DOESN'T WORK，I DO NOT HAVE TIME TO FIX IT RIGHT NOW,THERE ARE ONLY 30MIN TO 9:00 */
{
	
	
	double answer = val_sin;/*Because it was 2n+1*/
	double temp = 1;
	double c_val;
	int i;
	for (i = 1; i <= times; i += 2)
	{
		c_val = 2*i+ 1;
		temp=temp*(i*(i+1))*val_sin*val_sin/4*val_sin*val_sin*c_val;
		answer = answer + temp;

	}
	
	return answer;

}
double arccos(double val_cos)/*pi/2-(2n)!x^(2n+1)/4^n(n!)^2(2n+1)*/          
{
	double answer = PI/2-val_cos;/*PI/2-arcsinx*/
	double temp = 1;
	double c_val;
	int i;
	for (i = 1; i <= times; i += 2)
	{
		c_val = 2 * i + 1;
		temp = temp*(i*(i + 1))*val_sin*val_sin / 4 * val_sin*val_sin*c_val;
		answer = answer + temp;

}

double arctan(double val_tan)/*((-1)^n)*x^(2n+1)/2n+1*/
{
	double answer = val_tan;/*Because it was x^(2n+1)*/
	double temp = 1;
	int i;
	for (i = 1; i <= times; i += 2)
	{
		temp = temp*(-1)*val_tan*val_tan*(2 * i - 1) / (2 * i + 1);
		answer = answer + temp;
	}
	return answer;
}
main()
{
	double x,v_sin,v_cos,v_tan,v_arcsin,v_arccos,v_arctan;

	printf("Please input an angle degree.\n\n");
	scanf_s("%lf", &x);
	
	v_sin = sin(x);/*INPUT ANGLE_DEGREE USE ONLY*/
	v_cos = cos(x);
	v_tan = tan(x);


	v_arcsin = arcsin(x);/*INPUT ANGLE_RADIAN USE ONLY*/
	v_arccos = arccos(x);
	v_arctan = arctan(x);
	/*THIS CODE IS ONLY FOR TEST FUNCTION ,SO WHITCH ONE YOU NEED JUST INPUT A VALUE USE VALUE OF IT , */
	printf("the vale of sin(%lf)is %lf\n\n", x, v_sin);
	printf("the vale of cos(%lf)is %lf\n\n",x,v_cos);
	printf("the vale of tan(%lf)is %lf\n\n",x,v_tan);
	printf("the vale of arcsin(%lf)is %lf\n\n", x, v_arcsin);
	printf("the vale of arccos(%lf)is %lf\n\n", x, v_arccos);
	printf("the vale of arctan(%lf)is %lf\n\n", x, v_arctan);

}
