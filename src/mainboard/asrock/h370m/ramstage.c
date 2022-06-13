/* SPDX-License-Identifier: GPL-2.0-only */

//#define USE_ASROCK_HERMES_GPIO

#include <soc/ramstage.h>
#include "include/gpio.h"

void mainboard_silicon_init_params(FSPS_UPD *params)
{
	gpio_configure_pads(gpio_table, ARRAY_SIZE(gpio_table));
}
