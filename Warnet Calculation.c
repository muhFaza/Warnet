//2502141990
//Muhammad Faza
//Compiler - Dev C++
#include <stdio.h>

int main()
{
    int jam=0;
    printf("Harga Perjam 2000. Diskon 20%% jika lebih dari 5 jam.\nJam bermain: ");
    scanf("%d", &jam); getchar();
    
    if(jam > 5){
        jam = 10000+(1600*(jam - 5));
    }
    
    if(jam > 0, jam < 6){
        jam = 2000*jam;
    }
    
    printf("Total Harga: Rp %d", jam);

    return 0;
}
