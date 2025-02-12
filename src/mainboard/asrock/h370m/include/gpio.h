/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef CFG_GPIO_H
#define CFG_GPIO_H

#include <gpio.h>

/* Pad configuration was generated automatically using intelp2m utility */
static const struct pad_config gpio_table[] = {

	/* ------- GPIO Community 0 ------- */

	/* ------- GPIO Group GPP_A ------- */
	_PAD_CFG_STRUCT(GPP_A0, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A1, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A2, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A3, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A4, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A5, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_A6, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF), 0),
	_PAD_CFG_STRUCT(GPP_A7, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A8, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), PAD_PULL(DN_5K)),
	_PAD_CFG_STRUCT(GPP_A9, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_A10, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), PAD_PULL(DN_5K)),
	_PAD_CFG_STRUCT(GPP_A11, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_CFG_GPO(GPP_A12, 0, PLTRST),
	_PAD_CFG_STRUCT(GPP_A13, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_A14, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_A15, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A16, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	PAD_CFG_GPO(GPP_A17, 1, PLTRST),
	PAD_CFG_GPO(GPP_A18, 1, PLTRST),
	_PAD_CFG_STRUCT(GPP_A19, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A20, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A21, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A22, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_A23, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),

	/* ------- GPIO Group GPP_B ------- */
	PAD_CFG_GPO(GPP_B0, 1, PLTRST),
	PAD_CFG_GPO(GPP_B1, 1, PLTRST),
	PAD_CFG_GPO(GPP_B2, 1, PLTRST),
	_PAD_CFG_STRUCT(GPP_B3, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_CFG_GPO(GPP_B4, 1, PLTRST),
	_PAD_CFG_STRUCT(GPP_B5, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_RX_DISABLE) | (1 << 1), 0),
	PAD_CFG_GPO(GPP_B6, 1, PLTRST),
	_PAD_CFG_STRUCT(GPP_B7, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_B8, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_B9, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_CFG_GPO(GPP_B10, 1, PLTRST),
	PAD_CFG_GPO(GPP_B11, 1, PLTRST),
	_PAD_CFG_STRUCT(GPP_B12, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_B13, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_B14, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), PAD_PULL(DN_20K)),
	PAD_CFG_GPO(GPP_B15, 1, PLTRST),
	PAD_CFG_GPO(GPP_B16, 1, PLTRST),
	PAD_CFG_GPO(GPP_B17, 1, DEEP),
	PAD_CFG_GPO(GPP_B18, 0, PLTRST),
	PAD_CFG_GPO(GPP_B19, 1, PLTRST),
	PAD_CFG_GPO(GPP_B20, 1, PLTRST),
	PAD_CFG_GPI_TRIG_OWN(GPP_B21, NONE, PLTRST, OFF, ACPI),
	PAD_CFG_GPO(GPP_B22, 0, PLTRST),
	PAD_CFG_GPO(GPP_B23, 0, PLTRST),

	/* ------- GPIO Community 1 ------- */

	/* ------- GPIO Group GPP_C ------- */
	_PAD_CFG_STRUCT(GPP_C0, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_C1, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | (1 << 1), 0),
	PAD_CFG_GPO(GPP_C2, 1, PLTRST),
	_PAD_CFG_STRUCT(GPP_C3, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_C4, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | (1 << 1), 0),
	PAD_CFG_GPO(GPP_C5, 0, PLTRST),
	PAD_CFG_GPO(GPP_C6, 1, PLTRST),
	PAD_CFG_GPO(GPP_C7, 1, PLTRST),
	PAD_CFG_GPO(GPP_C8, 1, PLTRST),
	PAD_CFG_GPO(GPP_C9, 1, PLTRST),
	PAD_CFG_GPO(GPP_C10, 1, PLTRST),
	_PAD_CFG_STRUCT(GPP_C11, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_C12, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_CFG_GPO(GPP_C13, 1, PLTRST),
	PAD_CFG_GPI_TRIG_OWN(GPP_C14, NONE, PLTRST, OFF, ACPI),
	_PAD_CFG_STRUCT(GPP_C15, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_C16, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_C17, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_C18, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_C19, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_C20, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_C21, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_CFG_GPO(GPP_C22, 1, PLTRST),
	PAD_CFG_GPO(GPP_C23, 1, PLTRST),

	/* ------- GPIO Group GPP_D ------- */
	PAD_CFG_GPI_TRIG_OWN(GPP_D0, NONE, RSMRST, OFF, ACPI),
	PAD_CFG_GPO(GPP_D1, 1, PLTRST),
	PAD_CFG_GPI_TRIG_OWN(GPP_D2, NONE, PLTRST, OFF, ACPI),
	PAD_CFG_GPO(GPP_D3, 1, PLTRST),
	PAD_CFG_GPI_TRIG_OWN(GPP_D4, NONE, PLTRST, OFF, ACPI),
	PAD_CFG_GPO(GPP_D5, 1, PLTRST),
	PAD_CFG_GPO(GPP_D6, 1, PLTRST),
	PAD_CFG_GPO(GPP_D7, 1, PLTRST),
	PAD_CFG_GPO(GPP_D8, 1, PLTRST),
	PAD_CFG_GPI_TRIG_OWN(GPP_D9, NONE, PLTRST, OFF, ACPI),
	PAD_CFG_GPI_TRIG_OWN(GPP_D10, NONE, PLTRST, OFF, ACPI),
	PAD_CFG_GPO(GPP_D11, 1, PLTRST),
	PAD_CFG_GPO(GPP_D12, 1, PLTRST),
	PAD_CFG_GPO(GPP_D13, 1, PLTRST),
	PAD_CFG_GPO(GPP_D14, 1, PLTRST),
	PAD_CFG_GPI_TRIG_OWN(GPP_D15, NONE, PLTRST, OFF, ACPI),
	PAD_CFG_GPO(GPP_D16, 1, PLTRST),
	_PAD_CFG_STRUCT(GPP_D17, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE) | 1, 0),
	_PAD_CFG_STRUCT(GPP_D18, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE) | 1, 0),
	_PAD_CFG_STRUCT(GPP_D19, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE) | 1, 0),
	_PAD_CFG_STRUCT(GPP_D20, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE) | 1, 0),
	PAD_CFG_GPO(GPP_D21, 1, PLTRST),
	PAD_CFG_GPO(GPP_D22, 1, PLTRST),
	PAD_CFG_GPI_TRIG_OWN(GPP_D23, NONE, PLTRST, OFF, ACPI),

	/* ------- GPIO Group GPP_G ------- */
	PAD_CFG_GPO(GPP_G0, 1, PLTRST),
	PAD_CFG_GPO(GPP_G1, 1, PLTRST),
	PAD_CFG_GPO(GPP_G2, 1, PLTRST),
	PAD_CFG_GPO(GPP_G3, 1, PLTRST),
	PAD_CFG_GPO(GPP_G4, 1, PLTRST),
	PAD_CFG_GPO(GPP_G5, 1, PLTRST),
	PAD_CFG_GPO(GPP_G6, 1, PLTRST),
	PAD_CFG_GPO(GPP_G7, 1, PLTRST),

	/* ------- GPIO Group AZA ------- */

	/* ------- GPIO Group VGPIO_0 ------- */

	/* ------- GPIO Group VGPIO_1 ------- */

	/* ------- GPIO Community 2 ------- */

	/* ------- GPIO Group GPD ------- */
	_PAD_CFG_STRUCT(GPD0, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPD1, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPD2, PAD_FUNC(NF1) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPD3, PAD_FUNC(NF1) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPD4, PAD_FUNC(NF1) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPD5, PAD_FUNC(NF1) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPD6, PAD_FUNC(NF1) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	PAD_CFG_GPO(GPD7, 1, PLTRST),
	_PAD_CFG_STRUCT(GPD8, PAD_FUNC(NF1) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPD9, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE) | 1, 0),
	_PAD_CFG_STRUCT(GPD10, PAD_FUNC(NF1) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPD11, PAD_FUNC(NF1) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),

	/* ------- GPIO Community 3 ------- */

	/* ------- GPIO Group GPP_K ------- */
	_PAD_CFG_STRUCT(GPP_K0, PAD_FUNC(GPIO) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_K1, PAD_FUNC(GPIO) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_CFG_GPO(GPP_K2, 1, PLTRST),
	PAD_CFG_GPO(GPP_K3, 1, PLTRST),
	PAD_CFG_GPO(GPP_K4, 1, PLTRST),
	PAD_CFG_GPO(GPP_K5, 0, RSMRST),
	PAD_CFG_GPO(GPP_K6, 0, RSMRST),
	PAD_CFG_GPO(GPP_K7, 0, RSMRST),
	PAD_CFG_GPO(GPP_K8, 1, PLTRST),
	PAD_CFG_GPO(GPP_K9, 1, PLTRST),
	PAD_CFG_GPO(GPP_K10, 1, PLTRST),
	PAD_CFG_GPO(GPP_K11, 1, PLTRST),
	PAD_CFG_GPO(GPP_K12, 1, PLTRST),
	_PAD_CFG_STRUCT(GPP_K13, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_K14, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_CFG_GPO(GPP_K15, 1, PLTRST),
	PAD_CFG_GPO(GPP_K16, 1, PLTRST),
	PAD_CFG_GPO(GPP_K17, 1, PLTRST),
	PAD_CFG_GPO(GPP_K18, 1, PLTRST),
	PAD_CFG_GPO(GPP_K19, 1, PLTRST),
	PAD_CFG_GPO(GPP_K20, 1, PLTRST),
	PAD_CFG_GPO(GPP_K21, 1, PLTRST),
	PAD_CFG_GPO(GPP_K22, 1, PLTRST),
	PAD_CFG_GPO(GPP_K23, 1, PLTRST),

	/* ------- GPIO Group GPP_H ------- */
	_PAD_CFG_STRUCT(GPP_H0, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_H1, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_H2, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_H3, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_H4, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_H5, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_H6, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_H7, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_H8, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_RX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_H9, PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_RX_DISABLE) | (1 << 1), 0),
	PAD_CFG_GPO(GPP_H10, 1, PLTRST),
	PAD_CFG_GPO(GPP_H11, 1, PLTRST),
	PAD_CFG_GPO(GPP_H12, 0, PLTRST),
	PAD_CFG_GPO(GPP_H13, 1, PLTRST),
	PAD_NC(GPP_H14, NONE),
	PAD_CFG_GPO(GPP_H15, 1, PLTRST),
	PAD_CFG_GPI_TRIG_OWN(GPP_H16, NONE, PLTRST, OFF, ACPI),
	PAD_CFG_GPI_TRIG_OWN(GPP_H17, NONE, PLTRST, OFF, ACPI),
	PAD_CFG_GPI_TRIG_OWN(GPP_H18, NONE, PLTRST, OFF, ACPI),
	_PAD_CFG_STRUCT(GPP_H19, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_H20, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_CFG_GPO(GPP_H21, 1, PLTRST),
	PAD_CFG_GPO(GPP_H22, 1, PLTRST),
	_PAD_CFG_STRUCT(GPP_H23, PAD_FUNC(GPIO) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | 1, 0),

	/* ------- GPIO Group GPP_E ------- */
	_PAD_CFG_STRUCT(GPP_E0, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_E1, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	PAD_CFG_GPO(GPP_E2, 1, PLTRST),
	_PAD_CFG_STRUCT(GPP_E3, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_E4, PAD_FUNC(NF1) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE) | 1, 0),
	_PAD_CFG_STRUCT(GPP_E5, PAD_FUNC(NF1) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(TX_RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_E6, PAD_FUNC(NF1) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE) | 1, 0),
	PAD_CFG_GPO(GPP_E7, 1, PLTRST),
	/* GPP_E0 - SATAXPCIE0 */
	// PAD_CFG_NF(GPP_E0, UP_20K, PLTRST, NF1),
	// /* GPP_E1 - SATAXPCIE1 */
	// PAD_CFG_NF(GPP_E1, UP_20K, PLTRST, NF1),
	// /* GPP_E2 - SATAXPCIE2 */
	// PAD_CFG_NF(GPP_E2, UP_20K, PLTRST, NF1),
	/* GPP_E3 - CPU_GP0 */
	PAD_CFG_NF(GPP_E3, NONE, PLTRST, NF1),
	/* GPP_E4 - SATA_DEVSLP0 */
	PAD_CFG_NF(GPP_E4, NONE, PLTRST, NF1),
	/* GPP_E5 - SATA_DEVSLP1 */
	PAD_CFG_NF(GPP_E5, NONE, PLTRST, NF1),
	/* GPP_E6 - SATA_DEVSLP2 */
	PAD_CFG_NF(GPP_E6, NONE, PLTRST, NF1),
	/* GPP_E7 - GPIO */
	PAD_CFG_GPI_INT(GPP_E7, NONE, PLTRST, OFF),
	/* GPP_E8 - SATA_LED# */
	PAD_CFG_NF(GPP_E8, NONE, PLTRST, NF1),
	
	
	_PAD_CFG_STRUCT(GPP_E8, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), PAD_PULL(UP_5K)),
	_PAD_CFG_STRUCT(GPP_E9, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE) | (1 << 1) | 1, 0),
	PAD_CFG_GPO(GPP_E10, 1, PLTRST),
	PAD_CFG_GPO(GPP_E11, 1, PLTRST),
	_PAD_CFG_STRUCT(GPP_E12, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),

	/* ------- GPIO Group GPP_F ------- */
	_PAD_CFG_STRUCT(GPP_F0, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), PAD_PULL(UP_5K)),
	//_PAD_CFG_STRUCT(GPP_F1, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), PAD_PULL(UP_5K)),
	/* GPP_F1 - SATAXPCIE4 */
	PAD_CFG_NF(GPP_F1, UP_20K, PLTRST, NF1),
	_PAD_CFG_STRUCT(GPP_F2, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_CFG_GPO(GPP_F3, 1, PLTRST),
	PAD_CFG_GPO(GPP_F4, 1, PLTRST),
	_PAD_CFG_STRUCT(GPP_F5, PAD_FUNC(NF1) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE) | 1, 0),
	_PAD_CFG_STRUCT(GPP_F6, PAD_FUNC(NF1) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE) | 1, 0),
	_PAD_CFG_STRUCT(GPP_F7, PAD_FUNC(NF1) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE) | 1, 0),
	PAD_CFG_GPO(GPP_F8, 1, PLTRST),
	PAD_CFG_GPO(GPP_F9, 1, PLTRST),
	_PAD_CFG_STRUCT(GPP_F10, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_CFG_GPO(GPP_F11, 1, PLTRST),
	PAD_CFG_GPO(GPP_F12, 0, RSMRST),
	PAD_CFG_GPO(GPP_F13, 0, RSMRST),
	_PAD_CFG_STRUCT(GPP_F14, PAD_FUNC(NF2) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	PAD_CFG_GPO(GPP_F15, 1, PLTRST),
	PAD_CFG_GPO(GPP_F16, 1, PLTRST),
	PAD_CFG_GPO(GPP_F17, 1, PLTRST),
	PAD_CFG_GPO(GPP_F18, 1, PLTRST),
	PAD_CFG_GPO(GPP_F19, 1, PLTRST),
	PAD_CFG_GPO(GPP_F20, 1, DEEP),
	PAD_CFG_GPO(GPP_F21, 1, DEEP),
	PAD_CFG_GPO(GPP_F22, 1, PLTRST),
	PAD_CFG_GPO(GPP_F23, 1, PLTRST),

	/* ------- GPIO Group SPI ------- */

	/* ------- GPIO Community 4 ------- */

	/* ------- GPIO Group CPU ------- */

	/* ------- GPIO Group JTAG ------- */

	/* ------- GPIO Group GPP_I ------- */
	_PAD_CFG_STRUCT(GPP_I0, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_I1, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_I2, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_RX_DISABLE), 0),
	PAD_CFG_GPO(GPP_I3, 1, PLTRST),
	_PAD_CFG_STRUCT(GPP_I4, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_I5, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_I6, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_I7, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_I8, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_I9, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_I10, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	PAD_CFG_GPO(GPP_I11, 1, PLTRST),
	PAD_CFG_GPO(GPP_I12, 1, PLTRST),
	PAD_CFG_GPO(GPP_I13, 1, PLTRST),
	PAD_CFG_GPO(GPP_I14, 1, PLTRST),

	/* ------- GPIO Group GPP_J ------- */
	PAD_CFG_GPO(GPP_J0, 1, PLTRST),
	_PAD_CFG_STRUCT(GPP_J1, PAD_FUNC(NF2) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	PAD_CFG_GPO(GPP_J2, 1, PLTRST),
	PAD_CFG_GPO(GPP_J3, 1, PLTRST),
	_PAD_CFG_STRUCT(GPP_J4, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_CFG_GPO(GPP_J5, 1, PLTRST),
	_PAD_CFG_STRUCT(GPP_J6, PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	PAD_CFG_GPO(GPP_J7, 1, PLTRST),
	PAD_CFG_GPO(GPP_J8, 1, PLTRST),
	PAD_CFG_GPI_TRIG_OWN(GPP_J9, NONE, PLTRST, OFF, ACPI),
	PAD_CFG_GPO(GPP_J10, 1, PLTRST),
	PAD_CFG_GPO(GPP_J11, 1, PLTRST),
};

/* Early pad configuration in bootblock */
const struct pad_config early_gpio_table[] = {
	/* Get PCIe out of reset */
	PAD_CFG_GPO(GPP_K0, 1, DEEP),			/* PERST_PCH_SLOTS_n */
	PAD_CFG_GPO(GPP_K1, 1, DEEP),			/* PERST_CPU_SLOTS_n */
	PAD_CFG_GPO(GPP_K2, 1, DEEP),			/* PERST_CNVI_SLOTS_n */

	/* SMB */
	PAD_CFG_NF(GPP_C0, NONE, DEEP, NF1),		/* PCH_SMB_CLK */
	PAD_CFG_NF(GPP_C1, NONE, DEEP, NF1),		/* PCH_SMB_DATA */
	PAD_NC(GPP_C2, NONE),

	/* LED */
	PAD_CFG_GPO(GPP_H5, 0, DEEP),			/* PCH_HBLED_n */

	/* UART0 */
	PAD_CFG_NF(GPP_C8, NONE, DEEP, NF1),		/* UART0_RXD */
	PAD_CFG_NF(GPP_C9, NONE, DEEP, NF1),		/* UART0_TXD */

	/* UART1 */
	PAD_CFG_NF(GPP_C12, NONE, DEEP, NF1),		/* UART1_RXD */
	PAD_CFG_NF(GPP_C13, NONE, DEEP, NF1),		/* UART1_TXD */

	/* UART2 */
	PAD_CFG_NF(GPP_C20, NONE, DEEP, NF1),		/* UART2_RXD */
	PAD_CFG_NF(GPP_C21, NONE, DEEP, NF1),		/* UART2_TXD */
};

void program_early_gpio_pads(void);
void program_early_gpio_pads(void)
{
	gpio_configure_pads(early_gpio_table, ARRAY_SIZE(early_gpio_table));
}
#endif /* CFG_GPIO_H */
