Q13
#include <stdio.h>

int main() {
    int year;                       

    printf("Enter a year: ");       
    scanf("%d", &year);              

    
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap year");          
    else
        printf("Not a leap year");     

    return 0;                         
}


Q14

#include <stdio.h>

int main() {
    char ch;                         

    printf("Enter a character: ");       
    scanf("%c", &ch);                      

    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Vowel");                 
    else
        printf("Consonant");              

    return 0;                             
}
