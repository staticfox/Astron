#pragma once

#define CLIENT_HELLO 1
#define CLIENT_HELLO_RESP 2
#define CLIENT_GO_GET_LOST 4
#define CLIENT_OBJECT_UPDATE_FIELD 24


#define CLIENT_DISCONNECT_NO_HELLO 107
#define CLIENT_DISCONNECT_INVALID_MSGTYPE 108
#define CLIENT_DISCONNECT_TRUNCATED_DATAGRAM 109
#define CLIENT_DISCONNECT_ANONYMOUS_VIOLATION 113
#define CLIENT_DISCONNECT_MISSING_OBJECT 117
#define CLIENT_DISCONNECT_FORBIDDEN_FIELD 118
#define CLIENT_DISCONNECT_BAD_VERSION 124
#define CLIENT_DISCONNECT_BAD_DCHASH 125