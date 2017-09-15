#include "compat.h"

void tcp_backlog_accepted_c(struct tcp_pcb *pcb) {
    tcp_backlog_accepted(pcb);
}
