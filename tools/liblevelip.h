#ifndef LIBLEVELIP_H_
#define LIBLEVELIP_H_

#include <stdint.h>

#define IPC_SOCKET 0x0001
#define IPC_CONNECT 0x0002

struct ipc_msg {
    uint16_t type;
    uint8_t data[];
} __attribute__((packed));

struct ipc_socket {
    int domain;
    int type;
    int protocol;
} __attribute__((packed));

#endif
