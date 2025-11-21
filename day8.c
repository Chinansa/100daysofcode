Q15
#include <stdio.h>

int main() {
    char ch;                           

    printf("Enter a character: ");      
    scanf("%c", &ch);                   

    
    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase alphabet");     
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase alphabet");     
    else if (ch >= '0' && ch <= '9')
        printf("Digit");                
    else
        printf("Special character");       

    return 0;                           
}

Q16
#include <stdio.h>

int main() {
    int a, b, c;                        

    printf("Enter three numbers: ");    
    scanf("%d %d %d", &a, &b, &c);        

    
    if (a >= b && a >= c)
        printf("Largest is %d", a);        
    else if (b >= a && b >= c)
        printf("Largest is %d", b);      
    else
        printf("Largest is %d", c);      

    return 0;                       
}
