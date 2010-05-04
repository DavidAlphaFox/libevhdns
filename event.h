/*
 * event.h: a simplified event.h header for evhdns
 * by pts@fazekas.hu at Sat Apr 24 21:55:10 CEST 2010
 *
 * This header is compatible with both libevent and libev.
 */
#ifndef _EVENT_H
#define _EVENT_H 1

#define _EVENT_LOG_DEBUG 0
#define _EVENT_LOG_MSG   1
#define _EVENT_LOG_WARN  2
#define _EVENT_LOG_ERR   3
typedef void (*event_log_cb)(int severity, const char *msg);

struct event {
  char dummy[160];  /* on i386: libev: 100 bytes, libevent: 72 bytes */
};

/*#define EV_READ  0x02*/  /* for libev-3.9, EV_READ  is 0x01 */
/*#define EV_WRITE 0x04*/  /* for libev-3.9, EV_WRITE is 0x02 */
#define EV_PERSIST 0x10

#define EVLIST_INIT	0x80

#define evtimer_del(ev)			event_del(ev)
#define evtimer_add(ev, tv)		event_add(ev, tv)
/* fake implementation, works for evdns.c */
#define evtimer_initialized(ev)		1  /*((ev)->ev_flags & EVLIST_INIT)*/
#define evtimer_set(ev, cb, arg)	event_set(ev, -1, 0, cb, arg)

int event_add(struct event *ev, const struct timeval *timeout);
int event_del(struct event *);
void event_set(struct event *, int, short, void (*)(int, short, void *), void *);

/* Returns "libev" iff libev is used. */
const char *event_get_method(void);

#endif
