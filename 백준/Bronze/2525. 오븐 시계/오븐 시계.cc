#include <stdio.h>

int main(void)
{
    int hour, min, term;
    scanf("%d %d", &hour, &min);
    scanf("%d", &term);
    
    int allhour, allmin;
    allmin = (min+term)%60;
    allhour = hour + (min+term)/60;
    
    if(allhour >= 24)
    {
        while(allhour>=24)
        {
            allhour -= 24;
        }
        printf("%d %d", allhour, allmin);
    }
    else
        printf("%d %d", allhour, allmin);
    
    return 0;
}