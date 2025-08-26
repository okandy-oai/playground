#include <stdio.h>
#include <string.h>

int main() {
    char buffer[8];

    // Safe: limit to buffer size - 1 for null terminator
    strncpy(buffer, "This string is way too long!", sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0';  // always null terminate

    printf("Buffer contains: %s\n", buffer);
    return 0;
}