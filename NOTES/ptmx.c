//read before compile an exec
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <sys/ioctl.h>

int main() {
    int master_fd;
    char *slave_name;

    // 1️⃣ Open /dev/ptmx to get a new PTY master
    master_fd = open("/dev/ptmx", O_RDWR | O_NOCTTY);
    if (master_fd < 0) {
        perror("open /dev/ptmx");
        exit(1);
    }

    // 2️⃣ Grant access and unlock slave
    if (grantpt(master_fd) < 0) {
        perror("grantpt");
        exit(1);
    }
    if (unlockpt(master_fd) < 0) {
        perror("unlockpt");
        exit(1);
    }

    // 3️⃣ Get the slave PTY device name (like /dev/pts/3)
    slave_name = ptsname(master_fd);
    if (slave_name == NULL) {
        perror("ptsname");
        exit(1);
    }

    printf("New PTY created: %s\n", slave_name);

    // 4️⃣ You can now open the slave side if you want
    int slave_fd = open(slave_name, O_RDWR);
    if (slave_fd < 0) {
        perror("open slave pty");
        exit(1);
    }

    // 5️⃣ Write to master, read from slave
    const char *msg = "Hello, slave PTY!\n";
    write(master_fd, msg, strlen(msg));

    char buf[256];
    int n = read(slave_fd, buf, sizeof(buf));
    buf[n] = '\0';
    printf("Read from slave: %s\n", buf);

    // 6️⃣ Clean up
    close(master_fd);
    close(slave_fd);
    return 0;
}

