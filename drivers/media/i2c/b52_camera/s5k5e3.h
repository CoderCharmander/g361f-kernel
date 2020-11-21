/* Marvell ISP S5K5E3 Driver
 *
 * Copyright (C) 2009-2014 Marvell International Ltd.
 *
 * Based on mt9v011 -Micron 1/4-Inch VGA Digital Image S5K5E3
 *
 * Copyright (c) 2009 Mauro Carvalho Chehab (mchehab@redhat.com)
 * This code is placed under the terms of the GNU General Public License v2
 */

#ifndef	B52_S5K5E3_H
#define	B52_S5K5E3_H

#include <media/b52-sensor.h>

struct regval_tab s5k5e3_res_init[] = {
	{0x0100, 0x00},
	{0x3000, 0x04},
	{0x3002, 0x03},
	{0x3003, 0x04},
	{0x3004, 0x05},
	{0x3005, 0x00},
	{0x3006, 0x10},
	{0x3007, 0x0A},
	{0x3008, 0x55},
	{0x3039, 0x00},
	{0x303A, 0x00},
	{0x303B, 0x00},
	{0x3009, 0x05},
	{0x300A, 0x55},
	{0x300B, 0x38},
	{0x300C, 0x10},
	{0x3012, 0x14},
	{0x3013, 0x00},
	{0x3014, 0x22},
	{0x300E, 0x79},
	{0x3010, 0x68},
	{0x3019, 0x03},
	{0x301A, 0x00},
	{0x301B, 0x06},
	{0x301C, 0x00},
	{0x301D, 0x22},
	{0x301E, 0x00},
	{0x301F, 0x10},
	{0x3020, 0x00},
	{0x3021, 0x00},
	{0x3022, 0x0A},
	{0x3023, 0x1E},
	{0x3024, 0x00},
	{0x3025, 0x00},
	{0x3026, 0x00},
	{0x3027, 0x00},
	{0x3028, 0x1A},
	{0x3015, 0x00},
	{0x3016, 0x84},
	{0x3017, 0x00},
	{0x3018, 0xA0},
	{0x302B, 0x10},
	{0x302C, 0x0A},
	{0x302D, 0x06},
	{0x302E, 0x05},
	{0x302F, 0x0E},
	{0x3030, 0x2F},
	{0x3031, 0x08},
	{0x3032, 0x05},
	{0x3033, 0x09},
	{0x3034, 0x05},
	{0x3035, 0x00},
	{0x3036, 0x00},
	{0x3037, 0x00},
	{0x3038, 0x00},
	{0x3088, 0x06},
	{0x308A, 0x08},
	{0x308C, 0x05},
	{0x308E, 0x07},
	{0x3090, 0x06},
	{0x3092, 0x08},
	{0x3094, 0x05},
	{0x3096, 0x21},
	{0x3055, 0x9E},
	{0x3099, 0x06},
	{0x3070, 0x10},
	{0x3085, 0x31},
	{0x3086, 0x01},
	{0x3064, 0x00},
	{0x3062, 0x08},
	{0x3061, 0x15},
	{0x307B, 0x20},
	{0x3068, 0x01},
	{0x3074, 0x00},
	{0x307D, 0x05},
	{0x3045, 0x01},
	{0x3046, 0x05},
	{0x3047, 0x78},
	{0x307F, 0xB1},
	{0x3098, 0x01},
	{0x305C, 0xF6},
	{0x3063, 0x2F},
	{0x3400, 0x01},
	{0x3235, 0x49},
	{0x3233, 0x00},
	{0x3234, 0x00},
	{0x3300, 0x0C},
	{0x3320, 0x02},
	{0x3203, 0x45},
	{0x3205, 0x4D},
	{0x320B, 0x40},
	{0x320C, 0x06},
	{0x320D, 0xC0},
	{0x3244, 0x00},
	{0x3245, 0x00},
	{0x3246, 0x01},
	{0x3247, 0x00},
	{0x3268, 0x88},
	{0x3269, 0x01},

	{0x0136, 0x1A},
	{0x0137, 0x00},
	{0x0305, 0x06},
	{0x0306, 0x00},
	{0x0307, 0xCC},
	{0x3C1F, 0x00},
	{0x0820, 0x03},
	{0x0821, 0x74},
	{0x3C1C, 0x58},
	{0x0114, 0x01},
	{0x0340, 0x07},
	{0x0341, 0xCE},
	{0x0342, 0x0B},
	{0x0343, 0x86},
	{0x0344, 0x00},
	{0x0345, 0x00},
	{0x0346, 0x00},
	{0x0347, 0x02},
	{0x0348, 0x0A},
	{0x0349, 0x0F},
	{0x034A, 0x07},
	{0x034B, 0x8D},
	{0x034C, 0x0A},
	{0x034D, 0x10},
	{0x034E, 0x07},
	{0x034F, 0x8C},
	{0x0900, 0x00},
	{0x0901, 0x00},
	{0x0383, 0x01},
	{0x0387, 0x01},
	{0x3941, 0x08},
	{0x3942, 0xA1},
	{0x3924, 0x56},
	{0x3925, 0x48},
	{0x3C31, 0x70},
	{0x3C32, 0x2B},
	{0x3C08, 0x7B},
	{0x3C09, 0x62},
	{0x0204, 0x00},
	{0x0205, 0x20},
	{0x0202, 0x02},
	{0x0203, 0x00},
	{0x0200, 0x04},
	{0x0201, 0x98},

};

struct regval_tab s5k5e3_fmt_raw10[] = {
};

struct regval_tab s5k5e3_res_5M[] = {
/*Global setting contains the 5M resolution setting
* FIXME: uncomment this setting is because ISP has problem when
* handle Samsung's sensor, seems Samsung's sensor has
* special handling when we set 5M resolutiong setting twice.
* So, we need special handling here.
*/
#if 0
	{0x0136, 0x1A},
	{0x0137, 0x00},
	{0x0305, 0x06},
	{0x0306, 0x00},
	{0x0307, 0xCC},
	{0x3C1F, 0x00},
	{0x0820, 0x03},
	{0x0821, 0x74},
	{0x3C1C, 0x58},
	{0x0114, 0x01},
	{0x0340, 0x07},
	{0x0341, 0xCE},
	{0x0342, 0x0B},
	{0x0343, 0x86},
	{0x0344, 0x00},
	{0x0345, 0x00},
	{0x0346, 0x00},
	{0x0347, 0x02},
	{0x0348, 0x0A},
	{0x0349, 0x0F},
	{0x034A, 0x07},
	{0x034B, 0x8D},
	{0x034C, 0x0A},
	{0x034D, 0x10},
	{0x034E, 0x07},
	{0x034F, 0x8C},
	{0x0900, 0x00},
	{0x0901, 0x00},
	{0x0383, 0x01},
	{0x0387, 0x01},
	{0x0204, 0x00},
	{0x0205, 0x20},
	{0x0202, 0x02},
	{0x0203, 0x00},
	{0x0200, 0x04},
	{0x0201, 0x98},
#endif
};


struct regval_tab s5k5e3_res_1M[] = {
/*	 {0x0100, 0x00},
	 {0x0305, 0x06},
	 {0x0306, 0x00},
	 {0x0307, 0xE0},
	 {0x3C1F, 0x00},
	 {0x0820, 0x03},
	 {0x0821, 0x80},
	 {0x3C1C, 0x58},
	 {0x0114, 0x01},
	 {0x0340, 0x03},
	 {0x0341, 0xF4},
	 {0x0342, 0x0B},
	 {0x0343, 0x86},
	 {0x0344, 0x00},
	 {0x0345, 0x08},
	 {0x0346, 0x00},
	 {0x0347, 0x08},
	 {0x0348, 0x0A},
	 {0x0349, 0x07},
	 {0x034A, 0x07},
	 {0x034B, 0x87},
	 {0x034C, 0x05},
	 {0x034D, 0x00},
	 {0x034E, 0x03},
	 {0x034F, 0xC0},
	 {0x0900, 0x01},
	 {0x0901, 0x22},
	 {0x0383, 0x01},
	 {0x0387, 0x03},
	 {0x0204, 0x00},
	 {0x0205, 0x20},
	 {0x0202, 0x02},
	 {0x0203, 0x00},
	 {0x0200, 0x04},
	 {0x0100, 0x01},*/
};


struct regval_tab s5k5e3_id[] = {
	{0x0000, 0x5e, 0xff},
	{0x0001, 0x30, 0xff},
};

struct regval_tab s5k5e3_vts[] = {
	{0x0340, 0x07, 0xff},
	{0x0341, 0xe9, 0xff},
};

struct regval_tab s5k5e3_expo[] = {
	{0x0202, 0x04, 0xff},
	{0x0203, 0xE2, 0xff},
};
struct regval_tab s5k5e3_frationalexp[] = {
	{0x0200, 0x00, 0xff},
	{0x0201, 0x00, 0xff},
};
struct regval_tab s5k5e3_ag[] = {
	{0x0204, 0x00, 0xff},
	{0x0205, 0xF0, 0xff},
};

struct regval_tab s5k5e3_af[] = {
};

struct regval_tab s5k5e3_stream_on[] = {
	{0x0100, 0x01, 0xff},
};

struct regval_tab s5k5e3_stream_off[] = {
	{0x0100, 0x00, 0xff},
};

struct regval_tab s5k5e3_vflip[] = {
	{0x0101, 0x02, 0x02},
};

struct regval_tab s5k5e3_hflip[] = {
	{0x0101, 0x01, 0x01},
};

struct b52_sensor_i2c_attr s5k5e3_i2c_attr[] = {
	[0] = {
		.reg_len = I2C_16BIT,
		.val_len = I2C_8BIT,
		.addr = 0x10,
	},
};
static struct b52_sensor_module s5k5e3_SSG = {
	.id = 0,
};

static int ev_bias_offset[] = {
      -0x35, -0x34, -0x33, -0x2C, -0x22, -0x0D, 0,
       0x16, 0x2c, 0x5F, 0x7a, 0x7B, 0x7c

};
#define N_S5K5E3_I2C_ATTR ARRAY_SIZE(s5k5e3_i2c_attr)
#define N_S5K5E3_INIT ARRAY_SIZE(s5k5e3_res_init)
#define N_S5K5E3_ID ARRAY_SIZE(s5k5e3_id)
#define N_S5K5E3_FMT_RAW10 ARRAY_SIZE(s5k5e3_fmt_raw10)
#define N_S5K5E3_5M ARRAY_SIZE(s5k5e3_res_5M)
#define N_S5K5E3_1M ARRAY_SIZE(s5k5e3_res_1M)
#define N_S5K5E3_VTS ARRAY_SIZE(s5k5e3_vts)
#define N_S5K5E3_EXPO ARRAY_SIZE(s5k5e3_expo)
#define N_S5K5E3_FRATIONALEXPO ARRAY_SIZE(s5k5e3_frationalexp)
#define N_S5K5E3_AG ARRAY_SIZE(s5k5e3_ag)
#define N_S5K5E3_AF ARRAY_SIZE(s5k5e3_af)
#define N_S5K5E3_STREAM_ON ARRAY_SIZE(s5k5e3_stream_on)
#define N_S5K5E3_STREAM_OFF ARRAY_SIZE(s5k5e3_stream_off)
#define N_S5K5E3_HFLIP ARRAY_SIZE(s5k5e3_hflip)
#define N_S5K5E3_VFLIP ARRAY_SIZE(s5k5e3_vflip)

struct b52_sensor_mbus_fmt s5k5e3_fmt = {
	.mbus_code	= V4L2_MBUS_FMT_SGBRG10_1X10,
	.colorspace	= V4L2_COLORSPACE_SRGB,
	.regs = {
		.tab = s5k5e3_fmt_raw10,
		.num = N_S5K5E3_FMT_RAW10,
	}
};
struct b52_sensor_resolution s5k5e3_res[] = {
	[0] = {
		 .width = 2576,
		 .height = 1932,
		 .hts = 0x0b86,
		 .min_vts = 0x07e9,
		 .prop = SENSOR_RES_BINING1,
		 .regs = {
			.tab = s5k5e3_res_5M,
			.num = N_S5K5E3_5M,
		},
	},
	[1] = {
		 .width = 1280,
		 .height = 960,
		 .hts = 0x0b86,
		 .min_vts = 0x07e9,
		 .prop = SENSOR_RES_BINING2,
		 .regs = {
			.tab = s5k5e3_res_1M,
			.num = N_S5K5E3_1M,
		},
	},
};

static int S5K5E3_get_pixelclock(struct v4l2_subdev *sd, u32 *rate, u32 mclk);
static int S5K5E3_get_dphy_desc(struct v4l2_subdev *sd,
				struct csi_dphy_desc *dphy_desc, u32 mclk);
static int S5K5E3_s_power(struct v4l2_subdev *sd, int on);

struct b52_sensor_spec_ops s5k5e3_ops = {
	.get_pixel_rate = S5K5E3_get_pixelclock,
	.get_dphy_desc = S5K5E3_get_dphy_desc,
	.s_power = S5K5E3_s_power,
};
struct b52_sensor_data b52_s5k5e3 = {
	.name = "ssa.s5k5e3",
	.type = SAMSUNG_ASNY_SENSOR,
	.i2c_attr = s5k5e3_i2c_attr,
	.num_i2c_attr = N_S5K5E3_I2C_ATTR,
	.id = {
		.tab = s5k5e3_id,
		.num = N_S5K5E3_ID,
	},
	.global_setting = {
		.tab = s5k5e3_res_init,
		.num = N_S5K5E3_INIT,
	},
	.mbus_fmt = &s5k5e3_fmt,
	.num_mbus_fmt = 1,
	.res = s5k5e3_res,
	.num_res = 2,
	.streamon = {
		.tab = s5k5e3_stream_on,
		.num = N_S5K5E3_STREAM_ON,
	},
	.streamoff = {
		.tab = s5k5e3_stream_off,
		.num = N_S5K5E3_STREAM_OFF,
	},
	.gain2iso_ratio = {
		.numerator = 100,
		.denominator = 0x10,
	},
	.vts_range = {0x07e9, 0x7fff},
	.gain_range = {
		[B52_SENSOR_AG] = {0x0010, 0x0100},
		[B52_SENSOR_DG] = {0x0010, 0x0010},
	},
	.expo_range = {0x0004, 0x07e0},
	.focus_range = {0x0000, 0x0000},
	.vts_reg = {
		.tab = s5k5e3_vts,
		.num = N_S5K5E3_VTS,
	},
	.expo_reg = {
		.tab = s5k5e3_expo,
		.num = N_S5K5E3_EXPO,
	},
	.frationalexp_reg = {
		.tab = s5k5e3_frationalexp,
		.num = N_S5K5E3_FRATIONALEXPO,
	},
	.gain_reg = {
		[B52_SENSOR_AG] = {
			.tab = s5k5e3_ag,
			.num = N_S5K5E3_AG,
		},
		[B52_SENSOR_DG] = {
			.tab = NULL,
			.num = 0,
		},
	},
	.af_reg = {
		.tab = s5k5e3_af,
		.num = N_S5K5E3_AF,
	},
	.hflip = {
		.tab = s5k5e3_hflip,
		.num = N_S5K5E3_HFLIP,
	},
	.vflip = {
		.tab = s5k5e3_vflip,
		.num = N_S5K5E3_VFLIP,
	},
	.ev_bias_offset = ev_bias_offset,
	.flip_change_phase =  1,
	/* A gain format is 8.5 */
	.gain_shift = 0x00,
	/* A expo format is 2 byte */
	.expo_shift = 0x08,
	.calc_dphy = 0,
	.nr_lane = 2,
	.ops = &s5k5e3_ops,
	.module = &s5k5e3_SSG,
	.mipi_clk_bps = 884000000,
	.reset_delay = 100,
};

#endif

