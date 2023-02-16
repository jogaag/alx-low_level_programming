#include <unistd.h>

int main(void) {
  const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  const int len = sizeof(message) - 1;  // subtract 1 to exclude the null terminator
  const ssize_t ret = write(2, message, len);  // write to standard error
  return (ret == len) ? 1 : 0;  // return 1 if all bytes were written, 0 otherwise
}
