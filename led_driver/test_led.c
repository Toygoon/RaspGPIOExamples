#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <linux/kdev_t.h>

#define LED_FILE_NAME "/dev/led_driver"

int main(int argc, char** argv) {
    int led_fd;
    char data;

    led_fd = open(LED_FILE_NAME, O_RDWR);
    if (led_fd < 0) {
        fprintf(stderr, "Can't open %s\n", LED_FILE_NAME);
        return -1;
    }

    while (1) {
        data = 1;
        write(led_fd, &data, sizeof(char));
        sleep(1);

        data = 0;
        write(led_fd, &data, sizeof(char));
        sleep(1);
    }

    close(led_fd);
    return 0;
}
