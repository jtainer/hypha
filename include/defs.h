// 
// defs.h
// Constants used for communication with various LoRa transceiver modules
//
// Copyright (c) 2024, Jonathan Tainer
//

#ifndef DEFS_H
#define DEFS_H

#ifdef RYLR896

#define OP_TEST "AT"
#define OP_RESET "AT+RESET"
#define OP_SET_MODE "AT+MODE=%d"
#define OP_GET_MODE "AT+MODE?"
#define OP_SET_BAUDRATE "AT+IPR=%d"
#define OP_GET_BAUDRATE "AT+IPR?"
#define OP_SET_PARAMS "AT+PARAMETER=%d,%d,%d,%d"
#define OP_GET_PARAMS "AT+PARAMETER?"
#define OP_SET_BAND "AT+BAND=%d"
#define OP_GET_BAND "AT+BAND?"
#define OP_SET_ADDRESS "AT+ADDRESS=%d"
#define OP_GET_ADDRESS "AT+ADDRESS?"
#define OP_SET_NETID "AT+NETWORKID=%d"
#define OP_GET_NETID "AT+NETWORKID?"
#define OP_SET_PASSWORD "AT+CPIN=%s"
#define OP_GET_PASSWORD "AT+CPIN?"
#define OP_SET_POWER "AT+CRFOP=%d"
#define OP_GET_POWER "AT+CRFOP?"
#define OP_SEND "AT+SEND=%d,%d,%s"
#define OP_GET_VERSION "AT+VER?"
#define OP_FACTORY_RESET "AT+FACTORY"

#endif // RYLR896

#ifdef RYLR406
#endif //RYLR406

#endif // DEFS_H
