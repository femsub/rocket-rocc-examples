// See LICENSE for license details.

#ifndef SRC_MAIN_C_CORDIC_H
#define SRC_MAIN_C_CORDIC_H

#include "rocc-software/src/xcustom.h"

#define k_SIN 0
#define k_COS 1
#define k_SINH 2
#define k_COSH 3

#define XCUSTOM_CORDIC 3

#define SIN(y, data)                                    \
  ROCC_INSTRUCTION(XCUSTOM_CORDIC, y, data, 0, k_SIN);
#define COS(y, data)                                    \
  ROCC_INSTRUCTION(XCUSTOM_CORDIC, y, data, 0, k_COS);
#define SINH(y, data)                                    \
  ROCC_INSTRUCTION(XCUSTOM_CORDIC, y, data, 0, k_SINH);
#define COSH(y, data)                                    \
  ROCC_INSTRUCTION(XCUSTOM_CORDIC, y, data, 0, k_COSH);

#endif  // SRC_MAIN_C_CORDIC_H
