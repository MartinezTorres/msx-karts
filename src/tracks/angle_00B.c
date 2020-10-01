#include "angles_common.h"
const uint16_t angle_00B_single[4][32][8] = {
{{	 0x1F41,  0x1753,  0x11DC,  0x0E62,  0x0C67,  0x0A6A,  0x08EC,  0x07EE, },
{	 0x1F47,  0x16D7,  0x11DF,  0x0E65,  0x0BE9,  0x0A6C,  0x08EE,  0x07F0, },
{	 0x1F4D,  0x16DB,  0x1163,  0x0E68,  0x0BEB,  0x0A6E,  0x08F0,  0x07F2, },
{	 0x1F53,  0x165F,  0x1166,  0x0DEB,  0x0BEE,  0x09F0,  0x08F2,  0x07F3, },
{	 0x1EDA,  0x15E4,  0x10EA,  0x0DEE,  0x0B70,  0x09F2,  0x0874,  0x0775, },
{	 0x1E60,  0x15E8,  0x10ED,  0x0D70,  0x0B73,  0x09F4,  0x0876,  0x0776, },
{	 0x1DE6,  0x156D,  0x1071,  0x0D73,  0x0B74,  0x0976,  0x0877,  0x0778, },
{	 0x1DEA,  0x14F1,  0x1074,  0x0D76,  0x0AF7,  0x0978,  0x0879,  0x077A, },
{	 0x1D71,  0x14F5,  0x0FF7,  0x0CF9,  0x0AFA,  0x097A,  0x07FB,  0x06FC, },
{	 0x1CF7,  0x147A,  0x0FFB,  0x0CFC,  0x0A7C,  0x08FC,  0x07FD,  0x06FD, },
{	 0x1C7D,  0x13FF,  0x0F7F,  0x0C7F,  0x0A7F,  0x08FF,  0x07FF,  0x06FE, },
{	 0x1C03,  0x1402,  0x0F82,  0x0C81,  0x0A81,  0x0901,  0x0780,  0x0700, },
{	 0x1B8B,  0x1387,  0x0F05,  0x0C04,  0x0A03,  0x0883,  0x0782,  0x0682, },
{	 0x1B11,  0x130C,  0x0F08,  0x0C07,  0x0A06,  0x0885,  0x0784,  0x0684, },
{	 0x1A97,  0x1310,  0x0E8C,  0x0B8A,  0x0A08,  0x0887,  0x0786,  0x0685, },
{	 0x1A1D,  0x1295,  0x0E8E,  0x0B8D,  0x098A,  0x0809,  0x0708,  0x0687, },
{	 0x19A3,  0x1219,  0x0E13,  0x0B8F,  0x098D,  0x080B,  0x070A,  0x0608, },
{	 0x1929,  0x121D,  0x0E16,  0x0B12,  0x0910,  0x080D,  0x070C,  0x060A, },
{	 0x18AF,  0x11A1,  0x0D9A,  0x0B15,  0x0912,  0x0790,  0x068E,  0x060C, },
{	 0x1835,  0x1126,  0x0D1E,  0x0A98,  0x0914,  0x0791,  0x068F,  0x060E, },
{	 0x183A,  0x112A,  0x0D21,  0x0A9B,  0x0896,  0x0794,  0x0691,  0x058F, },
{	 0x17C0,  0x10AF,  0x0CA4,  0x0A1E,  0x0899,  0x0796,  0x0693,  0x0591, },
{	 0x1747,  0x1033,  0x0CA8,  0x0A20,  0x089B,  0x0718,  0x0615,  0x0592, },
{	 0x16CD,  0x1037,  0x0C2B,  0x0A23,  0x081E,  0x071A,  0x0616,  0x0594, },
{	 0x1653,  0x0FBB,  0x0C2F,  0x09A6,  0x0820,  0x071C,  0x0618,  0x0516, },
{	 0x15D9,  0x0F41,  0x0BB2,  0x09A9,  0x0822,  0x069E,  0x061A,  0x0518, },
{	 0x155F,  0x0F44,  0x0BB5,  0x092C,  0x07A5,  0x06A0,  0x059C,  0x0519, },
{	 0x14E5,  0x0EC9,  0x0B39,  0x092F,  0x07A7,  0x06A2,  0x059E,  0x051A, },
{	 0x146B,  0x0E4E,  0x0B3C,  0x08B2,  0x072A,  0x0624,  0x05A0,  0x049C, },
{	 0x13F1,  0x0E51,  0x0AC0,  0x08B4,  0x072C,  0x0626,  0x0522,  0x049E, },
{	 0x1378,  0x0DD6,  0x0AC3,  0x08B7,  0x072E,  0x0628,  0x0524,  0x04A0, },
{	 0x12FE,  0x0D5B,  0x0A47,  0x083A,  0x06B1,  0x05AA,  0x0525,  0x04A1, },
},{{	 0x0770,  0x0671,  0x05F2,  0x0573,  0x04F4,  0x0474,  0x0476,  0x03F6, },
{	 0x06F2,  0x0672,  0x05F4,  0x0574,  0x04F5,  0x0476,  0x03F6,  0x03F6, },
{	 0x06F3,  0x0674,  0x05F4,  0x0576,  0x04F6,  0x0476,  0x03F8,  0x03F8, },
{	 0x06F4,  0x0675,  0x0576,  0x04F6,  0x04F8,  0x0478,  0x03F8,  0x03F8, },
{	 0x06F6,  0x05F6,  0x0577,  0x04F8,  0x0478,  0x0478,  0x03F9,  0x037A, },
{	 0x0678,  0x05F8,  0x0578,  0x04F9,  0x047A,  0x047A,  0x03FA,  0x037A, },
{	 0x0679,  0x05FA,  0x057A,  0x04FA,  0x047A,  0x03FA,  0x03FB,  0x037C, },
{	 0x067A,  0x05FA,  0x057B,  0x04FC,  0x047C,  0x03FC,  0x03FC,  0x037C, },
{	 0x067C,  0x05FC,  0x04FC,  0x04FC,  0x047C,  0x03FC,  0x037D,  0x037D, },
{	 0x067D,  0x057E,  0x04FE,  0x047E,  0x047E,  0x03FE,  0x037E,  0x037E, },
{	 0x05FE,  0x057E,  0x04FE,  0x047E,  0x03FE,  0x03FE,  0x037E,  0x037E, },
{	 0x0600,  0x0580,  0x0500,  0x0480,  0x0400,  0x0400,  0x0380,  0x0300, },
{	 0x0602,  0x0582,  0x0502,  0x0481,  0x0401,  0x0380,  0x0380,  0x0300, },
{	 0x0603,  0x0503,  0x0482,  0x0482,  0x0402,  0x0382,  0x0382,  0x0302, },
{	 0x0584,  0x0504,  0x0484,  0x0404,  0x0403,  0x0383,  0x0382,  0x0302, },
{	 0x0586,  0x0506,  0x0485,  0x0404,  0x0404,  0x0384,  0x0304,  0x0304, },
{	 0x0588,  0x0507,  0x0486,  0x0406,  0x0386,  0x0385,  0x0304,  0x0304, },
{	 0x0589,  0x0508,  0x0488,  0x0407,  0x0386,  0x0386,  0x0306,  0x0305, },
{	 0x058A,  0x048A,  0x0488,  0x0408,  0x0388,  0x0386,  0x0306,  0x0306, },
{	 0x050C,  0x048B,  0x040A,  0x0409,  0x0388,  0x0308,  0x0308,  0x0287, },
{	 0x050E,  0x048C,  0x040C,  0x038A,  0x038A,  0x0309,  0x0308,  0x0288, },
{	 0x050F,  0x048E,  0x040C,  0x038C,  0x038A,  0x030A,  0x030A,  0x0288, },
{	 0x0510,  0x048F,  0x040E,  0x038C,  0x030C,  0x030B,  0x028A,  0x028A, },
{	 0x0492,  0x0410,  0x040F,  0x038E,  0x030D,  0x030C,  0x028B,  0x028A, },
{	 0x0494,  0x0412,  0x0390,  0x038F,  0x030E,  0x030D,  0x028C,  0x028C, },
{	 0x0495,  0x0413,  0x0392,  0x0390,  0x030F,  0x028E,  0x028D,  0x028C, },
{	 0x0496,  0x0414,  0x0393,  0x0312,  0x0310,  0x028F,  0x028E,  0x020D, },
{	 0x0498,  0x0416,  0x0394,  0x0312,  0x0311,  0x0290,  0x028F,  0x020E, },
{	 0x041A,  0x0397,  0x0396,  0x0314,  0x0292,  0x0291,  0x0290,  0x020F, },
{	 0x041B,  0x0398,  0x0316,  0x0315,  0x0294,  0x0292,  0x0211,  0x0210, },
{	 0x041C,  0x039A,  0x0318,  0x0316,  0x0294,  0x0293,  0x0212,  0x0210, },
{	 0x041E,  0x039C,  0x0319,  0x0298,  0x0296,  0x0294,  0x0212,  0x0212, },
},{{	 0x0376,  0x0376,  0x0378,  0x02F8,  0x02F8,  0x0278,  0x0278,  0x0278, },
{	 0x0378,  0x0378,  0x02F8,  0x02F8,  0x02F8,  0x0278,  0x0279,  0x027A, },
{	 0x0378,  0x0378,  0x02F8,  0x02F9,  0x02FA,  0x027A,  0x027A,  0x027A, },
{	 0x0379,  0x037A,  0x02FA,  0x02FA,  0x027A,  0x027A,  0x027A,  0x027A, },
{	 0x037A,  0x02FA,  0x02FA,  0x02FA,  0x027A,  0x027A,  0x027B,  0x01FC, },
{	 0x037A,  0x02FA,  0x02FB,  0x02FC,  0x027C,  0x027C,  0x027C,  0x01FC, },
{	 0x037C,  0x02FC,  0x02FC,  0x027C,  0x027C,  0x027C,  0x027C,  0x01FC, },
{	 0x037C,  0x02FC,  0x02FC,  0x027C,  0x027C,  0x027C,  0x01FD,  0x01FD, },
{	 0x02FD,  0x02FE,  0x02FE,  0x027E,  0x027E,  0x027E,  0x01FE,  0x01FE, },
{	 0x02FE,  0x02FE,  0x027E,  0x027E,  0x027E,  0x027E,  0x01FE,  0x01FE, },
{	 0x02FE,  0x02FE,  0x027E,  0x027E,  0x027E,  0x01FE,  0x01FE,  0x01FE, },
{	 0x0300,  0x0300,  0x0280,  0x0280,  0x0280,  0x0200,  0x0200,  0x0200, },
{	 0x0300,  0x0300,  0x0280,  0x0280,  0x0280,  0x0200,  0x0200,  0x0200, },
{	 0x0302,  0x0282,  0x0281,  0x0281,  0x0201,  0x0200,  0x0200,  0x0200, },
{	 0x0302,  0x0282,  0x0282,  0x0282,  0x0202,  0x0202,  0x0202,  0x0202, },
{	 0x0303,  0x0282,  0x0282,  0x0202,  0x0202,  0x0202,  0x0202,  0x0182, },
{	 0x0284,  0x0284,  0x0284,  0x0204,  0x0203,  0x0202,  0x0202,  0x0182, },
{	 0x0284,  0x0284,  0x0284,  0x0204,  0x0204,  0x0204,  0x0184,  0x0184, },
{	 0x0286,  0x0286,  0x0205,  0x0204,  0x0204,  0x0204,  0x0184,  0x0184, },
{	 0x0286,  0x0286,  0x0206,  0x0206,  0x0205,  0x0204,  0x0184,  0x0184, },
{	 0x0288,  0x0286,  0x0206,  0x0206,  0x0206,  0x0186,  0x0186,  0x0185, },
{	 0x0288,  0x0208,  0x0208,  0x0207,  0x0206,  0x0186,  0x0186,  0x0186, },
{	 0x0289,  0x0208,  0x0208,  0x0208,  0x0188,  0x0186,  0x0186,  0x0186, },
{	 0x020A,  0x020A,  0x0208,  0x0208,  0x0188,  0x0188,  0x0188,  0x0186, },
{	 0x020A,  0x020A,  0x020A,  0x018A,  0x0188,  0x0188,  0x0188,  0x0188, },
{	 0x020C,  0x020B,  0x020A,  0x018A,  0x018A,  0x0188,  0x0188,  0x0188, },
{	 0x020C,  0x020C,  0x018C,  0x018A,  0x018A,  0x018A,  0x0189,  0x0108, },
{	 0x020E,  0x020C,  0x018C,  0x018C,  0x018A,  0x018A,  0x018A,  0x010A, },
{	 0x020E,  0x020E,  0x018C,  0x018C,  0x018C,  0x018B,  0x010A,  0x010A, },
{	 0x020F,  0x018E,  0x018E,  0x018C,  0x018C,  0x018C,  0x010B,  0x010A, },
{	 0x0210,  0x018F,  0x018E,  0x018E,  0x018C,  0x010C,  0x010C,  0x010C, },
{	 0x0190,  0x0190,  0x018F,  0x018E,  0x010E,  0x010D,  0x010C,  0x010C, },
},{{	 0x0279,  0x01FA,  0x01FA,  0x01FA,  0x01FA,  0x01FA,  0x017A,  0x017A, },
{	 0x027A,  0x01FA,  0x01FA,  0x01FA,  0x01FA,  0x017A,  0x017A,  0x017A, },
{	 0x01FA,  0x01FA,  0x01FA,  0x01FA,  0x01FA,  0x017A,  0x017B,  0x017C, },
{	 0x01FA,  0x01FA,  0x01FB,  0x01FC,  0x017C,  0x017C,  0x017C,  0x017C, },
{	 0x01FC,  0x01FC,  0x01FC,  0x01FC,  0x017C,  0x017C,  0x017C,  0x017C, },
{	 0x01FC,  0x01FC,  0x01FC,  0x01FC,  0x017C,  0x017C,  0x017C,  0x017C, },
{	 0x01FC,  0x01FC,  0x01FC,  0x017C,  0x017C,  0x017C,  0x017D,  0x017D, },
{	 0x01FD,  0x01FE,  0x01FE,  0x017E,  0x017E,  0x017E,  0x017E,  0x017E, },
{	 0x01FE,  0x01FE,  0x017E,  0x017E,  0x017E,  0x017E,  0x017E,  0x017E, },
{	 0x01FE,  0x01FE,  0x017E,  0x017E,  0x017E,  0x017E,  0x017E,  0x017E, },
{	 0x01FE,  0x017E,  0x017E,  0x017E,  0x017E,  0x017E,  0x017E,  0x017E, },
{	 0x0200,  0x0180,  0x0180,  0x0180,  0x0180,  0x0180,  0x0180,  0x0100, },
{	 0x0200,  0x0180,  0x0180,  0x0180,  0x0180,  0x0180,  0x0100,  0x0100, },
{	 0x0180,  0x0180,  0x0180,  0x0180,  0x0180,  0x0180,  0x0100,  0x0100, },
{	 0x0182,  0x0182,  0x0181,  0x0181,  0x0181,  0x0100,  0x0100,  0x0100, },
{	 0x0182,  0x0182,  0x0182,  0x0182,  0x0182,  0x0102,  0x0102,  0x0102, },
{	 0x0182,  0x0182,  0x0182,  0x0182,  0x0102,  0x0102,  0x0102,  0x0102, },
{	 0x0183,  0x0182,  0x0182,  0x0182,  0x0102,  0x0102,  0x0102,  0x0102, },
{	 0x0184,  0x0184,  0x0184,  0x0104,  0x0103,  0x0102,  0x0102,  0x0102, },
{	 0x0184,  0x0184,  0x0184,  0x0104,  0x0104,  0x0104,  0x0104,  0x0104, },
{	 0x0184,  0x0184,  0x0104,  0x0104,  0x0104,  0x0104,  0x0104,  0x0104, },
{	 0x0186,  0x0186,  0x0105,  0x0104,  0x0104,  0x0104,  0x0104,  0x0104, },
{	 0x0186,  0x0106,  0x0106,  0x0106,  0x0105,  0x0104,  0x0104,  0x0104, },
{	 0x0186,  0x0106,  0x0106,  0x0106,  0x0106,  0x0106,  0x0106,  0x0105, },
{	 0x0108,  0x0106,  0x0106,  0x0106,  0x0106,  0x0106,  0x0106,  0x0106, },
{	 0x0108,  0x0108,  0x0108,  0x0106,  0x0106,  0x0106,  0x0106,  0x0086, },
{	 0x0108,  0x0108,  0x0108,  0x0108,  0x0108,  0x0106,  0x0086,  0x0086, },
{	 0x0109,  0x0108,  0x0108,  0x0108,  0x0108,  0x0108,  0x0088,  0x0086, },
{	 0x010A,  0x010A,  0x0108,  0x0108,  0x0108,  0x0088,  0x0088,  0x0088, },
{	 0x010A,  0x010A,  0x010A,  0x0109,  0x0088,  0x0088,  0x0088,  0x0088, },
{	 0x010A,  0x010A,  0x010A,  0x010A,  0x008A,  0x0088,  0x0088,  0x0088, },
{	 0x010C,  0x010A,  0x010A,  0x008A,  0x008A,  0x008A,  0x0089,  0x0088, },
},};
const uint16_t angle_00B_double[8][32][4] = {
{{	 0x017A,  0x017A,  0x017A,  0x00FB, },
{	 0x017A,  0x017B,  0x00FC,  0x00FC, },
{	 0x017C,  0x017C,  0x00FC,  0x00FC, },
{	 0x017C,  0x00FC,  0x00FC,  0x00FC, },
{	 0x017C,  0x00FC,  0x00FC,  0x00FC, },
{	 0x017C,  0x00FC,  0x00FC,  0x00FD, },
{	 0x017D,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x0100,  0x0100,  0x0100,  0x0100, },
{	 0x0100,  0x0100,  0x0100,  0x0100, },
{	 0x0100,  0x0100,  0x0100,  0x0080, },
{	 0x0100,  0x0100,  0x0100,  0x0080, },
{	 0x0102,  0x0101,  0x0100,  0x0080, },
{	 0x0102,  0x0102,  0x0082,  0x0082, },
{	 0x0102,  0x0102,  0x0082,  0x0082, },
{	 0x0102,  0x0102,  0x0082,  0x0082, },
{	 0x0103,  0x0082,  0x0082,  0x0082, },
{	 0x0104,  0x0084,  0x0082,  0x0082, },
{	 0x0104,  0x0084,  0x0084,  0x0084, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0086,  0x0084,  0x0084,  0x0084, },
{	 0x0086,  0x0086,  0x0085,  0x0084, },
{	 0x0086,  0x0086,  0x0086,  0x0085, },
{	 0x0086,  0x0086,  0x0086,  0x0086, },
{	 0x0087,  0x0086,  0x0086,  0x0086, },
{	 0x0088,  0x0087,  0x0086,  0x0086, },
{	 0x0088,  0x0088,  0x0087,  0x0086, },
{	 0x0088,  0x0088,  0x0088,  0x0007, },
},{{	 0x00FC,  0x00FC,  0x00FC,  0x00FC, },
{	 0x00FC,  0x00FC,  0x00FC,  0x007C, },
{	 0x00FC,  0x00FC,  0x00FC,  0x007C, },
{	 0x00FC,  0x00FC,  0x00FC,  0x007C, },
{	 0x00FC,  0x00FC,  0x00FC,  0x007D, },
{	 0x00FD,  0x00FE,  0x007E,  0x007E, },
{	 0x00FE,  0x00FE,  0x007E,  0x007E, },
{	 0x00FE,  0x007E,  0x007E,  0x007E, },
{	 0x00FE,  0x007E,  0x007E,  0x007E, },
{	 0x00FE,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0081,  0x0081,  0x0080,  0x0080, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0084,  0x0084,  0x0082,  0x0002, },
{	 0x0084,  0x0084,  0x0084,  0x0004, },
{	 0x0084,  0x0084,  0x0004,  0x0004, },
{	 0x0084,  0x0084,  0x0004,  0x0004, },
{	 0x0084,  0x0004,  0x0004,  0x0004, },
{	 0x0086,  0x0004,  0x0004,  0x0004, },
{	 0x0006,  0x0006,  0x0005,  0x0004, },
{	 0x0006,  0x0006,  0x0006,  0x0005, },
{	 0x0006,  0x0006,  0x0006,  0x0006, },
{	 0x0006,  0x0006,  0x0006,  0x0006, },
},{{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007D, },
{	 0x007D,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0000, },
{	 0x0080,  0x0080,  0x0080,  0x0000, },
{	 0x0080,  0x0080,  0x0000,  0x0000, },
{	 0x0081,  0x0081,  0x0000,  0x0000, },
{	 0x0082,  0x0002,  0x0002,  0x0002, },
{	 0x0082,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0004,  0x0004,  0x0002,  0x0002, },
{	 0x0004,  0x0004,  0x0004,  0x0003, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0005,  0x0004,  0x0004,  0x0004, },
{	 0x0006,  0x0006,  0x0004,  0x0004, },
},{{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007D, },
{	 0x007D,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0xFFFE, },
{	 0x007E,  0x007E,  0x007E,  0xFFFE, },
{	 0x007E,  0x007E,  0xFFFE,  0xFFFE, },
{	 0x007E,  0x007E,  0xFFFE,  0xFFFE, },
{	 0x007E,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0x007E,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0x0080,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0x0001,  0x0000,  0x0000, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0004,  0x0003,  0x0002,  0x0002, },
{	 0x0004,  0x0004,  0x0004,  0x0003, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
},{{	 0x007C,  0x007C,  0xFFFC,  0xFFFC, },
{	 0x007C,  0xFFFC,  0xFFFC,  0xFFFD, },
{	 0x007D,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0x0001,  0x0000,  0x0000, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0xFF82, },
{	 0x0004,  0x0003,  0x0002,  0xFF82, },
{	 0x0004,  0x0004,  0xFF84,  0xFF83, },
{	 0x0004,  0xFF84,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
},{{	 0xFFFC,  0xFFFC,  0xFFFC,  0xFFFD, },
{	 0xFFFD,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0x0001,  0x0000,  0x0000, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0xFF82, },
{	 0x0002,  0x0002,  0x0002,  0xFF82, },
{	 0x0002,  0x0002,  0xFF82,  0xFF82, },
{	 0x0002,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF84,  0xFF83,  0xFF82,  0xFF82, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF83, },
},{{	 0xFFFD,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0000,  0x0000,  0xFF80,  0xFF80, },
{	 0x0000,  0x0000,  0xFF80,  0xFF80, },
{	 0x0000,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF81,  0xFF81,  0xFF80,  0xFF80, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF81, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
},{{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0000,  0x0000,  0xFF80,  0xFF80, },
{	 0x0000,  0x0000,  0xFF80,  0xFF80, },
{	 0x0000,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF81,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF81, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
},};
