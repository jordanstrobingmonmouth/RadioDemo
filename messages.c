#include "messages.h"

struct msg messages[] = {
    {0x00, "You there?"},
    {0x01, "Hello, how are you?"},
    {0x02, "Doing well, thank you. How are you?"},
    {0x03, "Not bad, thanks for asking"}

};

void printMsg(byte id) {
  printf("%u\n", id);
  if (!(id < 4)) {
       print("Invalid id\n");
       return;
  }
  print("%s\n", messages[id].text);
} 


 void print_substring(const char *str, int skip, int tail)
{
    int len = strlen(str);
    assert(skip >= 0);
    assert(tail >= 0 && tail < len);
    assert(len > skip + tail);
    printf("%.*s", len - skip - tail, str + skip);
}
