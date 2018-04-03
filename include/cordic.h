// See LICENSE for license details.

#ifndef SRC_MAIN_C_CORDIC_H
#define SRC_MAIN_C_CORDIC_H

#include "rocc-software/src/xcustom.h"

#define k_SIN 0
#define k_COS 1
#define k_TAN 2
#define k_CTAN 3

#define XCUSTOM_CORDIC 3

#define SIN(y, rocc_rd, data)                                    \
  ROCC_INSTRUCTION(XCUSTOM_CORDIC, y, data, rocc_rd, k_SIN);
#define COS(y, rocc_rd, data)                                    \
  ROCC_INSTRUCTION(XCUSTOM_CORDIC, y, data, rocc_rd, k_COS);
#define TAN(y, rocc_rd, data)                                    \
  ROCC_INSTRUCTION(XCUSTOM_CORDIC, y, data, rocc_rd, k_TAN);
#define CTAN(y, rocc_rd, data) 					 \
  ROCC_INSTRUCTION(XCUSTOM_CORDIC, y, data, rocc_rd, k_CTAN);

#endif  // SRC_MAIN_C_CORDIC_H
