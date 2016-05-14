#ifndef SERIAL_XMEGA_H_
#define SERIAL_XMEGA_H_

#include <iomanip>
#include <iostream>
#include <cstring>
#include <thread>
#include <future>
#include <SerialStream.h>

#define RET_SUCCESS 0

int SerialInit(char* pDevice, int iBaud, std::function<void (char*)> cbDataRcvd, char *pMsgErr);

#endif
