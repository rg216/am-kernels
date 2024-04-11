#ifndef KLIBTESTS_H
#define KLIBTESTS_H

#include <am.h>
#include <klib.h>
#include <klib-macros.h>

extern void (*entry)();

#define CASE(id, entry_, ...) \
  case id: { \
    void entry_(); \
    entry = entry_; \
    __VA_ARGS__; \
    entry_(); \
    break; \
  }

#endif