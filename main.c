#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time_of_stayed;
    int starting_price = 1;
    int first_hour = 3;
    int one_to_four_hours = 10;
    int four_to_six_hours = 15;
    int six_to_ten_hours = 25;
    int over_ten_hours = 40;

    printf("Please write the time of you stayed:");
    scanf("%d", &time_of_stayed);

    if (time_of_stayed == 1)
        printf("\n\n\nTotal fee is: %d TL.\n\n\n", (first_hour + starting_price));
    else if (time_of_stayed > 1 && time_of_stayed <= 4)
    {
         printf("\n\n\nTotal fee is: %d TL.\n\n\n", (one_to_four_hours + starting_price));
    } else if (time_of_stayed > 4 && time_of_stayed <= 6)
    {
        printf("\n\n\nTotal fee is: %d TL.\n\n\n", (four_to_six_hours + starting_price));
    } else if (time_of_stayed > 6 && time_of_stayed <= 10)
    {
        printf("\n\n\nTotal fee is: %d TL.\n\n\n", (six_to_ten_hours + starting_price));
    } else if (time_of_stayed > 10)
    {
        printf("\n\n\nTotal fee is: %d TL.\n\n\n", (starting_price + over_ten_hours));
    }


    printf("***************************************************************");
    return 0;
}
