#ifndef __MESSAGE_H
#define __MESSAGE_H
#include "koliada.h"

struct msg {

      byte code;
      char * text;
      
};

void printMsg(byte id);

#endif //end __MESSAGE_H