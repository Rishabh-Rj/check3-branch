struct personal
{
    char name[20];
    int day;
    char month[10];
    int year;
    float salary;
};
void main()
{
    struct personal person;

    printf("enter the values\n");
    scanf("%s %d %s %d %f", person.name,&person.day,person.month,&person.year,&person.salary);
    printf("%s %d %s %d %f\n", person.name,person.day,person.month,person.year,person.salary);
    getch();
}
