#include "angles_common.h"
const uint16_t angle_32C_single[4][32][8] = {
{{	 0x1F7E,  0x167E,  0x10FE,  0x0DF9,  0x0B67,  0x09D8,  0x084E,  0x0745, },
{	 0x1FFE,  0x16FE,  0x11FE,  0x0E73,  0x0BE1,  0x09D6,  0x08CA,  0x07C2, },
{	 0x1FFE,  0x17FE,  0x127E,  0x0EEF,  0x0C5D,  0x0A51,  0x08C8,  0x07BF, },
{	 0x1FFE,  0x18FE,  0x12FE,  0x0F69,  0x0CD9,  0x0ACD,  0x0943,  0x083C, },
{	 0x1FFE,  0x19FE,  0x13F9,  0x0FE3,  0x0D53,  0x0B49,  0x09BF,  0x08B8, },
{	 0x1FFE,  0x1A7E,  0x1473,  0x105E,  0x0DCF,  0x0BC5,  0x0A3C,  0x08B5, },
{	 0x1FFE,  0x1B7E,  0x156C,  0x10DA,  0x0E4B,  0x0C40,  0x0A3A,  0x0932, },
{	 0x1FFE,  0x1C7E,  0x15E5,  0x11D3,  0x0EC5,  0x0C3C,  0x0AB5,  0x09AF, },
{	 0x1FFE,  0x1D79,  0x165F,  0x124D,  0x0F41,  0x0CB8,  0x0B31,  0x09AC, },
{	 0x1FFE,  0x1DF4,  0x1758,  0x12C7,  0x0FBC,  0x0D34,  0x0BAE,  0x0A29, },
{	 0x1FFE,  0x1EEC,  0x17D2,  0x1343,  0x1038,  0x0DB0,  0x0BAA,  0x0AA5, },
{	 0x1FFE,  0x1FE1,  0x184C,  0x13BD,  0x10B3,  0x0E2C,  0x0C27,  0x0AA2, },
{	 0x1FFD,  0x1FD7,  0x1944,  0x1438,  0x112F,  0x0EA8,  0x0CA3,  0x0B1F, },
{	 0x1FF0,  0x1FCF,  0x19BF,  0x14B3,  0x112A,  0x0EA4,  0x0D1F,  0x0B9C, },
{	 0x1FE5,  0x1FC7,  0x1AB7,  0x152E,  0x11A6,  0x0F20,  0x0D1C,  0x0B99, },
{	 0x1FD9,  0x1FBF,  0x1B31,  0x1627,  0x1222,  0x0F9C,  0x0D99,  0x0C15, },
{	 0x1FCD,  0x1FB7,  0x1BAB,  0x16A1,  0x129D,  0x1018,  0x0E15,  0x0C12, },
{	 0x1FC4,  0x1FAD,  0x1CA3,  0x171D,  0x1318,  0x1094,  0x0E91,  0x0C8F, },
{	 0x1FB5,  0x1FA5,  0x1D1D,  0x1797,  0x1393,  0x1110,  0x0E8E,  0x0D0C, },
{	 0x1FA9,  0x1F9D,  0x1D98,  0x1812,  0x140F,  0x110C,  0x0F0A,  0x0D0A, },
{	 0x1F9D,  0x1F95,  0x1E8F,  0x188D,  0x148A,  0x1188,  0x0F87,  0x0D86, },
{	 0x1F92,  0x1F8B,  0x1F09,  0x1908,  0x1505,  0x1204,  0x0F84,  0x0E03, },
{	 0x1F86,  0x1F85,  0x1F81,  0x1982,  0x1581,  0x1280,  0x0FFF,  0x0E00, },
{	 0x1F7B,  0x1F7B,  0x1F7B,  0x1A7B,  0x15FB,  0x12FC,  0x107C,  0x0E7C, },
{	 0x1F6F,  0x1F73,  0x1F75,  0x1AF6,  0x1677,  0x1378,  0x10F8,  0x0EF9, },
{	 0x1F66,  0x1F69,  0x1F6D,  0x1B71,  0x16F3,  0x1374,  0x10F5,  0x0EF6, },
{	 0x1F5A,  0x1F63,  0x1F67,  0x1BEB,  0x176E,  0x13F0,  0x1171,  0x0F73, },
{	 0x1F4B,  0x1F59,  0x1F61,  0x1C66,  0x17E9,  0x146C,  0x11EE,  0x0FEF, },
{	 0x1F3F,  0x1F51,  0x1F5B,  0x1CE1,  0x1865,  0x14E8,  0x126A,  0x0FEC, },
{	 0x1F34,  0x1F47,  0x1F53,  0x1D5C,  0x18E0,  0x1564,  0x1267,  0x1069, },
{	 0x1F28,  0x1F3F,  0x1F4D,  0x1E55,  0x195B,  0x15E0,  0x12E3,  0x10E6, },
{	 0x1F1D,  0x1F37,  0x1F47,  0x1ED0,  0x19D7,  0x15DC,  0x1360,  0x10E3, },
},{{	 0x063E,  0x05B9,  0x0534,  0x04B0,  0x042C,  0x03A9,  0x0328,  0x0324, },
{	 0x06BB,  0x05B6,  0x0532,  0x04AE,  0x042A,  0x03A8,  0x03A5,  0x0322, },
{	 0x06BA,  0x0633,  0x05AF,  0x052C,  0x04A8,  0x0426,  0x03A3,  0x03A1, },
{	 0x0736,  0x06B1,  0x05AD,  0x0529,  0x04A6,  0x0424,  0x0421,  0x039F, },
{	 0x07B3,  0x06AE,  0x062A,  0x05A7,  0x0524,  0x04A2,  0x041F,  0x039E, },
{	 0x07B0,  0x072C,  0x0628,  0x05A5,  0x0522,  0x04A0,  0x041E,  0x041C, },
{	 0x082D,  0x0729,  0x06A6,  0x0622,  0x0520,  0x051E,  0x049C,  0x041A, },
{	 0x082A,  0x07A6,  0x06A3,  0x0620,  0x059E,  0x051C,  0x049A,  0x0418, },
{	 0x08A7,  0x07A4,  0x0721,  0x061E,  0x059C,  0x051A,  0x0518,  0x0496, },
{	 0x0924,  0x0821,  0x071E,  0x069C,  0x061A,  0x0598,  0x0516,  0x0495, },
{	 0x0922,  0x081E,  0x079C,  0x069A,  0x0618,  0x0596,  0x0514,  0x0494, },
{	 0x099F,  0x089C,  0x0799,  0x0717,  0x0696,  0x0614,  0x0592,  0x0511, },
{	 0x099C,  0x089A,  0x0817,  0x0715,  0x0693,  0x0612,  0x0590,  0x0510, },
{	 0x0A19,  0x0917,  0x0814,  0x0793,  0x0711,  0x0610,  0x058F,  0x058E, },
{	 0x0A96,  0x0994,  0x0892,  0x0790,  0x070F,  0x068E,  0x060D,  0x058C, },
{	 0x0A93,  0x0991,  0x0890,  0x080E,  0x070D,  0x068C,  0x060B,  0x058A, },
{	 0x0B10,  0x0A0E,  0x090D,  0x080C,  0x078B,  0x070A,  0x0689,  0x0608, },
{	 0x0B0E,  0x0A0C,  0x090B,  0x088A,  0x0789,  0x0708,  0x0688,  0x0607, },
{	 0x0B8B,  0x0A89,  0x0988,  0x0888,  0x0807,  0x0706,  0x0686,  0x0605, },
{	 0x0C08,  0x0A87,  0x0986,  0x0905,  0x0805,  0x0784,  0x0704,  0x0684, },
{	 0x0C05,  0x0B04,  0x0A04,  0x0903,  0x0882,  0x0782,  0x0702,  0x0682, },
{	 0x0C82,  0x0B02,  0x0A01,  0x0902,  0x0880,  0x0800,  0x0700,  0x0680, },
{	 0x0C7F,  0x0B7F,  0x0A7F,  0x097F,  0x087E,  0x07FE,  0x077E,  0x06FE, },
{	 0x0CFC,  0x0B7C,  0x0A7C,  0x097C,  0x08FC,  0x07FC,  0x077C,  0x06FC, },
{	 0x0D79,  0x0BFA,  0x0AFA,  0x09FA,  0x08FA,  0x087A,  0x07FA,  0x077A, },
{	 0x0D77,  0x0C77,  0x0AF8,  0x09F8,  0x0978,  0x0878,  0x07F9,  0x0779, },
{	 0x0DF4,  0x0C74,  0x0B75,  0x0A76,  0x0976,  0x08F6,  0x07F7,  0x0777, },
{	 0x0DF1,  0x0CF2,  0x0B73,  0x0A73,  0x09F4,  0x08F4,  0x0875,  0x07F6, },
{	 0x0E6E,  0x0CEF,  0x0BF0,  0x0AF1,  0x09F2,  0x08F4,  0x0873,  0x07F4, },
{	 0x0EEB,  0x0D6C,  0x0BEE,  0x0AEF,  0x09F0,  0x0971,  0x0872,  0x07F2, },
{	 0x0EE8,  0x0D6A,  0x0C6B,  0x0B6D,  0x0A6E,  0x096F,  0x08F0,  0x0870, },
{	 0x0F65,  0x0DE7,  0x0C69,  0x0B6A,  0x0A6C,  0x09ED,  0x08EE,  0x086E, },
},{{	 0x02A2,  0x02A0,  0x021E,  0x021D,  0x021C,  0x019A,  0x0199,  0x0198, },
{	 0x0320,  0x029E,  0x029D,  0x021C,  0x021A,  0x0219,  0x0198,  0x0196, },
{	 0x031F,  0x031D,  0x029C,  0x029A,  0x0219,  0x0218,  0x0216,  0x0196, },
{	 0x031E,  0x031C,  0x029A,  0x0299,  0x0298,  0x0216,  0x0216,  0x0214, },
{	 0x039C,  0x031A,  0x0318,  0x0298,  0x0296,  0x0295,  0x0214,  0x0213, },
{	 0x039A,  0x0398,  0x0317,  0x0316,  0x0295,  0x0294,  0x0213,  0x0212, },
{	 0x0398,  0x0397,  0x0316,  0x0314,  0x0294,  0x0292,  0x0292,  0x0211, },
{	 0x0417,  0x0396,  0x0394,  0x0313,  0x0312,  0x0291,  0x0290,  0x0290, },
{	 0x0415,  0x0394,  0x0392,  0x0312,  0x0311,  0x0310,  0x028F,  0x028E, },
{	 0x0414,  0x0412,  0x0391,  0x0390,  0x0310,  0x030E,  0x028E,  0x028E, },
{	 0x0492,  0x0411,  0x0410,  0x038F,  0x038E,  0x030E,  0x030C,  0x028C, },
{	 0x0490,  0x0410,  0x040E,  0x038E,  0x038C,  0x030C,  0x030C,  0x030B, },
{	 0x048E,  0x048E,  0x040D,  0x040C,  0x038C,  0x038A,  0x030A,  0x030A, },
{	 0x050D,  0x048C,  0x040C,  0x040A,  0x038A,  0x038A,  0x030A,  0x0308, },
{	 0x050B,  0x048A,  0x048A,  0x0409,  0x0408,  0x0388,  0x0388,  0x0308, },
{	 0x050A,  0x0509,  0x0488,  0x0408,  0x0408,  0x0387,  0x0386,  0x0386, },
{	 0x0588,  0x0508,  0x0487,  0x0486,  0x0406,  0x0406,  0x0385,  0x0385, },
{	 0x0586,  0x0506,  0x0506,  0x0485,  0x0404,  0x0404,  0x0404,  0x0384, },
{	 0x0584,  0x0584,  0x0504,  0x0484,  0x0484,  0x0403,  0x0402,  0x0382, },
{	 0x0603,  0x0583,  0x0502,  0x0502,  0x0482,  0x0482,  0x0402,  0x0402, },
{	 0x0602,  0x0581,  0x0581,  0x0501,  0x0480,  0x0480,  0x0400,  0x0400, },
{	 0x0600,  0x0600,  0x0580,  0x0500,  0x04FF,  0x047F,  0x047F,  0x03FF, },
{	 0x067E,  0x05FE,  0x057E,  0x057E,  0x04FE,  0x047E,  0x047E,  0x03FE, },
{	 0x067C,  0x05FC,  0x05FC,  0x057C,  0x04FC,  0x04FC,  0x047C,  0x047C, },
{	 0x06FA,  0x067B,  0x05FB,  0x057B,  0x04FC,  0x04FC,  0x047C,  0x047C, },
{	 0x06F9,  0x067A,  0x05FA,  0x057A,  0x057A,  0x04FA,  0x04FA,  0x047A, },
{	 0x06F8,  0x0678,  0x05F8,  0x05F8,  0x0578,  0x04F8,  0x04F9,  0x0479, },
{	 0x0776,  0x06F6,  0x0676,  0x05F7,  0x0577,  0x0578,  0x04F8,  0x04F8, },
{	 0x0774,  0x06F5,  0x0675,  0x05F6,  0x05F6,  0x0576,  0x04F6,  0x04F6, },
{	 0x0772,  0x06F3,  0x0674,  0x0674,  0x05F4,  0x0575,  0x0575,  0x04F6, },
{	 0x07F1,  0x0772,  0x06F2,  0x0672,  0x05F3,  0x0574,  0x0574,  0x04F4, },
{	 0x07F0,  0x0770,  0x06F0,  0x0671,  0x05F2,  0x05F2,  0x0572,  0x0573, },
},{{	 0x0197,  0x0116,  0x0115,  0x0114,  0x0114,  0x0112,  0x0092,  0x0092, },
{	 0x0196,  0x0195,  0x0114,  0x0114,  0x0112,  0x0112,  0x0112,  0x0090, },
{	 0x0194,  0x0194,  0x0193,  0x0112,  0x0112,  0x0111,  0x0110,  0x0110, },
{	 0x0194,  0x0192,  0x0192,  0x0191,  0x0110,  0x0110,  0x0110,  0x010E, },
{	 0x0212,  0x0192,  0x0191,  0x0190,  0x0190,  0x010F,  0x010E,  0x010E, },
{	 0x0211,  0x0210,  0x0190,  0x018F,  0x018E,  0x018E,  0x010E,  0x010D, },
{	 0x0210,  0x0210,  0x018E,  0x018E,  0x018E,  0x018D,  0x018C,  0x010C, },
{	 0x020F,  0x020E,  0x020E,  0x018E,  0x018C,  0x018C,  0x018C,  0x018B, },
{	 0x028E,  0x020D,  0x020C,  0x020C,  0x018C,  0x018B,  0x018A,  0x018A, },
{	 0x028C,  0x020C,  0x020C,  0x020B,  0x020A,  0x018A,  0x018A,  0x018A, },
{	 0x028C,  0x028B,  0x020A,  0x020A,  0x020A,  0x0209,  0x0188,  0x0188, },
{	 0x028A,  0x028A,  0x028A,  0x0209,  0x0208,  0x0208,  0x0208,  0x0188, },
{	 0x028A,  0x0288,  0x0288,  0x0288,  0x0208,  0x0208,  0x0207,  0x0206, },
{	 0x0308,  0x0288,  0x0288,  0x0287,  0x0206,  0x0206,  0x0206,  0x0206, },
{	 0x0307,  0x0306,  0x0286,  0x0286,  0x0286,  0x0206,  0x0205,  0x0204, },
{	 0x0306,  0x0306,  0x0286,  0x0285,  0x0284,  0x0284,  0x0204,  0x0204, },
{	 0x0304,  0x0304,  0x0304,  0x0284,  0x0284,  0x0284,  0x0283,  0x0203, },
{	 0x0384,  0x0304,  0x0303,  0x0302,  0x0282,  0x0282,  0x0282,  0x0202, },
{	 0x0382,  0x0382,  0x0302,  0x0302,  0x0282,  0x0282,  0x0282,  0x0281, },
{	 0x0381,  0x0381,  0x0301,  0x0300,  0x0300,  0x0280,  0x0280,  0x0280, },
{	 0x0380,  0x0380,  0x0380,  0x0300,  0x0300,  0x0300,  0x0280,  0x0280, },
{	 0x03FF,  0x037E,  0x037E,  0x02FE,  0x02FE,  0x02FE,  0x02FE,  0x027E, },
{	 0x03FE,  0x037E,  0x037E,  0x037E,  0x02FE,  0x02FE,  0x02FE,  0x027E, },
{	 0x03FC,  0x03FC,  0x037C,  0x037C,  0x037C,  0x02FC,  0x02FC,  0x02FC, },
{	 0x03FC,  0x03FC,  0x037C,  0x037C,  0x037C,  0x02FC,  0x02FC,  0x02FC, },
{	 0x047A,  0x03FA,  0x03FA,  0x037A,  0x037A,  0x037A,  0x02FA,  0x02FA, },
{	 0x0479,  0x03FA,  0x03FA,  0x03FA,  0x037A,  0x037A,  0x02FA,  0x02FA, },
{	 0x0478,  0x0478,  0x03F8,  0x03F8,  0x0378,  0x0378,  0x0379,  0x02F9, },
{	 0x0477,  0x0477,  0x03F8,  0x03F8,  0x03F8,  0x0378,  0x0378,  0x0378, },
{	 0x0476,  0x0476,  0x0476,  0x03F6,  0x03F6,  0x0377,  0x0377,  0x0378, },
{	 0x04F4,  0x0475,  0x0475,  0x03F6,  0x03F6,  0x03F6,  0x0376,  0x0376, },
{	 0x04F4,  0x0474,  0x0474,  0x0474,  0x03F4,  0x03F5,  0x0376,  0x0376, },
},};
const uint16_t angle_32C_double[8][32][4] = {
{{	 0x0090,  0x0090,  0x008E,  0x000E, },
{	 0x0090,  0x008E,  0x008E,  0x008D, },
{	 0x008E,  0x008E,  0x008D,  0x008C, },
{	 0x010E,  0x008D,  0x008C,  0x008C, },
{	 0x010D,  0x008C,  0x008C,  0x008A, },
{	 0x010C,  0x010C,  0x008A,  0x008A, },
{	 0x010C,  0x010A,  0x010A,  0x008A, },
{	 0x010A,  0x010A,  0x0109,  0x0088, },
{	 0x018A,  0x0109,  0x0108,  0x0108, },
{	 0x0188,  0x0108,  0x0108,  0x0107, },
{	 0x0188,  0x0188,  0x0106,  0x0106, },
{	 0x0187,  0x0186,  0x0106,  0x0106, },
{	 0x0186,  0x0186,  0x0186,  0x0104, },
{	 0x0186,  0x0185,  0x0184,  0x0104, },
{	 0x0204,  0x0184,  0x0184,  0x0184, },
{	 0x0204,  0x0184,  0x0183,  0x0182, },
{	 0x0202,  0x0202,  0x0182,  0x0182, },
{	 0x0202,  0x0202,  0x0182,  0x0181, },
{	 0x0201,  0x0200,  0x0180,  0x0180, },
{	 0x0200,  0x0200,  0x0200,  0x0180, },
{	 0x0280,  0x01FF,  0x01FF,  0x017F, },
{	 0x027E,  0x01FE,  0x01FE,  0x01FE, },
{	 0x027E,  0x027E,  0x01FE,  0x01FE, },
{	 0x027C,  0x027C,  0x01FC,  0x01FC, },
{	 0x027C,  0x027C,  0x01FC,  0x01FC, },
{	 0x02FB,  0x027B,  0x027B,  0x01FC, },
{	 0x02FA,  0x027A,  0x027A,  0x01FA, },
{	 0x02F9,  0x027A,  0x027A,  0x01FA, },
{	 0x02F8,  0x02F8,  0x0278,  0x0279, },
{	 0x02F8,  0x02F8,  0x0278,  0x0278, },
{	 0x0376,  0x02F7,  0x0278,  0x0278, },
{	 0x0376,  0x02F6,  0x02F6,  0x0276, },
},{{	 0x000D,  0x000C,  0x000C,  0x000B, },
{	 0x000C,  0x000C,  0x000B,  0x000A, },
{	 0x000C,  0x000A,  0x000A,  0x000A, },
{	 0x008A,  0x000A,  0x000A,  0x0009, },
{	 0x008A,  0x008A,  0x0009,  0x0008, },
{	 0x008A,  0x0088,  0x0088,  0x0008, },
{	 0x0088,  0x0088,  0x0088,  0x0008, },
{	 0x0088,  0x0088,  0x0087,  0x0086, },
{	 0x0088,  0x0086,  0x0086,  0x0086, },
{	 0x0086,  0x0086,  0x0086,  0x0086, },
{	 0x0106,  0x0086,  0x0085,  0x0084, },
{	 0x0106,  0x0104,  0x0084,  0x0084, },
{	 0x0104,  0x0104,  0x0084,  0x0084, },
{	 0x0104,  0x0104,  0x0104,  0x0083, },
{	 0x0103,  0x0102,  0x0102,  0x0082, },
{	 0x0102,  0x0102,  0x0102,  0x0102, },
{	 0x0182,  0x0102,  0x0102,  0x0101, },
{	 0x0181,  0x0100,  0x0100,  0x0100, },
{	 0x0180,  0x0180,  0x0100,  0x0100, },
{	 0x0180,  0x0180,  0x0100,  0x0100, },
{	 0x017E,  0x017E,  0x017E,  0x00FE, },
{	 0x017E,  0x017E,  0x017E,  0x00FE, },
{	 0x017E,  0x017E,  0x017E,  0x017E, },
{	 0x01FC,  0x017C,  0x017C,  0x017C, },
{	 0x01FC,  0x017C,  0x017C,  0x017C, },
{	 0x01FC,  0x017C,  0x017C,  0x017C, },
{	 0x01FA,  0x01FA,  0x017A,  0x017A, },
{	 0x01FA,  0x01FA,  0x017A,  0x017A, },
{	 0x01F9,  0x01FA,  0x01FA,  0x017A, },
{	 0x01F8,  0x01F8,  0x01F8,  0x0179, },
{	 0x0278,  0x01F8,  0x01F8,  0x01F8, },
{	 0x0277,  0x01F8,  0x01F8,  0x01F8, },
},{{	 0x000A,  0xFF8A,  0xFF8A,  0xFF89, },
{	 0x000A,  0x000A,  0xFF88,  0xFF88, },
{	 0x000A,  0x0008,  0x0008,  0xFF88, },
{	 0x0008,  0x0008,  0x0008,  0x0008, },
{	 0x0008,  0x0008,  0x0008,  0x0006, },
{	 0x0008,  0x0007,  0x0006,  0x0006, },
{	 0x0006,  0x0006,  0x0006,  0x0006, },
{	 0x0006,  0x0006,  0x0006,  0x0006, },
{	 0x0086,  0x0006,  0x0005,  0x0004, },
{	 0x0085,  0x0084,  0x0004,  0x0004, },
{	 0x0084,  0x0084,  0x0004,  0x0004, },
{	 0x0084,  0x0084,  0x0084,  0x0003, },
{	 0x0084,  0x0083,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0081,  0x0081, },
{	 0x0101,  0x0080,  0x0080,  0x0080, },
{	 0x0100,  0x0080,  0x0080,  0x0080, },
{	 0x0100,  0x0100,  0x0080,  0x0080, },
{	 0x00FF,  0x00FF,  0x007F,  0x007E, },
{	 0x00FE,  0x00FE,  0x00FE,  0x007E, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FC,  0x00FC,  0x00FC,  0x00FC, },
{	 0x017C,  0x00FC,  0x00FC,  0x00FC, },
{	 0x017C,  0x00FC,  0x00FC,  0x00FC, },
{	 0x017B,  0x017B,  0x00FB,  0x00FB, },
{	 0x017A,  0x017A,  0x00FA,  0x00FA, },
{	 0x017A,  0x017A,  0x017A,  0x00FA, },
{	 0x0179,  0x017A,  0x017A,  0x00FA, },
{	 0x0178,  0x0178,  0x0178,  0x0179, },
{	 0x0178,  0x0178,  0x0178,  0x0178, },
},{{	 0xFF88,  0xFF88,  0xFF88,  0xFF88, },
{	 0xFF88,  0xFF88,  0xFF88,  0xFF87, },
{	 0xFF88,  0xFF88,  0xFF86,  0xFF86, },
{	 0xFF87,  0xFF86,  0xFF86,  0xFF86, },
{	 0x0006,  0xFF86,  0xFF86,  0xFF86, },
{	 0x0006,  0x0006,  0xFF86,  0xFF86, },
{	 0x0006,  0x0006,  0x0005,  0xFF84, },
{	 0x0005,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0003,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0082,  0x0002,  0x0001,  0x0001, },
{	 0x0080,  0x0080,  0x0000,  0x0000, },
{	 0x0080,  0x0080,  0x0080,  0x0000, },
{	 0x0080,  0x0080,  0x0080,  0x0000, },
{	 0x0080,  0x0080,  0x0080,  0x007F, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x00FC,  0x007C,  0x007C,  0x007C, },
{	 0x00FC,  0x007C,  0x007C,  0x007C, },
{	 0x00FC,  0x00FC,  0x007C,  0x007C, },
{	 0x00FC,  0x00FC,  0x00FC,  0x007C, },
{	 0x00FA,  0x00FA,  0x00FA,  0x007A, },
{	 0x00FA,  0x00FA,  0x00FA,  0x00FA, },
{	 0x00FA,  0x00FA,  0x00FA,  0x00FA, },
{	 0x00F9,  0x00FA,  0x00FA,  0x00FA, },
{	 0x00F8,  0x00F8,  0x00F8,  0x00F9, },
},{{	 0xFF88,  0xFF86,  0xFF86,  0xFF86, },
{	 0xFF86,  0xFF86,  0xFF86,  0xFF86, },
{	 0xFF86,  0xFF86,  0xFF86,  0xFF86, },
{	 0xFF86,  0xFF86,  0xFF86,  0xFF85, },
{	 0xFF86,  0xFF86,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
{	 0x0004,  0xFF84,  0xFF84,  0xFF83, },
{	 0x0003,  0x0003,  0xFF82,  0xFF82, },
{	 0x0002,  0x0002,  0x0002,  0xFF82, },
{	 0x0002,  0x0002,  0x0002,  0xFF82, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0001,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0xFFFF,  0xFFFF,  0xFFFE,  0xFFFE, },
{	 0x007E,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0x007E,  0x007E,  0xFFFE,  0xFFFE, },
{	 0x007E,  0x007E,  0xFFFE,  0xFFFE, },
{	 0x007E,  0x007E,  0x007E,  0xFFFE, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007A,  0x007B,  0x007B,  0x007B, },
{	 0x007A,  0x007A,  0x007A,  0x007A, },
{	 0x007A,  0x007A,  0x007A,  0x007A, },
{	 0x00FA,  0x007A,  0x007A,  0x007A, },
{	 0x00F9,  0x00FA,  0x007A,  0x007A, },
},{{	 0xFF06,  0xFF06,  0xFF06,  0xFF06, },
{	 0xFF86,  0xFF86,  0xFF06,  0xFF05, },
{	 0xFF86,  0xFF85,  0xFF84,  0xFF04, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF83,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF81,  0xFF81,  0xFF80, },
{	 0x0000,  0xFF80,  0xFF80,  0xFF80, },
{	 0x0000,  0x0000,  0xFF80,  0xFF80, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0xFFFF,  0xFFFF, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFC,  0xFFFC,  0xFFFC,  0xFFFC, },
{	 0x007C,  0xFFFC,  0xFFFC,  0xFFFC, },
{	 0x007C,  0xFFFC,  0xFFFC,  0xFFFC, },
{	 0x007C,  0x007C,  0xFFFC,  0xFFFC, },
{	 0x007C,  0x007C,  0x007C,  0xFFFC, },
{	 0x007A,  0x007A,  0x007A,  0x007A, },
{	 0x007A,  0x007A,  0x007A,  0x007A, },
{	 0x007A,  0x007A,  0x007A,  0x007A, },
{	 0x007A,  0x007A,  0x007A,  0x007A, },
},{{	 0xFF06,  0xFF05,  0xFF04,  0xFF04, },
{	 0xFF04,  0xFF04,  0xFF04,  0xFF04, },
{	 0xFF04,  0xFF04,  0xFF04,  0xFF04, },
{	 0xFF04,  0xFF04,  0xFF04,  0xFF04, },
{	 0xFF84,  0xFF84,  0xFF04,  0xFF04, },
{	 0xFF84,  0xFF84,  0xFF83,  0xFF02, },
{	 0xFF83,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF81,  0xFF81,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFFFF,  0xFF7E,  0xFF7E,  0xFF7E, },
{	 0xFFFE,  0xFFFE,  0xFF7E,  0xFF7E, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFF7E, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFC,  0xFFFC,  0xFFFC,  0xFFFC, },
{	 0xFFFC,  0xFFFC,  0xFFFC,  0xFFFC, },
{	 0xFFFC,  0xFFFC,  0xFFFC,  0xFFFC, },
{	 0xFFFC,  0xFFFC,  0xFFFC,  0xFFFC, },
{	 0xFFFC,  0xFFFC,  0xFFFC,  0xFFFC, },
{	 0xFFFA,  0xFFFB,  0xFFFB,  0xFFFB, },
{	 0xFFFA,  0xFFFA,  0xFFFA,  0xFFFA, },
{	 0x007A,  0xFFFA,  0xFFFA,  0xFFFA, },
{	 0x007A,  0x007A,  0xFFFA,  0xFFFA, },
},{{	 0xFF04,  0xFF04,  0xFF04,  0xFF04, },
{	 0xFF04,  0xFF04,  0xFF04,  0xFF04, },
{	 0xFF04,  0xFF04,  0xFF04,  0xFF04, },
{	 0xFF04,  0xFF04,  0xFF04,  0xFF03, },
{	 0xFF04,  0xFF03,  0xFF02,  0xFF02, },
{	 0xFF02,  0xFF02,  0xFF02,  0xFF02, },
{	 0xFF82,  0xFF02,  0xFF02,  0xFF02, },
{	 0xFF82,  0xFF82,  0xFF02,  0xFF02, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF02, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF81,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF7F,  0xFF7F,  0xFF7F, },
{	 0xFF7E,  0xFF7E,  0xFF7E,  0xFF7E, },
{	 0xFF7E,  0xFF7E,  0xFF7E,  0xFF7E, },
{	 0xFF7E,  0xFF7E,  0xFF7E,  0xFF7E, },
{	 0xFF7E,  0xFF7E,  0xFF7E,  0xFF7E, },
{	 0xFFFE,  0xFF7E,  0xFF7E,  0xFF7E, },
{	 0xFFFE,  0xFFFE,  0xFF7E,  0xFF7D, },
{	 0xFFFC,  0xFFFC,  0xFFFC,  0xFF7C, },
{	 0xFFFC,  0xFFFC,  0xFFFC,  0xFFFC, },
{	 0xFFFC,  0xFFFC,  0xFFFC,  0xFFFC, },
{	 0xFFFC,  0xFFFC,  0xFFFC,  0xFFFC, },
{	 0xFFFC,  0xFFFC,  0xFFFC,  0xFFFC, },
{	 0xFFFB,  0xFFFC,  0xFFFC,  0xFFFC, },
{	 0xFFFA,  0xFFFA,  0xFFFA,  0xFFFA, },
{	 0xFFFA,  0xFFFA,  0xFFFA,  0xFFFA, },
{	 0xFFFA,  0xFFFA,  0xFFFA,  0xFFFA, },
},};
