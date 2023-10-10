#include <stdio.h>

int main(void)
{
    float dl_speed, dl_size, dl_time;
    printf(" Enter your download speed:\n");
    scanf("%f", &dl_speed);
    printf(" Enter download size:\n");
    scanf("%f", &dl_size);
    dl_time = dl_size / (dl_speed / 8);
    printf(" At the download speed as %.2f mb/s "
           "and download size of %.2f mb, "
           "download time is: %f seconds",
           dl_speed, dl_size, dl_time);

    return 0;
}
