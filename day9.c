Q17

#include <stdio.h>
#include <math.h> 

int main() {
    float a, b, c;                     
    float d, root1, root2;                  

    printf("Enter coefficients a, b, c: "); 
    scanf("%f %f %f", &a, &b, &c);          

    d = b * b - 4 * a * c;                  

    
    if (d > 0) {                        
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: %.0f, %.0f", root1, root2);
    }
    else if (d == 0) {                   
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.0f", root1);
    }
    else {                                
        printf("Roots are complex");
    }

    return 0;                            
}

Q18
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

#include <stdio.h>

int main() {
    int percent;                         

    printf("Enter percentage: ");          
    scanf("%d", &percent);               

    
    if (percent >= 90 && percent <= 100)
        printf("Grade A");
    else if (percent >= 80 && percent < 90)
        printf("Grade B");
    else if (percent >= 70 && percent < 80)
        printf("Grade C");
    else if (percent >= 60 && percent < 70)
        printf("Grade D");
    else if (percent >= 0 && percent < 60)
        printf("Grade F");
    else
        printf("Invalid percentage");      

    return 0;                              
}
