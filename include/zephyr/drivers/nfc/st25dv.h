/*
 * Copyright (c) 2023 - 2026 Telink Semiconductor
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __ST25DV_H_
#define __ST25DV_H_

#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/types.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/drivers/i2c.h>
#include "nfc_tag.h"

#define ST25DV_USER_MEMORY_ADDR 0x53
#define ST25DV_SYSTEM_AREA_ADDR 0x57

struct st25dvxxkc_data {
	const struct device *dev_i2c;
	nfc_tag_cb_t nfc_tag_cb;
	enum nfc_tag_type tag_type;
};

#endif /* __ST25DV_H_ */
