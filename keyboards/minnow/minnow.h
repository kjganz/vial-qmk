/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
	K00, K01, K02, K03, K04,      K06, K07, K08, K09, K0A, \
	K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
    K20, K21, K22, K23, K24,      K26, K27, K28, K29, K2A, \
    K30,      K32, K33, K34, K35, K36, K37, K38,      K3A  \
) { \
	{ K00, K01, K02, K03, K04, XXX, K06, K07, K08, K09, K0A }, \
	{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A }, \
	{ K20, K21, K22, K23, K24, XXX, K26, K27, K28, K29, K2A }, \
	{ K30, XXX, K32, K33, K34, K35, K36, K37, K38, XXX, K3A }, \
}
