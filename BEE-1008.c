#include <stdio.h>

int main() {
    int employee_number;
    int worked_hours;
    float hourly_rate;
    float salary;

    scanf("%d", &employee_number);
    scanf("%d", &worked_hours);
    scanf("%f", &hourly_rate);

    salary = worked_hours * hourly_rate;

    printf("NUMBER = %d\n", employee_number);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}
