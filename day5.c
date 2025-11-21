Q9
#include <stdio.h>
#include <math.h>  

int main() {
    float principal, rate, time;        
    float simpleInterest, compoundInterest;

    printf("Enter principal, rate and time: ");   
    scanf("%f %f %f", &principal, &rate, &time); 

    simpleInterest = (principal * rate * time) / 100;  
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;  

    printf("Simple Interest=%.2f, Compound Interest=%.2f", simpleInterest, compoundInterest);
                                                      

    return 0;                                        
}

Q10
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds; 

    printf("Enter time in seconds: ");         
    scanf("%d", &totalSeconds);                

    hours = totalSeconds / 3600;                
    totalSeconds = totalSeconds % 3600;        

    minutes = totalSeconds / 60;             
    seconds = totalSeconds % 60;               

    printf("%d:%d:%d", hours, minutes, seconds); 

    return 0;                                  
}
