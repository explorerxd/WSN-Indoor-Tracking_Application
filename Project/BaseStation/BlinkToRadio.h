

#ifndef BLINKTORADIO_H
#define BLINKTORADIO_H

enum {
  AM_BLINKTORADIO = 6,
  TIMER_PERIOD_MILLI = 250,
  synctimer = 10000	
};

typedef nx_struct BlinkToRadioMsg {
  nx_uint32_t type;
  nx_uint16_t nodeid;
  nx_uint16_t counter;
} BlinkToRadioMsg;

typedef nx_struct syncstruct {
  nx_uint16_t type;
  nx_uint16_t nodeid;
  nx_uint16_t counter;
} syncstruct ;
#endif
