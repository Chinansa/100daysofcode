Q5
#include <stdio.h>

int main() {
    float celsius, fahrenheit;   

    printf("Enter temperature in Celsius: ");   
    scanf("%f", &celsius);                     

    fahrenheit = (celsius * 9 / 5) + 32;       

    printf("Fahrenheit=%.0f", fahrenheit);     

    return 0;                                  
}



Q6
#include <stdio.h>

int main() {
    int a, b, temp;            

    printf("Enter two numbers: ");   
    scanf("%d %d", &a, &b);         

    temp = a;                    
    a = b;                      
    b = temp;                        

    printf("After swap: %d %d", a, b);  

    return 0;                      
}
