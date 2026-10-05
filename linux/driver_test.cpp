#include <iostream>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

int main() {
    const char* device = "/dev/student_driver";

    int fd = open(device, O_RDONLY);

    if (fd == -1) {
        cout << "Could not open student driver." << endl;
        return 1;
    }

    char buffer[128] = {0};

    int bytesRead = read(fd, buffer, sizeof(buffer) - 1);

    if (bytesRead == -1) {
        cout << "Could not read from driver." << endl;
        close(fd);
        return 1;
    }

    cout << "Message from Linux Device Driver:" << endl;
    cout << buffer;

    close(fd);

    return 0;
}