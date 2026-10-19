#include <stdio.h>
#include<math.h>
int main () {

  float wig;
  float hig;

  printf("enter your weight\n ");
  scanf("%f", &wig);

  printf("enter your height ");
  scanf("%f", &hig);

  float bmi = (wig / pow(hig, 2));

  if (bmi < 18.5){
    printf(" YOUR BMI IS %.2f, YOU ARE UNDERWEIGHT ", bmi);
  }
  if ( bmi >= 18.5 && bmi <= 24.9){
    printf(" YOUR BMI IS %.2f , YOUR ARE NORMAL ", bmi);
  }
  if (bmi >= 25.0 && bmi <= 29.9){
    printf("YOUR BMI IS %.2f, YOU ARE OVERWEIGHT", bmi);
  }
  if (bmi >= 30.0){
    printf("YOUR BMI IS %.2f, YOU ARE OBESE", bmi);
  }
  else {
  printf("invalid input");
  }
}