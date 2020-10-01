#include "angles_common.h"
const uint16_t angle_20A_single[4][32][8] = {
{{	 0x1F35,  0x1649,  0x1155,  0x0DDD,  0x0BE2,  0x09E6,  0x08E9,  0x07EB, },
{	 0x1EBB,  0x164D,  0x1158,  0x0DE0,  0x0BE4,  0x09E8,  0x08EB,  0x07ED, },
{	 0x1EC1,  0x15D3,  0x10DC,  0x0DE2,  0x0B67,  0x09EA,  0x08EC,  0x07EE, },
{	 0x1E47,  0x15D7,  0x10E0,  0x0D66,  0x0B69,  0x09EC,  0x086E,  0x0770, },
{	 0x1E4D,  0x155B,  0x10E2,  0x0D68,  0x0B6C,  0x09EE,  0x0870,  0x0772, },
{	 0x1DD3,  0x1560,  0x1067,  0x0D6B,  0x0B6E,  0x0970,  0x0872,  0x0774, },
{	 0x1D5B,  0x14E5,  0x106A,  0x0D6E,  0x0AF1,  0x0972,  0x0874,  0x0775, },
{	 0x1D61,  0x14E9,  0x0FEE,  0x0CF1,  0x0AF3,  0x0975,  0x0876,  0x0777, },
{	 0x1CE7,  0x146E,  0x0FF1,  0x0CF4,  0x0AF6,  0x0977,  0x07F8,  0x0778, },
{	 0x1C6D,  0x1472,  0x0FF5,  0x0CF7,  0x0AF8,  0x0979,  0x07FA,  0x06FA, },
{	 0x1C73,  0x1476,  0x0F78,  0x0C7A,  0x0A7A,  0x08FB,  0x07FC,  0x06FC, },
{	 0x1BF9,  0x13FB,  0x0F7C,  0x0C7D,  0x0A7D,  0x08FD,  0x07FE,  0x06FE, },
{	 0x1BFF,  0x13FF,  0x0F7F,  0x0C7F,  0x0A7F,  0x08FF,  0x0800,  0x0700, },
{	 0x1B85,  0x1384,  0x0F03,  0x0C82,  0x0A82,  0x0902,  0x0782,  0x0701, },
{	 0x1B0D,  0x1389,  0x0F07,  0x0C05,  0x0A04,  0x0884,  0x0783,  0x0702, },
{	 0x1B11,  0x130D,  0x0F0A,  0x0C08,  0x0A07,  0x0886,  0x0785,  0x0684, },
{	 0x1A99,  0x1311,  0x0E8D,  0x0C0B,  0x0A09,  0x0888,  0x0787,  0x0686, },
{	 0x1A20,  0x1296,  0x0E91,  0x0B8E,  0x0A0C,  0x088A,  0x0789,  0x0688, },
{	 0x1A25,  0x129B,  0x0E94,  0x0B91,  0x098E,  0x088C,  0x078A,  0x068A, },
{	 0x19AB,  0x1220,  0x0E18,  0x0B94,  0x0991,  0x080E,  0x070C,  0x068B, },
{	 0x19B1,  0x1223,  0x0E1B,  0x0B97,  0x0993,  0x0810,  0x070E,  0x068C, },
{	 0x1937,  0x1228,  0x0E1F,  0x0B19,  0x0996,  0x0812,  0x0710,  0x060E, },
{	 0x18BF,  0x11AD,  0x0DA3,  0x0B1C,  0x0918,  0x0815,  0x0712,  0x0610, },
{	 0x18C3,  0x11B1,  0x0DA6,  0x0B1F,  0x091A,  0x0817,  0x0714,  0x0612, },
{	 0x184B,  0x1135,  0x0D2A,  0x0AA2,  0x091D,  0x0799,  0x0696,  0x0614, },
{	 0x184E,  0x113A,  0x0D2D,  0x0AA5,  0x091F,  0x079B,  0x0698,  0x0615, },
{	 0x17D7,  0x10BF,  0x0D31,  0x0AA8,  0x08A2,  0x079D,  0x069A,  0x0617, },
{	 0x175D,  0x10C3,  0x0CB4,  0x0AAB,  0x08A4,  0x079F,  0x069C,  0x0598, },
{	 0x1763,  0x10C6,  0x0CB8,  0x0A2E,  0x08A7,  0x07A2,  0x069E,  0x059A, },
{	 0x16E9,  0x104C,  0x0CBB,  0x0A31,  0x08A9,  0x0724,  0x0620,  0x059C, },
{	 0x1670,  0x1050,  0x0C3F,  0x0A33,  0x082C,  0x0726,  0x0621,  0x059E, },
{	 0x1675,  0x0FD5,  0x0C42,  0x09B6,  0x082E,  0x0728,  0x0623,  0x05A0, },
},{{	 0x06ED,  0x066E,  0x05F0,  0x0571,  0x04F2,  0x0473,  0x0474,  0x03F4, },
{	 0x06EE,  0x0670,  0x05F2,  0x0572,  0x04F3,  0x0474,  0x03F4,  0x03F6, },
{	 0x06F0,  0x0672,  0x0572,  0x04F4,  0x04F4,  0x0475,  0x03F6,  0x03F6, },
{	 0x06F2,  0x05F3,  0x0574,  0x04F4,  0x04F6,  0x0476,  0x03F6,  0x03F7, },
{	 0x06F3,  0x05F4,  0x0575,  0x04F6,  0x0476,  0x0477,  0x03F8,  0x03F8, },
{	 0x0674,  0x05F6,  0x0576,  0x04F7,  0x0478,  0x0478,  0x03F8,  0x0379, },
{	 0x0676,  0x05F7,  0x0578,  0x04F8,  0x0478,  0x0479,  0x03FA,  0x037A, },
{	 0x0678,  0x05F8,  0x0579,  0x04FA,  0x047A,  0x03FA,  0x03FA,  0x037A, },
{	 0x0679,  0x05FA,  0x057A,  0x04FA,  0x047B,  0x03FC,  0x03FC,  0x037C, },
{	 0x067B,  0x05FB,  0x057C,  0x04FC,  0x047C,  0x03FC,  0x03FC,  0x037C, },
{	 0x067C,  0x057C,  0x04FD,  0x04FD,  0x047D,  0x03FE,  0x03FE,  0x037E, },
{	 0x067E,  0x057E,  0x04FE,  0x047E,  0x047E,  0x03FE,  0x037E,  0x037E, },
{	 0x0600,  0x0580,  0x0500,  0x0480,  0x0480,  0x0400,  0x0380,  0x0380, },
{	 0x0601,  0x0581,  0x0500,  0x0480,  0x0400,  0x0400,  0x0380,  0x0380, },
{	 0x0602,  0x0582,  0x0502,  0x0482,  0x0402,  0x0402,  0x0382,  0x0382, },
{	 0x0604,  0x0584,  0x0503,  0x0483,  0x0402,  0x0402,  0x0382,  0x0382, },
{	 0x0606,  0x0585,  0x0504,  0x0484,  0x0404,  0x0404,  0x0384,  0x0303, },
{	 0x0607,  0x0586,  0x0506,  0x0486,  0x0405,  0x0384,  0x0384,  0x0304, },
{	 0x0588,  0x0508,  0x0487,  0x0486,  0x0406,  0x0386,  0x0386,  0x0305, },
{	 0x058A,  0x0509,  0x0488,  0x0408,  0x0407,  0x0386,  0x0386,  0x0306, },
{	 0x058C,  0x050A,  0x048A,  0x0409,  0x0408,  0x0388,  0x0387,  0x0306, },
{	 0x058D,  0x050C,  0x048B,  0x040A,  0x040A,  0x0388,  0x0308,  0x0308, },
{	 0x058E,  0x050E,  0x048C,  0x040C,  0x038A,  0x038A,  0x0309,  0x0308, },
{	 0x0590,  0x050E,  0x048E,  0x040C,  0x038C,  0x038A,  0x030A,  0x030A, },
{	 0x0592,  0x0510,  0x048F,  0x040E,  0x038C,  0x038C,  0x030B,  0x030A, },
{	 0x0513,  0x0492,  0x0490,  0x040F,  0x038E,  0x038D,  0x030C,  0x030C, },
{	 0x0515,  0x0493,  0x0412,  0x0410,  0x038F,  0x030E,  0x030D,  0x030C, },
{	 0x0516,  0x0494,  0x0412,  0x0412,  0x0390,  0x030F,  0x030E,  0x028D, },
{	 0x0518,  0x0496,  0x0414,  0x0392,  0x0391,  0x0310,  0x030F,  0x028E, },
{	 0x051A,  0x0497,  0x0415,  0x0394,  0x0392,  0x0311,  0x0310,  0x028F, },
{	 0x051B,  0x0498,  0x0416,  0x0395,  0x0394,  0x0312,  0x0311,  0x0290, },
{	 0x051C,  0x049A,  0x0418,  0x0396,  0x0314,  0x0313,  0x0312,  0x0291, },
},{{	 0x0375,  0x0376,  0x0376,  0x02F6,  0x02F6,  0x02F8,  0x0278,  0x0278, },
{	 0x0376,  0x0376,  0x02F6,  0x02F7,  0x02F8,  0x0278,  0x0278,  0x0278, },
{	 0x0376,  0x0377,  0x02F8,  0x02F8,  0x02F8,  0x0278,  0x0278,  0x0279, },
{	 0x0378,  0x0378,  0x02F8,  0x02F8,  0x02F9,  0x027A,  0x027A,  0x027A, },
{	 0x0378,  0x0378,  0x02F9,  0x02FA,  0x02FA,  0x027A,  0x027A,  0x027A, },
{	 0x037A,  0x037A,  0x02FA,  0x02FA,  0x027A,  0x027A,  0x027A,  0x027B, },
{	 0x037A,  0x02FA,  0x02FA,  0x02FB,  0x027B,  0x027C,  0x027C,  0x027C, },
{	 0x037B,  0x02FC,  0x02FC,  0x02FC,  0x027C,  0x027C,  0x027C,  0x027C, },
{	 0x037C,  0x02FC,  0x02FC,  0x02FC,  0x027C,  0x027C,  0x027C,  0x01FC, },
{	 0x037C,  0x02FD,  0x02FD,  0x027E,  0x027E,  0x027E,  0x027E,  0x01FE, },
{	 0x037E,  0x02FE,  0x02FE,  0x027E,  0x027E,  0x027E,  0x027E,  0x01FE, },
{	 0x02FE,  0x02FE,  0x02FE,  0x027E,  0x027E,  0x027E,  0x027E,  0x01FE, },
{	 0x0300,  0x0300,  0x0300,  0x0280,  0x0280,  0x0280,  0x0200,  0x0200, },
{	 0x0300,  0x0300,  0x0300,  0x0280,  0x0280,  0x0280,  0x0200,  0x0200, },
{	 0x0301,  0x0301,  0x0281,  0x0281,  0x0280,  0x0280,  0x0200,  0x0200, },
{	 0x0302,  0x0302,  0x0282,  0x0282,  0x0282,  0x0202,  0x0202,  0x0202, },
{	 0x0303,  0x0302,  0x0282,  0x0282,  0x0282,  0x0202,  0x0202,  0x0202, },
{	 0x0304,  0x0304,  0x0284,  0x0283,  0x0283,  0x0202,  0x0202,  0x0202, },
{	 0x0304,  0x0284,  0x0284,  0x0284,  0x0284,  0x0204,  0x0204,  0x0204, },
{	 0x0306,  0x0285,  0x0285,  0x0284,  0x0204,  0x0204,  0x0204,  0x0204, },
{	 0x0306,  0x0286,  0x0286,  0x0286,  0x0205,  0x0204,  0x0204,  0x0204, },
{	 0x0308,  0x0286,  0x0286,  0x0286,  0x0206,  0x0206,  0x0206,  0x0205, },
{	 0x0308,  0x0288,  0x0288,  0x0287,  0x0206,  0x0206,  0x0206,  0x0206, },
{	 0x0289,  0x0288,  0x0288,  0x0208,  0x0208,  0x0207,  0x0206,  0x0206, },
{	 0x028A,  0x028A,  0x0288,  0x0208,  0x0208,  0x0208,  0x0208,  0x0187, },
{	 0x028A,  0x028A,  0x028A,  0x0209,  0x0208,  0x0208,  0x0208,  0x0188, },
{	 0x028C,  0x028B,  0x028A,  0x020A,  0x020A,  0x0209,  0x0208,  0x0188, },
{	 0x028C,  0x028C,  0x020C,  0x020A,  0x020A,  0x020A,  0x018A,  0x0188, },
{	 0x028E,  0x028C,  0x020C,  0x020C,  0x020A,  0x020A,  0x018A,  0x018A, },
{	 0x028E,  0x028E,  0x020C,  0x020C,  0x020C,  0x020B,  0x018A,  0x018A, },
{	 0x028F,  0x028E,  0x020E,  0x020C,  0x020C,  0x018C,  0x018C,  0x018A, },
{	 0x0290,  0x020F,  0x020E,  0x020E,  0x020D,  0x018C,  0x018C,  0x018C, },
},{{	 0x0278,  0x01F8,  0x01F8,  0x01F8,  0x01F9,  0x01FA,  0x01FA,  0x017A, },
{	 0x0278,  0x01F9,  0x01FA,  0x01FA,  0x01FA,  0x01FA,  0x01FA,  0x017A, },
{	 0x027A,  0x01FA,  0x01FA,  0x01FA,  0x01FA,  0x01FA,  0x017A,  0x017A, },
{	 0x027A,  0x01FA,  0x01FA,  0x01FA,  0x01FA,  0x01FA,  0x017B,  0x017B, },
{	 0x01FA,  0x01FA,  0x01FA,  0x01FB,  0x01FC,  0x01FC,  0x017C,  0x017C, },
{	 0x01FC,  0x01FC,  0x01FC,  0x01FC,  0x01FC,  0x017C,  0x017C,  0x017C, },
{	 0x01FC,  0x01FC,  0x01FC,  0x01FC,  0x01FC,  0x017C,  0x017C,  0x017C, },
{	 0x01FC,  0x01FC,  0x01FC,  0x01FC,  0x01FC,  0x017C,  0x017C,  0x017D, },
{	 0x01FD,  0x01FD,  0x01FE,  0x01FE,  0x017E,  0x017E,  0x017E,  0x017E, },
{	 0x01FE,  0x01FE,  0x01FE,  0x01FE,  0x017E,  0x017E,  0x017E,  0x017E, },
{	 0x01FE,  0x01FE,  0x01FE,  0x01FE,  0x017E,  0x017E,  0x017E,  0x017E, },
{	 0x01FE,  0x01FE,  0x01FE,  0x017E,  0x017E,  0x017E,  0x017E,  0x017E, },
{	 0x0200,  0x0200,  0x0200,  0x0180,  0x0180,  0x0180,  0x0180,  0x0180, },
{	 0x0200,  0x0200,  0x0200,  0x0180,  0x0180,  0x0180,  0x0180,  0x0180, },
{	 0x0200,  0x0200,  0x0180,  0x0180,  0x0180,  0x0180,  0x0180,  0x0180, },
{	 0x0202,  0x0202,  0x0181,  0x0181,  0x0181,  0x0181,  0x0180,  0x0180, },
{	 0x0202,  0x0202,  0x0182,  0x0182,  0x0182,  0x0182,  0x0182,  0x0182, },
{	 0x0202,  0x0182,  0x0182,  0x0182,  0x0182,  0x0182,  0x0182,  0x0182, },
{	 0x0203,  0x0183,  0x0182,  0x0182,  0x0182,  0x0182,  0x0182,  0x0182, },
{	 0x0204,  0x0184,  0x0184,  0x0184,  0x0183,  0x0183,  0x0182,  0x0102, },
{	 0x0204,  0x0184,  0x0184,  0x0184,  0x0184,  0x0184,  0x0184,  0x0104, },
{	 0x0184,  0x0184,  0x0184,  0x0184,  0x0184,  0x0184,  0x0184,  0x0104, },
{	 0x0186,  0x0186,  0x0185,  0x0184,  0x0184,  0x0184,  0x0104,  0x0104, },
{	 0x0186,  0x0186,  0x0186,  0x0186,  0x0186,  0x0185,  0x0104,  0x0104, },
{	 0x0186,  0x0186,  0x0186,  0x0186,  0x0186,  0x0106,  0x0106,  0x0106, },
{	 0x0188,  0x0187,  0x0186,  0x0186,  0x0186,  0x0106,  0x0106,  0x0106, },
{	 0x0188,  0x0188,  0x0188,  0x0187,  0x0186,  0x0106,  0x0106,  0x0106, },
{	 0x0188,  0x0188,  0x0188,  0x0188,  0x0108,  0x0107,  0x0106,  0x0106, },
{	 0x0189,  0x0188,  0x0188,  0x0188,  0x0108,  0x0108,  0x0108,  0x0107, },
{	 0x018A,  0x018A,  0x0189,  0x0188,  0x0108,  0x0108,  0x0108,  0x0108, },
{	 0x018A,  0x018A,  0x018A,  0x010A,  0x0108,  0x0108,  0x0108,  0x0108, },
{	 0x018B,  0x018A,  0x018A,  0x010A,  0x010A,  0x010A,  0x0108,  0x0108, },
},};
const uint16_t angle_20A_double[8][32][4] = {
{{	 0x017A,  0x017A,  0x017A,  0x00FA, },
{	 0x017A,  0x017A,  0x017A,  0x00FC, },
{	 0x017A,  0x017B,  0x017C,  0x00FC, },
{	 0x017C,  0x017C,  0x017C,  0x00FC, },
{	 0x017C,  0x017C,  0x017C,  0x00FC, },
{	 0x017C,  0x017C,  0x00FC,  0x00FC, },
{	 0x017C,  0x017C,  0x00FC,  0x00FD, },
{	 0x017D,  0x017E,  0x00FE,  0x00FE, },
{	 0x017E,  0x017E,  0x00FE,  0x00FE, },
{	 0x017E,  0x017E,  0x00FE,  0x00FE, },
{	 0x017E,  0x00FE,  0x00FE,  0x00FE, },
{	 0x017F,  0x00FF,  0x00FF,  0x00FF, },
{	 0x0180,  0x0100,  0x0100,  0x0100, },
{	 0x0180,  0x0100,  0x0100,  0x0100, },
{	 0x0180,  0x0100,  0x0100,  0x0100, },
{	 0x0100,  0x0100,  0x0100,  0x0100, },
{	 0x0102,  0x0102,  0x0101,  0x0101, },
{	 0x0102,  0x0102,  0x0102,  0x0102, },
{	 0x0102,  0x0102,  0x0102,  0x0102, },
{	 0x0102,  0x0102,  0x0102,  0x0102, },
{	 0x0103,  0x0102,  0x0102,  0x0102, },
{	 0x0104,  0x0104,  0x0104,  0x0102, },
{	 0x0104,  0x0104,  0x0104,  0x0104, },
{	 0x0104,  0x0104,  0x0104,  0x0104, },
{	 0x0105,  0x0104,  0x0104,  0x0104, },
{	 0x0106,  0x0105,  0x0104,  0x0084, },
{	 0x0106,  0x0106,  0x0106,  0x0084, },
{	 0x0106,  0x0106,  0x0106,  0x0086, },
{	 0x0106,  0x0106,  0x0106,  0x0086, },
{	 0x0108,  0x0106,  0x0086,  0x0086, },
{	 0x0108,  0x0108,  0x0086,  0x0086, },
{	 0x0108,  0x0108,  0x0088,  0x0086, },
},{{	 0x00FA,  0x00FB,  0x00FC,  0x00FC, },
{	 0x00FC,  0x00FC,  0x00FC,  0x00FC, },
{	 0x00FC,  0x00FC,  0x00FC,  0x00FC, },
{	 0x00FC,  0x00FC,  0x00FC,  0x00FC, },
{	 0x00FC,  0x00FC,  0x00FC,  0x00FC, },
{	 0x00FC,  0x00FC,  0x00FD,  0x00FD, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x007E, },
{	 0x00FF,  0x00FF,  0x00FF,  0x007F, },
{	 0x0100,  0x0100,  0x0100,  0x0080, },
{	 0x0100,  0x0100,  0x0100,  0x0080, },
{	 0x0100,  0x0100,  0x0080,  0x0080, },
{	 0x0100,  0x0100,  0x0080,  0x0080, },
{	 0x0100,  0x0100,  0x0080,  0x0080, },
{	 0x0102,  0x0102,  0x0082,  0x0081, },
{	 0x0102,  0x0082,  0x0082,  0x0082, },
{	 0x0102,  0x0082,  0x0082,  0x0082, },
{	 0x0102,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0104,  0x0083,  0x0082,  0x0082, },
{	 0x0084,  0x0084,  0x0084,  0x0083, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0085,  0x0084,  0x0084,  0x0084, },
{	 0x0086,  0x0086,  0x0084,  0x0084, },
{	 0x0086,  0x0086,  0x0086,  0x0085, },
{	 0x0086,  0x0086,  0x0086,  0x0086, },
{	 0x0086,  0x0086,  0x0086,  0x0086, },
},{{	 0x00FC,  0x00FC,  0x007C,  0x007C, },
{	 0x00FC,  0x00FC,  0x007C,  0x007C, },
{	 0x00FC,  0x007C,  0x007C,  0x007C, },
{	 0x00FC,  0x007C,  0x007C,  0x007C, },
{	 0x00FC,  0x007D,  0x007D,  0x007E, },
{	 0x00FE,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007F,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0081,  0x0080,  0x0080,  0x0080, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0084,  0x0083,  0x0082,  0x0082, },
{	 0x0084,  0x0084,  0x0084,  0x0083, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0085,  0x0084,  0x0084,  0x0004, },
{	 0x0086,  0x0086,  0x0085,  0x0004, },
},{{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007D,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
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
{	 0x0081,  0x0081,  0x0080,  0x0080, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0002, },
{	 0x0082,  0x0082,  0x0082,  0x0002, },
{	 0x0082,  0x0082,  0x0082,  0x0002, },
{	 0x0082,  0x0082,  0x0002,  0x0002, },
{	 0x0082,  0x0082,  0x0002,  0x0002, },
{	 0x0082,  0x0002,  0x0002,  0x0002, },
{	 0x0084,  0x0004,  0x0003,  0x0002, },
{	 0x0084,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
},{{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007D,  0x007D,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0xFFFE, },
{	 0x0080,  0x0080,  0x0080,  0x0000, },
{	 0x0080,  0x0080,  0x0000,  0x0000, },
{	 0x0080,  0x0080,  0x0000,  0x0000, },
{	 0x0080,  0x0080,  0x0000,  0x0000, },
{	 0x0080,  0x0000,  0x0000,  0x0000, },
{	 0x0080,  0x0000,  0x0000,  0x0000, },
{	 0x0080,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0001,  0x0001,  0x0000, },
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
},{{	 0x007C,  0x007C,  0x007C,  0xFFFD, },
{	 0x007D,  0x007E,  0x007E,  0xFFFE, },
{	 0x007E,  0x007E,  0xFFFE,  0xFFFE, },
{	 0x007E,  0x007E,  0xFFFE,  0xFFFE, },
{	 0x007E,  0x007E,  0xFFFE,  0xFFFE, },
{	 0x007E,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0x007E,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFF,  0xFFFF, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0002,  0x0001,  0x0001, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0003,  0x0002,  0x0002,  0x0002, },
{	 0x0004,  0x0004,  0x0004,  0x0003, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
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
{	 0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0002,  0x0002,  0x0001, },
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
{	 0xFFFF,  0xFFFF,  0xFFFF,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0002,  0x0002,  0x0001, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
},};
