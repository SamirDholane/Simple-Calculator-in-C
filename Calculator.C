#include<stdio.h>
#include<math.h>

double division(double, double);
double modulus(int, int);
void print_menu();
int main(){
    int choice;
    double first, second, result;

    while(1){
        print_menu();
        scanf("%d", &choice);
        if(choice == 7){
            break;
        }

        if(choice < 0 || choice > 7){
            fprintf(stderr, "\nInvalid choice is selected.");
            continue;
        }

        printf("\nEnter the first Number:");
        scanf("%lf", &first);

        printf("\nEnter the second Number:");
        scanf("%lf", &second);

        switch (choice)
        {
        case 1:
            result = first + second;
            break;
        case 2:
           result = first - second;
            break;
        case 3:
        result = first * second;
            break;
        case 4:
        result = division(first, second);
            break;
        case 5:
        result = modulus(first, second);
            break;
        case 6:
            result = pow(first, second);
            break;
        
        default:
            break;
        }
        if(!isnan(result)){
        printf("\nResult is : %.2lf", result);
        }
    };
 
}

double division(double a, double b){
    if (b == 0)
    {
        fprintf(stderr, "\nInvalid Argument for Division");
        return NAN;
    }
    else
    {
        return a / b;
    }
    
}

double modulus(int a, int b){
    if (b == 0)
    {
        fprintf(stderr, "\nInvalid Argument for Modulus");
        return NAN;
    }
    else
    {
        return a % b;
    }
    

}

void print_menu(){
    printf("\n------------------------------------");
    printf("\nWelcome to the Simple Calculator..");
    printf("\n1. Add");
    printf("\n2. Substract");
    printf("\n3. Multiply");
    printf("\n4. Division");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit");

    printf("\n Choose the one of the following Choice:");

}