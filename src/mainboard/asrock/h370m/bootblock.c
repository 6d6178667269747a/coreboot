/* SPDX-License-Identifier: GPL-2.0-only */

#include <bootblock_common.h>
#include <soc/gpio.h>
#include <superio/nuvoton/common/nuvoton.h>
#include <superio/nuvoton/nct5539d/nct5539d.h>

#include "include/gpio.h"

static void early_config_superio(void)
{
	const pnp_devfn_t serial_dev = PNP_DEV(0x2e, NCT5539D_SP1);
	nuvoton_enable_serial(serial_dev, CONFIG_TTYS0_BASE);
}

void bootblock_mainboard_early_init(void)
{
	early_config_superio();
	program_early_gpio_pads();
}
