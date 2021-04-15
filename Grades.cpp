#include <stdio.h>

int main()
{
    int a;
    printf("Enter the marks.\n");
    scanf("%d",&a);
    
    if(a>=0&&a<=100)
    
    {switch(a/10)
    {
        case 10:
        case 9:
        printf("The student grade is A.");
        break;
        
        case 8:
        printf("The student grade is B.");
        break;
        
        case 7:
        printf("The student grade is C.");
        break;
        
        case 6:
        printf("The student grade is D.");
        break;
        
        case 5:
        printf("The student grade is E.");
        break;
        
        default:
        printf("The student is fail");
    }   
    }
    else
    printf("wrong input");
    }
