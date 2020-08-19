//EXAMPLE 4.3 Calculate employee’s pay
//A program is required by a company to
//read an employee’s number, pay rate
//and the number of hours worked in a
//week. The program is then to validate
//the pay rate field and the hours worked
//field and, if valid, compute the
//employee’s weekly pay and then print it
//and the input data.Chapter 4: Selection
//control structures 45 Validation:
//According to the company’s rules,
//the maximum hours an employee can work
//per week is 60 hours, and the maximum
//hourly rate is $25.00 per hour. If the
//hours worked field or the hourly rate
//field is out of range, the input data
//and an appropriate message are to be
//printed and the employee’s weekly pay
//is not to be calculated.Weekly pay
//calculation: Weekly pay is calculated
//as hours worked times pay rate. If
//more than 35 hours are worked,
//payment for the overtime hours
//worked is calculated at time-and-a-half.
//Devise a program to calculate the
//employee's pay in C language.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

  // Compute_employee_pay
  // Set valid_input_fields to true
  // Set error_message to blank
  // Read emp_no, pay_rate, hrs_worked

  bool valid_input_fields = true;
  int error_message, emp_no, hrs_worked, pay_rate, emp_weekly_pay, overtime_hrs, overtime_pay;
  printf("enter employee number:");
  scanf("%d", & emp_no);
  printf("\nenter hours worked:");
  scanf("%d", & hrs_worked);
  printf("\nenter pay rate:");
  scanf("%d", & pay_rate);

  if (pay_rate > 25) {
    char error_message[30] = "Pay rate exceeds 25";
    printf("%s\n", error_message);
    printf("the employee number is:%d \n", emp_no);
    printf("the hours worked are:%d \n", hrs_worked);
    printf("the pay rate is:%d \n", pay_rate);
    valid_input_fields = false;
  }
  if (hrs_worked > 60) {
    char error_message[30] = "Hours worked exceeds 60";
    printf("%s\n", error_message);
    printf("the employee number is:%d \n", emp_no);
    printf("the hours worked are: %d \n", hrs_worked);
    printf("the pay rate is:%d\n", pay_rate);
    valid_input_fields = false;
  }
  if (valid_input_fields) {
    if (hrs_worked <= 35) {
      emp_weekly_pay = pay_rate * hrs_worked;
    } else {

      overtime_hrs = hrs_worked - 35;
      overtime_pay = overtime_hrs * pay_rate * 1.5;
      emp_weekly_pay = (pay_rate * 35) + overtime_pay;

    }
    printf("the employee weekly pay is:%d \n", emp_weekly_pay);
    printf("the employee number is:%d \n", emp_no);
    printf("the hours worked are:%d\n", hrs_worked);
    printf("the pay rate is :%d\n", pay_rate);
    return 0;

  }
}
