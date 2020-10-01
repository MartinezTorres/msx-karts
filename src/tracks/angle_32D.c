#include "angles_common.h"
const uint16_t angle_32D_single[4][32][8] = {
{{	 0x1F5D,  0x1967,  0x13EC,  0x106F,  0x0D72,  0x0BF4,  0x0A75,  0x0976, },
{	 0x1F63,  0x18EB,  0x136F,  0x0FF2,  0x0D74,  0x0B76,  0x09F6,  0x08F8, },
{	 0x1F69,  0x186F,  0x12F2,  0x0F74,  0x0CF6,  0x0B77,  0x09F8,  0x08F9, },
{	 0x1F6D,  0x17F3,  0x1276,  0x0F76,  0x0CF8,  0x0AF9,  0x097A,  0x087A, },
{	 0x1F73,  0x1777,  0x1278,  0x0EFA,  0x0C7A,  0x0AFB,  0x097C,  0x087C, },
{	 0x1F79,  0x16FB,  0x11FC,  0x0E7C,  0x0C7C,  0x0A7D,  0x097D,  0x07FE, },
{	 0x1F7F,  0x167F,  0x117F,  0x0DFF,  0x0BFF,  0x0A7F,  0x08FF,  0x07FF, },
{	 0x1E85,  0x1603,  0x1102,  0x0E02,  0x0B82,  0x0A01,  0x0900,  0x0800, },
{	 0x1E09,  0x1587,  0x1085,  0x0D84,  0x0B83,  0x0A02,  0x0882,  0x0782, },
{	 0x1D10,  0x150B,  0x1008,  0x0D07,  0x0B06,  0x0985,  0x0884,  0x0784, },
{	 0x1C95,  0x148E,  0x0F8C,  0x0D09,  0x0B08,  0x0986,  0x0806,  0x0784, },
{	 0x1B9B,  0x1412,  0x0F8E,  0x0C8C,  0x0A8A,  0x0908,  0x0808,  0x0706, },
{	 0x1B20,  0x1317,  0x0F12,  0x0C0F,  0x0A0C,  0x090A,  0x078A,  0x0708, },
{	 0x1A27,  0x129B,  0x0E95,  0x0C10,  0x0A0E,  0x088C,  0x078B,  0x068A, },
{	 0x19AB,  0x121F,  0x0E18,  0x0B94,  0x0991,  0x088E,  0x078C,  0x068B, },
{	 0x18B1,  0x11A3,  0x0D9B,  0x0B16,  0x0992,  0x0810,  0x070E,  0x060C, },
{	 0x1837,  0x1127,  0x0D1F,  0x0A99,  0x0915,  0x0812,  0x0710,  0x060E, },
{	 0x173D,  0x10AB,  0x0CA2,  0x0A9C,  0x0898,  0x0794,  0x0692,  0x0610, },
{	 0x16C0,  0x102F,  0x0CA5,  0x0A1E,  0x089A,  0x0796,  0x0693,  0x0591, },
{	 0x15C8,  0x0FB3,  0x0C28,  0x09A1,  0x081C,  0x0718,  0x0615,  0x0592, },
{	 0x154C,  0x0F37,  0x0BAB,  0x09A3,  0x081E,  0x069A,  0x0617,  0x0514, },
{	 0x1453,  0x0EBB,  0x0B2E,  0x0926,  0x07A0,  0x069C,  0x0598,  0x0516, },
{	 0x135A,  0x0E3E,  0x0AB2,  0x08A9,  0x07A2,  0x061E,  0x059A,  0x0517, },
{	 0x12DF,  0x0DC2,  0x0A35,  0x08AB,  0x0724,  0x0620,  0x051C,  0x0499, },
{	 0x1262,  0x0CC8,  0x0A38,  0x082E,  0x06A7,  0x05A2,  0x051E,  0x049A, },
{	 0x1169,  0x0C4C,  0x09BB,  0x07B0,  0x06A9,  0x05A4,  0x04A0,  0x041C, },
{	 0x10EE,  0x0BD0,  0x093E,  0x07B2,  0x062B,  0x0526,  0x04A1,  0x041E, },
{	 0x0FF5,  0x0B54,  0x08C1,  0x0736,  0x062D,  0x0527,  0x04A2,  0x041E, },
{	 0x0EFC,  0x0AD8,  0x0845,  0x06B8,  0x05B0,  0x04AA,  0x0424,  0x03A0, },
{	 0x0E7E,  0x0A5C,  0x07C8,  0x063B,  0x0532,  0x04AB,  0x0426,  0x03A2, },
{	 0x0DFE,  0x09E0,  0x07CA,  0x063D,  0x0534,  0x042D,  0x03A8,  0x0324, },
{	 0x0CFE,  0x0964,  0x074E,  0x05C0,  0x04B6,  0x042F,  0x03A9,  0x0325, },
},{{	 0x0877,  0x0778,  0x06F8,  0x0678,  0x05F9,  0x057A,  0x04FA,  0x04FA, },
{	 0x07F8,  0x0778,  0x06FA,  0x05FA,  0x05FA,  0x057A,  0x04FA,  0x047B, },
{	 0x07FA,  0x06FA,  0x067A,  0x05FA,  0x057B,  0x04FC,  0x04FC,  0x047C, },
{	 0x07FA,  0x06FC,  0x067C,  0x05FC,  0x057C,  0x04FC,  0x04FC,  0x047C, },
{	 0x077C,  0x06FC,  0x067C,  0x05FD,  0x057D,  0x04FE,  0x047E,  0x047E, },
{	 0x077E,  0x067E,  0x05FE,  0x057E,  0x04FE,  0x04FE,  0x047E,  0x047E, },
{	 0x06FF,  0x067F,  0x05FF,  0x057F,  0x04FF,  0x047F,  0x047F,  0x03FF, },
{	 0x0700,  0x0680,  0x0600,  0x0580,  0x0500,  0x0480,  0x0480,  0x0400, },
{	 0x0702,  0x0602,  0x0582,  0x0502,  0x0501,  0x0481,  0x0400,  0x0400, },
{	 0x0683,  0x0603,  0x0582,  0x0502,  0x0482,  0x0482,  0x0402,  0x0402, },
{	 0x0684,  0x0604,  0x0584,  0x0504,  0x0483,  0x0402,  0x0402,  0x0382, },
{	 0x0686,  0x0586,  0x0505,  0x0504,  0x0484,  0x0404,  0x0404,  0x0384, },
{	 0x0607,  0x0586,  0x0506,  0x0486,  0x0485,  0x0404,  0x0384,  0x0384, },
{	 0x0608,  0x0588,  0x0507,  0x0486,  0x0406,  0x0406,  0x0386,  0x0385, },
{	 0x060A,  0x0509,  0x0508,  0x0488,  0x0407,  0x0386,  0x0386,  0x0386, },
{	 0x058C,  0x050A,  0x048A,  0x0408,  0x0408,  0x0388,  0x0387,  0x0306, },
{	 0x058D,  0x050C,  0x048A,  0x040A,  0x0409,  0x0388,  0x0388,  0x0308, },
{	 0x050E,  0x048D,  0x048C,  0x040B,  0x038A,  0x038A,  0x0308,  0x0308, },
{	 0x0510,  0x048E,  0x040D,  0x040C,  0x038B,  0x030A,  0x030A,  0x0309, },
{	 0x0511,  0x0490,  0x040E,  0x038D,  0x038C,  0x030C,  0x030A,  0x028A, },
{	 0x0492,  0x0410,  0x040F,  0x038E,  0x030D,  0x030C,  0x030C,  0x028A, },
{	 0x0494,  0x0412,  0x0390,  0x038F,  0x030E,  0x030D,  0x028C,  0x028C, },
{	 0x0495,  0x0413,  0x0392,  0x0310,  0x030F,  0x030E,  0x028D,  0x028C, },
{	 0x0416,  0x0394,  0x0392,  0x0312,  0x0310,  0x028F,  0x028E,  0x028D, },
{	 0x0418,  0x0396,  0x0314,  0x0312,  0x0291,  0x0290,  0x028E,  0x020E, },
{	 0x039A,  0x0397,  0x0315,  0x0314,  0x0292,  0x0290,  0x0210,  0x020E, },
{	 0x039A,  0x0318,  0x0316,  0x0294,  0x0293,  0x0292,  0x0210,  0x0210, },
{	 0x039C,  0x031A,  0x0298,  0x0296,  0x0294,  0x0212,  0x0212,  0x0210, },
{	 0x031E,  0x031A,  0x0298,  0x0296,  0x0215,  0x0214,  0x0212,  0x0192, },
{	 0x031E,  0x029C,  0x029A,  0x0218,  0x0216,  0x0214,  0x0194,  0x0192, },
{	 0x0320,  0x029D,  0x029A,  0x0218,  0x0217,  0x0216,  0x0194,  0x0193, },
{	 0x02A2,  0x029E,  0x021C,  0x021A,  0x0218,  0x0196,  0x0195,  0x0194, },
},{{	 0x047A,  0x047A,  0x03FA,  0x03FB,  0x037C,  0x037C,  0x037C,  0x02FC, },
{	 0x047C,  0x03FC,  0x03FC,  0x037C,  0x037C,  0x037C,  0x02FC,  0x02FC, },
{	 0x047C,  0x03FC,  0x03FC,  0x037C,  0x037C,  0x037C,  0x02FC,  0x02FC, },
{	 0x03FC,  0x03FC,  0x037D,  0x037D,  0x037E,  0x02FE,  0x02FE,  0x02FE, },
{	 0x03FE,  0x03FE,  0x037E,  0x037E,  0x037E,  0x02FE,  0x02FE,  0x02FE, },
{	 0x03FE,  0x03FE,  0x037E,  0x037E,  0x02FE,  0x02FE,  0x02FE,  0x02FE, },
{	 0x03FF,  0x037F,  0x037F,  0x037F,  0x02FF,  0x02FF,  0x02FF,  0x027F, },
{	 0x0400,  0x0380,  0x0380,  0x0300,  0x0300,  0x0300,  0x0280,  0x0280, },
{	 0x0380,  0x0380,  0x0380,  0x0300,  0x0300,  0x0300,  0x0280,  0x0280, },
{	 0x0382,  0x0382,  0x0302,  0x0301,  0x0301,  0x0281,  0x0280,  0x0280, },
{	 0x0382,  0x0382,  0x0302,  0x0302,  0x0302,  0x0282,  0x0282,  0x0282, },
{	 0x0383,  0x0302,  0x0302,  0x0302,  0x0282,  0x0282,  0x0282,  0x0282, },
{	 0x0384,  0x0304,  0x0304,  0x0284,  0x0283,  0x0282,  0x0282,  0x0202, },
{	 0x0304,  0x0304,  0x0304,  0x0284,  0x0284,  0x0284,  0x0204,  0x0203, },
{	 0x0306,  0x0305,  0x0284,  0x0284,  0x0284,  0x0284,  0x0204,  0x0204, },
{	 0x0306,  0x0306,  0x0286,  0x0286,  0x0284,  0x0204,  0x0204,  0x0204, },
{	 0x0307,  0x0286,  0x0286,  0x0286,  0x0206,  0x0206,  0x0205,  0x0204, },
{	 0x0288,  0x0288,  0x0286,  0x0286,  0x0206,  0x0206,  0x0206,  0x0206, },
{	 0x0288,  0x0288,  0x0288,  0x0208,  0x0206,  0x0206,  0x0206,  0x0206, },
{	 0x028A,  0x0288,  0x0208,  0x0208,  0x0208,  0x0207,  0x0206,  0x0186, },
{	 0x028A,  0x028A,  0x0209,  0x0208,  0x0208,  0x0208,  0x0188,  0x0187, },
{	 0x028A,  0x020A,  0x020A,  0x020A,  0x0208,  0x0188,  0x0188,  0x0188, },
{	 0x020C,  0x020B,  0x020A,  0x020A,  0x018A,  0x0189,  0x0188,  0x0188, },
{	 0x020C,  0x020C,  0x020B,  0x018A,  0x018A,  0x018A,  0x018A,  0x0188, },
{	 0x020D,  0x020C,  0x020C,  0x018C,  0x018A,  0x018A,  0x018A,  0x018A, },
{	 0x020E,  0x020E,  0x018C,  0x018C,  0x018C,  0x018A,  0x018A,  0x010A, },
{	 0x020E,  0x018E,  0x018E,  0x018C,  0x018C,  0x018C,  0x010B,  0x010A, },
{	 0x0190,  0x018E,  0x018E,  0x018E,  0x018C,  0x010C,  0x010C,  0x010B, },
{	 0x0190,  0x0190,  0x018E,  0x018E,  0x010E,  0x010C,  0x010C,  0x010C, },
{	 0x0191,  0x0190,  0x0190,  0x010E,  0x010E,  0x010E,  0x010C,  0x010C, },
{	 0x0192,  0x0190,  0x0110,  0x0110,  0x010E,  0x010E,  0x010E,  0x010C, },
{	 0x0192,  0x0112,  0x0110,  0x0110,  0x0110,  0x010E,  0x010E,  0x010E, },
},{{	 0x02FC,  0x02FC,  0x027C,  0x027C,  0x027C,  0x027C,  0x027C,  0x027C, },
{	 0x02FC,  0x02FC,  0x027C,  0x027C,  0x027C,  0x027C,  0x027C,  0x01FD, },
{	 0x02FC,  0x027D,  0x027D,  0x027E,  0x027E,  0x027E,  0x01FE,  0x01FE, },
{	 0x02FE,  0x027E,  0x027E,  0x027E,  0x027E,  0x01FE,  0x01FE,  0x01FE, },
{	 0x027E,  0x027E,  0x027E,  0x027E,  0x027E,  0x01FE,  0x01FE,  0x01FE, },
{	 0x027E,  0x027E,  0x027E,  0x027E,  0x01FE,  0x01FE,  0x01FE,  0x01FE, },
{	 0x027F,  0x027F,  0x027F,  0x0200,  0x01FF,  0x0200,  0x0200,  0x0200, },
{	 0x0280,  0x0280,  0x0280,  0x0200,  0x0200,  0x0200,  0x0200,  0x0200, },
{	 0x0280,  0x0280,  0x0200,  0x0200,  0x0200,  0x0200,  0x0200,  0x0200, },
{	 0x0280,  0x0200,  0x0200,  0x0200,  0x0200,  0x0200,  0x0200,  0x0180, },
{	 0x0282,  0x0202,  0x0202,  0x0201,  0x0201,  0x0201,  0x0180,  0x0180, },
{	 0x0202,  0x0202,  0x0202,  0x0202,  0x0202,  0x0202,  0x0182,  0x0182, },
{	 0x0202,  0x0202,  0x0202,  0x0202,  0x0202,  0x0182,  0x0182,  0x0182, },
{	 0x0203,  0x0202,  0x0202,  0x0202,  0x0182,  0x0182,  0x0182,  0x0182, },
{	 0x0204,  0x0204,  0x0204,  0x0183,  0x0182,  0x0182,  0x0182,  0x0182, },
{	 0x0204,  0x0204,  0x0184,  0x0184,  0x0184,  0x0184,  0x0184,  0x0183, },
{	 0x0204,  0x0184,  0x0184,  0x0184,  0x0184,  0x0184,  0x0184,  0x0184, },
{	 0x0186,  0x0184,  0x0184,  0x0184,  0x0184,  0x0184,  0x0184,  0x0184, },
{	 0x0186,  0x0186,  0x0186,  0x0185,  0x0184,  0x0184,  0x0184,  0x0104, },
{	 0x0186,  0x0186,  0x0186,  0x0186,  0x0186,  0x0185,  0x0104,  0x0104, },
{	 0x0186,  0x0186,  0x0186,  0x0186,  0x0186,  0x0106,  0x0106,  0x0106, },
{	 0x0188,  0x0187,  0x0186,  0x0186,  0x0106,  0x0106,  0x0106,  0x0106, },
{	 0x0188,  0x0188,  0x0108,  0x0107,  0x0106,  0x0106,  0x0106,  0x0106, },
{	 0x0188,  0x0108,  0x0108,  0x0108,  0x0108,  0x0107,  0x0106,  0x0106, },
{	 0x0109,  0x0108,  0x0108,  0x0108,  0x0108,  0x0108,  0x0108,  0x0106, },
{	 0x010A,  0x010A,  0x0108,  0x0108,  0x0108,  0x0108,  0x0108,  0x0108, },
{	 0x010A,  0x010A,  0x010A,  0x0109,  0x0108,  0x0108,  0x0108,  0x0088, },
{	 0x010A,  0x010A,  0x010A,  0x010A,  0x0109,  0x0108,  0x0088,  0x0088, },
{	 0x010C,  0x010A,  0x010A,  0x010A,  0x008A,  0x008A,  0x0088,  0x0088, },
{	 0x010C,  0x010C,  0x010A,  0x008A,  0x008A,  0x008A,  0x008A,  0x0089, },
{	 0x010C,  0x008C,  0x008C,  0x008A,  0x008A,  0x008A,  0x008A,  0x008A, },
{	 0x008C,  0x008C,  0x008C,  0x008C,  0x008B,  0x008A,  0x008A,  0x008A, },
},};
const uint16_t angle_32D_double[8][32][4] = {
{{	 0x01FC,  0x01FC,  0x01FC,  0x017D, },
{	 0x01FD,  0x01FE,  0x01FE,  0x017E, },
{	 0x01FE,  0x01FE,  0x017E,  0x017E, },
{	 0x01FE,  0x01FE,  0x017E,  0x017E, },
{	 0x01FE,  0x01FE,  0x017E,  0x017E, },
{	 0x01FE,  0x017E,  0x017E,  0x017E, },
{	 0x0200,  0x0180,  0x0180,  0x0180, },
{	 0x0180,  0x0180,  0x0180,  0x0180, },
{	 0x0180,  0x0180,  0x0180,  0x0180, },
{	 0x0180,  0x0180,  0x0180,  0x0180, },
{	 0x0180,  0x0180,  0x0180,  0x0180, },
{	 0x0182,  0x0181,  0x0181,  0x0100, },
{	 0x0182,  0x0182,  0x0182,  0x0102, },
{	 0x0182,  0x0182,  0x0102,  0x0102, },
{	 0x0182,  0x0102,  0x0102,  0x0102, },
{	 0x0182,  0x0102,  0x0102,  0x0102, },
{	 0x0104,  0x0103,  0x0102,  0x0102, },
{	 0x0104,  0x0104,  0x0104,  0x0103, },
{	 0x0104,  0x0104,  0x0104,  0x0104, },
{	 0x0104,  0x0104,  0x0104,  0x0104, },
{	 0x0104,  0x0104,  0x0104,  0x0104, },
{	 0x0106,  0x0105,  0x0104,  0x0084, },
{	 0x0106,  0x0106,  0x0105,  0x0084, },
{	 0x0106,  0x0106,  0x0086,  0x0086, },
{	 0x0106,  0x0086,  0x0086,  0x0086, },
{	 0x0086,  0x0086,  0x0086,  0x0086, },
{	 0x0088,  0x0087,  0x0086,  0x0086, },
{	 0x0088,  0x0088,  0x0086,  0x0086, },
{	 0x0088,  0x0088,  0x0088,  0x0086, },
{	 0x0088,  0x0088,  0x0088,  0x0088, },
{	 0x008A,  0x0088,  0x0088,  0x0088, },
{	 0x008A,  0x0088,  0x0088,  0x0088, },
},{{	 0x017D,  0x017E,  0x017E,  0x017E, },
{	 0x017E,  0x017E,  0x017E,  0x017E, },
{	 0x017E,  0x017E,  0x017E,  0x017E, },
{	 0x017E,  0x017E,  0x017E,  0x00FE, },
{	 0x017E,  0x017E,  0x017E,  0x00FE, },
{	 0x017E,  0x017E,  0x00FE,  0x00FE, },
{	 0x0180,  0x0180,  0x0100,  0x0100, },
{	 0x0180,  0x0100,  0x0100,  0x0100, },
{	 0x0180,  0x0100,  0x0100,  0x0100, },
{	 0x0100,  0x0100,  0x0100,  0x0100, },
{	 0x0100,  0x0100,  0x0100,  0x0100, },
{	 0x0100,  0x0100,  0x0100,  0x0100, },
{	 0x0102,  0x0101,  0x0101,  0x0100, },
{	 0x0102,  0x0102,  0x0102,  0x0102, },
{	 0x0102,  0x0102,  0x0102,  0x0102, },
{	 0x0102,  0x0102,  0x0102,  0x0102, },
{	 0x0102,  0x0102,  0x0102,  0x0082, },
{	 0x0102,  0x0102,  0x0082,  0x0082, },
{	 0x0104,  0x0103,  0x0082,  0x0082, },
{	 0x0104,  0x0084,  0x0084,  0x0083, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0086,  0x0084,  0x0084,  0x0084, },
{	 0x0086,  0x0086,  0x0085,  0x0084, },
{	 0x0086,  0x0086,  0x0086,  0x0085, },
{	 0x0086,  0x0086,  0x0086,  0x0086, },
{	 0x0086,  0x0086,  0x0086,  0x0086, },
{	 0x0086,  0x0086,  0x0006,  0x0006, },
{	 0x0088,  0x0006,  0x0006,  0x0006, },
{	 0x0008,  0x0008,  0x0006,  0x0006, },
},{{	 0x017E,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x0100,  0x0100,  0x0100,  0x0100, },
{	 0x0100,  0x0100,  0x0100,  0x0100, },
{	 0x0100,  0x0100,  0x0100,  0x0100, },
{	 0x0100,  0x0100,  0x0100,  0x0100, },
{	 0x0100,  0x0100,  0x0100,  0x0100, },
{	 0x0100,  0x0100,  0x0100,  0x0080, },
{	 0x0100,  0x0100,  0x0080,  0x0080, },
{	 0x0102,  0x0081,  0x0081,  0x0080, },
{	 0x0102,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0084,  0x0082,  0x0082,  0x0082, },
{	 0x0084,  0x0084,  0x0084,  0x0082, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0084,  0x0084,  0x0084,  0x0004, },
{	 0x0084,  0x0084,  0x0004,  0x0004, },
{	 0x0086,  0x0004,  0x0004,  0x0004, },
{	 0x0006,  0x0006,  0x0004,  0x0004, },
{	 0x0006,  0x0006,  0x0006,  0x0005, },
{	 0x0006,  0x0006,  0x0006,  0x0006, },
{	 0x0006,  0x0006,  0x0006,  0x0006, },
},{{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x007E, },
{	 0x0100,  0x0100,  0x0100,  0x0080, },
{	 0x0100,  0x0100,  0x0080,  0x0080, },
{	 0x0100,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0082,  0x0081,  0x0081,  0x0080, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0083,  0x0082,  0x0082,  0x0002, },
{	 0x0084,  0x0084,  0x0003,  0x0002, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0005,  0x0004,  0x0004,  0x0004, },
{	 0x0006,  0x0006,  0x0004,  0x0004, },
},{{	 0x00FE,  0x00FE,  0x00FE,  0x007E, },
{	 0x00FE,  0x00FE,  0x007E,  0x007E, },
{	 0x00FE,  0x00FE,  0x007E,  0x007E, },
{	 0x00FE,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0082,  0x0081,  0x0081,  0x0080, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0002, },
{	 0x0082,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0003,  0x0002,  0x0002,  0x0002, },
{	 0x0004,  0x0004,  0x0003,  0x0002, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
},{{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0000, },
{	 0x0082,  0x0081,  0x0000,  0x0000, },
{	 0x0082,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0003,  0x0002,  0x0002,  0x0002, },
{	 0x0004,  0x0004,  0x0003,  0x0002, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
},{{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0000, },
{	 0x0080,  0x0080,  0x0000,  0x0000, },
{	 0x0080,  0x0000,  0x0000,  0x0000, },
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
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0004,  0x0004,  0x0002,  0x0002, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
},{{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0000, },
{	 0x0080,  0x0000,  0x0000,  0x0000, },
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
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0004,  0x0003,  0x0002,  0x0002, },
},};
