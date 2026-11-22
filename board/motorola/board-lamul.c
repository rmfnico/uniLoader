// SPDX-License-Identifier: GPL-2.0

#include <board.h>
#include <util.h>
#include <drivers/framework.h>
#include <lib/simplefb.h>

static struct video_info lamul_fb = {
        .format = FB_FORMAT_ARGB8888,
        .width = 736,
        .height = 1604,
        .stride = 4,
        .scale = 2,
        .address = (void *)0x78200000
};

static const struct device lamul_devices[] = {
        { "simplefb", &lamul_fb, "fb" },
};

struct board_data board_ops = {
        .name = "motorola-lamul",
        .devices = lamul_devices,
        .num_devices = ARRAY_SIZE(lamul_devices),
        .quirks = 0
};
