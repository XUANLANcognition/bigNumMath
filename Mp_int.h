#ifndef _MP_INT_H
#define _MP_INT_H

#include "Mid_components.h"

/* Mp_int class */
class Mp_int{
 public:
  Mp_int();
  ~Mp_int();
  friend std::ostream &operator<<(std::ostream &os, Mp_int &mp_int);
  Mp_int &operator=(const Mp_int &m);
  void mp_grow(int b);
  void mp_zip();
  void mp_zero();
  void mp_set(unsigned int b);
  Mp_int &operator-();
  friend void mp_s_add(Mp_int &a, Mp_int &b, Mp_int &c);
  friend Mp_int &operator+(const Mp_int &a, const Mp_int &b);

  /* universal interface */
  int getAlloc();
  int getUsed();
  int getSign();
  mp_digit *getDp();

 private: 
  int alloc, used, sign;
  mp_digit *dp;
};

#endif