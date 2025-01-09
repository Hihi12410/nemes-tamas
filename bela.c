#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define err fprintf(stderr,"Hiba!");
#define memcheck(x, y){if (x == NULL) {err y}}

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    if (n < 2 || n > 4 || m < 1 || m > 100000) {return 1;} 
    
    int * sor_arak = calloc(n, sizeof(int));  memcheck(sor_arak, return 1;)
    for (int i = 0; i<n && scanf("%d", &sor_arak[i]) == 1; ++i);
    
    int x = (n*(n+1)/2);
    int * arak = calloc(m*x, sizeof(int));

    for (int i = 0; i < m; ++i) { for (int j = 0; j < x && scanf("%d", &arak[i*x+j]) == 1; ++j); }
    
    for(int i = 0; i < n; ++i)
    {
        for(int y = 0; y < m; ++y)
        {
            for(int k = 0; k < m; ++k)
            {
                if()
            }
        }   
    }


    free(sor_arak);
    return 0;
}