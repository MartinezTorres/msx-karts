#include "angles_common.h"
const uint16_t angle_10C_single[4][32][8] = {
{{	 0x1F4F,  0x185C,  0x12E3,  0x0F68,  0x0CEC,  0x0AEE,  0x09F0,  0x0872, },
{	 0x1F55,  0x17E0,  0x12E6,  0x0F6A,  0x0CEE,  0x0AF0,  0x0972,  0x0873, },
{	 0x1F59,  0x17E2,  0x126A,  0x0EEE,  0x0C70,  0x0AF2,  0x0974,  0x0874, },
{	 0x1F5F,  0x1768,  0x11ED,  0x0E70,  0x0C72,  0x0A74,  0x08F6,  0x07F6, },
{	 0x1F65,  0x16ED,  0x1171,  0x0E73,  0x0BF5,  0x0A76,  0x08F7,  0x07F8, },
{	 0x1F6B,  0x1671,  0x1174,  0x0DF6,  0x0BF7,  0x09F8,  0x08F9,  0x07FA, },
{	 0x1EF1,  0x15F5,  0x10F7,  0x0DF8,  0x0B79,  0x09FA,  0x087A,  0x077B, },
{	 0x1E76,  0x1579,  0x107B,  0x0D7B,  0x0B7C,  0x09FC,  0x087C,  0x077C, },
{	 0x1D7D,  0x14FE,  0x107E,  0x0D7E,  0x0AFE,  0x097E,  0x087E,  0x077E, },
{	 0x1D03,  0x1482,  0x1001,  0x0D01,  0x0B00,  0x0980,  0x0800,  0x0700, },
{	 0x1C89,  0x1484,  0x0F85,  0x0C84,  0x0A83,  0x0902,  0x0802,  0x0702, },
{	 0x1C0F,  0x140A,  0x0F88,  0x0C86,  0x0A85,  0x0904,  0x0804,  0x0703, },
{	 0x1B15,  0x138E,  0x0F0B,  0x0C09,  0x0A07,  0x0886,  0x0785,  0x0684, },
{	 0x1A9B,  0x1313,  0x0E8F,  0x0C0C,  0x0A0A,  0x0888,  0x0787,  0x0686, },
{	 0x1A21,  0x1297,  0x0E92,  0x0B8E,  0x098C,  0x088A,  0x0709,  0x0688, },
{	 0x19A6,  0x121B,  0x0E15,  0x0B91,  0x098E,  0x080C,  0x070A,  0x060A, },
{	 0x18AE,  0x11A0,  0x0D99,  0x0B14,  0x0910,  0x080E,  0x070C,  0x060B, },
{	 0x1833,  0x1124,  0x0D1C,  0x0A97,  0x0913,  0x0790,  0x068E,  0x060C, },
{	 0x17B9,  0x1126,  0x0D1F,  0x0A99,  0x0896,  0x0792,  0x0690,  0x058E, },
{	 0x173D,  0x10AC,  0x0CA2,  0x0A1C,  0x0898,  0x0794,  0x0692,  0x0590, },
{	 0x16C3,  0x1030,  0x0C26,  0x0A1F,  0x081A,  0x0716,  0x0614,  0x0591, },
{	 0x15CA,  0x0FB5,  0x0C29,  0x09A1,  0x081C,  0x0718,  0x0615,  0x0513, },
{	 0x1550,  0x0F39,  0x0BAC,  0x09A4,  0x081E,  0x069A,  0x0617,  0x0514, },
{	 0x14D5,  0x0EBD,  0x0B30,  0x0927,  0x07A1,  0x069C,  0x0599,  0x0516, },
{	 0x145B,  0x0E41,  0x0B33,  0x08AA,  0x07A3,  0x061E,  0x059A,  0x0498, },
{	 0x13E0,  0x0DC6,  0x0AB6,  0x08AC,  0x0725,  0x0620,  0x051C,  0x0499, },
{	 0x12E7,  0x0D4A,  0x0A3A,  0x082F,  0x0728,  0x0622,  0x051E,  0x049B, },
{	 0x126D,  0x0D4E,  0x0A3D,  0x0832,  0x06AA,  0x05A4,  0x0520,  0x049C, },
{	 0x11F3,  0x0CD2,  0x09C0,  0x07B4,  0x06AC,  0x05A6,  0x04A2,  0x041E, },
{	 0x1179,  0x0C57,  0x0943,  0x07B7,  0x062F,  0x0528,  0x04A4,  0x0420, },
{	 0x107E,  0x0BDB,  0x0947,  0x073A,  0x0631,  0x052A,  0x04A5,  0x03A2, },
{	 0x0FFE,  0x0B5F,  0x08CA,  0x073C,  0x05B3,  0x052C,  0x0427,  0x03A3, },
},{{	 0x07F2,  0x06F4,  0x0674,  0x05F6,  0x0576,  0x04F6,  0x0477,  0x0478, },
{	 0x0774,  0x06F5,  0x0676,  0x05F6,  0x0577,  0x04F8,  0x0478,  0x0478, },
{	 0x0776,  0x06F6,  0x05F7,  0x0578,  0x04F8,  0x04F8,  0x0479,  0x03F9, },
{	 0x0777,  0x0678,  0x05F8,  0x0578,  0x04F9,  0x047A,  0x047A,  0x03FA, },
{	 0x06F8,  0x0679,  0x05FA,  0x057A,  0x04FA,  0x047A,  0x047A,  0x03FB, },
{	 0x06FA,  0x067A,  0x05FA,  0x057B,  0x04FB,  0x047C,  0x03FC,  0x03FC, },
{	 0x06FC,  0x05FC,  0x057C,  0x04FC,  0x04FC,  0x047C,  0x03FC,  0x03FC, },
{	 0x06FC,  0x05FD,  0x057D,  0x04FD,  0x047E,  0x047E,  0x03FE,  0x037E, },
{	 0x067E,  0x05FE,  0x057E,  0x04FE,  0x047E,  0x03FE,  0x03FE,  0x037E, },
{	 0x0680,  0x0600,  0x0580,  0x0500,  0x0480,  0x0400,  0x0400,  0x0380, },
{	 0x0681,  0x0581,  0x0500,  0x0480,  0x0480,  0x0400,  0x0380,  0x0380, },
{	 0x0602,  0x0582,  0x0502,  0x0482,  0x0402,  0x0402,  0x0381,  0x0381, },
{	 0x0604,  0x0584,  0x0503,  0x0482,  0x0402,  0x0402,  0x0382,  0x0382, },
{	 0x0606,  0x0584,  0x0504,  0x0484,  0x0404,  0x0384,  0x0383,  0x0302, },
{	 0x0587,  0x0506,  0x0486,  0x0485,  0x0404,  0x0384,  0x0384,  0x0304, },
{	 0x0588,  0x0508,  0x0486,  0x0406,  0x0406,  0x0385,  0x0304,  0x0304, },
{	 0x058A,  0x0509,  0x0488,  0x0408,  0x0386,  0x0386,  0x0306,  0x0306, },
{	 0x058B,  0x048A,  0x0489,  0x0408,  0x0388,  0x0387,  0x0306,  0x0306, },
{	 0x050C,  0x048C,  0x040A,  0x040A,  0x0388,  0x0308,  0x0308,  0x0287, },
{	 0x050E,  0x048C,  0x040C,  0x038A,  0x038A,  0x0309,  0x0308,  0x0288, },
{	 0x0510,  0x048E,  0x040D,  0x038C,  0x038A,  0x030A,  0x030A,  0x0288, },
{	 0x0491,  0x0410,  0x040E,  0x038D,  0x030C,  0x030B,  0x028A,  0x028A, },
{	 0x0492,  0x0410,  0x038F,  0x038E,  0x030D,  0x030C,  0x028C,  0x028A, },
{	 0x0494,  0x0412,  0x0390,  0x0310,  0x030E,  0x028D,  0x028C,  0x028C, },
{	 0x0416,  0x0414,  0x0392,  0x0310,  0x030F,  0x028E,  0x028D,  0x020C, },
{	 0x0416,  0x0394,  0x0392,  0x0312,  0x0290,  0x028F,  0x028E,  0x020D, },
{	 0x0418,  0x0396,  0x0314,  0x0312,  0x0291,  0x0290,  0x020F,  0x020E, },
{	 0x041A,  0x0397,  0x0316,  0x0314,  0x0292,  0x0291,  0x0210,  0x020E, },
{	 0x039B,  0x0318,  0x0316,  0x0294,  0x0294,  0x0212,  0x0210,  0x0210, },
{	 0x039C,  0x031A,  0x0318,  0x0296,  0x0294,  0x0213,  0x0212,  0x0210, },
{	 0x039E,  0x031B,  0x0299,  0x0297,  0x0216,  0x0214,  0x0212,  0x0192, },
{	 0x0320,  0x031C,  0x029A,  0x0298,  0x0216,  0x0214,  0x0194,  0x0192, },
},{{	 0x03F8,  0x03F8,  0x0378,  0x0378,  0x02F9,  0x02FA,  0x02FA,  0x027A, },
{	 0x03F8,  0x0379,  0x037A,  0x037A,  0x02FA,  0x02FA,  0x02FA,  0x027A, },
{	 0x03FA,  0x037A,  0x037A,  0x02FA,  0x02FA,  0x02FA,  0x027A,  0x027A, },
{	 0x03FA,  0x037A,  0x037A,  0x02FA,  0x02FB,  0x02FC,  0x027C,  0x027C, },
{	 0x037C,  0x037C,  0x037C,  0x02FC,  0x02FC,  0x02FC,  0x027C,  0x027C, },
{	 0x037C,  0x037C,  0x02FC,  0x02FC,  0x02FC,  0x027C,  0x027C,  0x027C, },
{	 0x037C,  0x037C,  0x02FD,  0x02FD,  0x02FD,  0x027D,  0x027E,  0x027E, },
{	 0x037E,  0x037E,  0x02FE,  0x02FE,  0x027E,  0x027E,  0x027E,  0x027E, },
{	 0x037E,  0x02FE,  0x02FE,  0x02FE,  0x027E,  0x027E,  0x027E,  0x01FE, },
{	 0x0380,  0x0300,  0x02FF,  0x0280,  0x027F,  0x027F,  0x027F,  0x01FF, },
{	 0x0300,  0x0300,  0x0300,  0x0280,  0x0280,  0x0280,  0x0200,  0x0200, },
{	 0x0300,  0x0300,  0x0300,  0x0280,  0x0280,  0x0280,  0x0200,  0x0200, },
{	 0x0302,  0x0302,  0x0282,  0x0282,  0x0281,  0x0201,  0x0200,  0x0200, },
{	 0x0302,  0x0302,  0x0282,  0x0282,  0x0282,  0x0202,  0x0202,  0x0202, },
{	 0x0304,  0x0283,  0x0282,  0x0282,  0x0202,  0x0202,  0x0202,  0x0202, },
{	 0x0304,  0x0284,  0x0284,  0x0284,  0x0203,  0x0203,  0x0202,  0x0202, },
{	 0x0285,  0x0284,  0x0284,  0x0204,  0x0204,  0x0204,  0x0204,  0x0184, },
{	 0x0286,  0x0286,  0x0285,  0x0204,  0x0204,  0x0204,  0x0204,  0x0184, },
{	 0x0286,  0x0286,  0x0206,  0x0206,  0x0206,  0x0204,  0x0184,  0x0184, },
{	 0x0288,  0x0287,  0x0206,  0x0206,  0x0206,  0x0206,  0x0186,  0x0185, },
{	 0x0288,  0x0208,  0x0208,  0x0206,  0x0206,  0x0186,  0x0186,  0x0186, },
{	 0x0289,  0x0208,  0x0208,  0x0208,  0x0188,  0x0186,  0x0186,  0x0186, },
{	 0x020A,  0x020A,  0x0208,  0x0208,  0x0188,  0x0188,  0x0187,  0x0186, },
{	 0x020A,  0x020A,  0x020A,  0x0189,  0x0188,  0x0188,  0x0188,  0x0188, },
{	 0x020C,  0x020A,  0x020A,  0x018A,  0x018A,  0x0188,  0x0188,  0x0108, },
{	 0x020C,  0x020C,  0x018B,  0x018A,  0x018A,  0x018A,  0x0188,  0x0108, },
{	 0x020D,  0x018C,  0x018C,  0x018B,  0x018A,  0x018A,  0x010A,  0x010A, },
{	 0x020E,  0x018D,  0x018C,  0x018C,  0x018C,  0x010A,  0x010A,  0x010A, },
{	 0x018E,  0x018E,  0x018E,  0x018C,  0x010C,  0x010C,  0x010A,  0x010A, },
{	 0x0190,  0x018E,  0x018E,  0x018E,  0x010C,  0x010C,  0x010C,  0x010B, },
{	 0x0190,  0x0190,  0x018E,  0x010E,  0x010E,  0x010C,  0x010C,  0x010C, },
{	 0x0192,  0x0190,  0x0110,  0x010E,  0x010E,  0x010E,  0x010C,  0x010C, },
},{{	 0x027A,  0x027A,  0x027A,  0x01FA,  0x01FA,  0x01FA,  0x01FA,  0x01FA, },
{	 0x027A,  0x027A,  0x027A,  0x01FA,  0x01FB,  0x01FB,  0x01FC,  0x01FC, },
{	 0x027B,  0x027B,  0x01FC,  0x01FC,  0x01FC,  0x01FC,  0x01FC,  0x01FC, },
{	 0x027C,  0x027C,  0x01FC,  0x01FC,  0x01FC,  0x01FC,  0x01FC,  0x017C, },
{	 0x027C,  0x01FC,  0x01FC,  0x01FC,  0x01FC,  0x01FC,  0x01FC,  0x017C, },
{	 0x027C,  0x01FC,  0x01FC,  0x01FC,  0x01FD,  0x01FD,  0x017D,  0x017D, },
{	 0x01FE,  0x01FE,  0x01FE,  0x01FE,  0x01FE,  0x017E,  0x017E,  0x017E, },
{	 0x01FE,  0x01FE,  0x01FE,  0x01FE,  0x01FE,  0x017E,  0x017E,  0x017E, },
{	 0x01FE,  0x01FE,  0x01FE,  0x01FE,  0x017E,  0x017E,  0x017E,  0x017E, },
{	 0x01FF,  0x01FF,  0x01FF,  0x01FE,  0x017F,  0x017F,  0x017E,  0x017E, },
{	 0x0200,  0x0200,  0x0200,  0x0180,  0x0180,  0x0180,  0x0180,  0x0180, },
{	 0x0200,  0x0200,  0x0180,  0x0180,  0x0180,  0x0180,  0x0180,  0x0180, },
{	 0x0200,  0x0200,  0x0180,  0x0180,  0x0180,  0x0180,  0x0180,  0x0180, },
{	 0x0202,  0x0182,  0x0181,  0x0181,  0x0181,  0x0180,  0x0180,  0x0180, },
{	 0x0202,  0x0182,  0x0182,  0x0182,  0x0182,  0x0182,  0x0182,  0x0102, },
{	 0x0182,  0x0182,  0x0182,  0x0182,  0x0182,  0x0182,  0x0102,  0x0102, },
{	 0x0183,  0x0182,  0x0182,  0x0182,  0x0182,  0x0182,  0x0102,  0x0102, },
{	 0x0184,  0x0184,  0x0184,  0x0183,  0x0182,  0x0102,  0x0102,  0x0102, },
{	 0x0184,  0x0184,  0x0184,  0x0184,  0x0104,  0x0104,  0x0104,  0x0103, },
{	 0x0184,  0x0184,  0x0184,  0x0104,  0x0104,  0x0104,  0x0104,  0x0104, },
{	 0x0186,  0x0185,  0x0184,  0x0104,  0x0104,  0x0104,  0x0104,  0x0104, },
{	 0x0186,  0x0186,  0x0106,  0x0106,  0x0104,  0x0104,  0x0104,  0x0104, },
{	 0x0186,  0x0106,  0x0106,  0x0106,  0x0106,  0x0106,  0x0105,  0x0104, },
{	 0x0107,  0x0106,  0x0106,  0x0106,  0x0106,  0x0106,  0x0106,  0x0106, },
{	 0x0108,  0x0108,  0x0107,  0x0106,  0x0106,  0x0106,  0x0106,  0x0086, },
{	 0x0108,  0x0108,  0x0108,  0x0108,  0x0106,  0x0106,  0x0106,  0x0086, },
{	 0x0108,  0x0108,  0x0108,  0x0108,  0x0108,  0x0088,  0x0086,  0x0086, },
{	 0x010A,  0x0109,  0x0108,  0x0108,  0x0108,  0x0088,  0x0088,  0x0087, },
{	 0x010A,  0x010A,  0x0109,  0x0108,  0x0088,  0x0088,  0x0088,  0x0088, },
{	 0x010A,  0x010A,  0x010A,  0x008A,  0x0088,  0x0088,  0x0088,  0x0088, },
{	 0x010B,  0x010A,  0x008A,  0x008A,  0x008A,  0x0089,  0x0088,  0x0088, },
{	 0x010C,  0x008C,  0x008A,  0x008A,  0x008A,  0x008A,  0x008A,  0x0088, },
},};
const uint16_t angle_10C_double[8][32][4] = {
{{	 0x017B,  0x017C,  0x017C,  0x017C, },
{	 0x017C,  0x017C,  0x017C,  0x017C, },
{	 0x017C,  0x017C,  0x017C,  0x017C, },
{	 0x017C,  0x017C,  0x017C,  0x017C, },
{	 0x017C,  0x017C,  0x017C,  0x00FD, },
{	 0x017E,  0x017E,  0x017E,  0x00FE, },
{	 0x017E,  0x017E,  0x00FE,  0x00FE, },
{	 0x017E,  0x017E,  0x00FE,  0x00FE, },
{	 0x017E,  0x017E,  0x00FE,  0x00FE, },
{	 0x017E,  0x00FE,  0x00FE,  0x00FE, },
{	 0x0180,  0x0100,  0x0100,  0x0100, },
{	 0x0180,  0x0100,  0x0100,  0x0100, },
{	 0x0100,  0x0100,  0x0100,  0x0100, },
{	 0x0100,  0x0100,  0x0100,  0x0100, },
{	 0x0101,  0x0101,  0x0100,  0x0100, },
{	 0x0102,  0x0102,  0x0102,  0x0101, },
{	 0x0102,  0x0102,  0x0102,  0x0102, },
{	 0x0102,  0x0102,  0x0102,  0x0082, },
{	 0x0102,  0x0102,  0x0102,  0x0082, },
{	 0x0104,  0x0103,  0x0082,  0x0082, },
{	 0x0104,  0x0104,  0x0084,  0x0082, },
{	 0x0104,  0x0084,  0x0084,  0x0084, },
{	 0x0104,  0x0084,  0x0084,  0x0084, },
{	 0x0085,  0x0084,  0x0084,  0x0084, },
{	 0x0086,  0x0085,  0x0084,  0x0084, },
{	 0x0086,  0x0086,  0x0085,  0x0084, },
{	 0x0086,  0x0086,  0x0086,  0x0086, },
{	 0x0086,  0x0086,  0x0086,  0x0086, },
{	 0x0088,  0x0086,  0x0086,  0x0086, },
{	 0x0088,  0x0088,  0x0086,  0x0086, },
{	 0x0088,  0x0088,  0x0087,  0x0006, },
{	 0x0088,  0x0088,  0x0008,  0x0007, },
},{{	 0x017C,  0x00FC,  0x00FC,  0x00FC, },
{	 0x00FC,  0x00FC,  0x00FC,  0x00FC, },
{	 0x00FC,  0x00FC,  0x00FC,  0x00FC, },
{	 0x00FC,  0x00FC,  0x00FC,  0x00FC, },
{	 0x00FD,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x007E, },
{	 0x0100,  0x0100,  0x0100,  0x0080, },
{	 0x0100,  0x0100,  0x0080,  0x0080, },
{	 0x0100,  0x0100,  0x0080,  0x0080, },
{	 0x0100,  0x0080,  0x0080,  0x0080, },
{	 0x0100,  0x0080,  0x0080,  0x0080, },
{	 0x0081,  0x0080,  0x0080,  0x0080, },
{	 0x0082,  0x0082,  0x0081,  0x0081, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0083,  0x0082,  0x0082,  0x0082, },
{	 0x0084,  0x0084,  0x0083,  0x0082, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0084,  0x0084,  0x0084,  0x0004, },
{	 0x0084,  0x0084,  0x0084,  0x0004, },
{	 0x0084,  0x0084,  0x0004,  0x0004, },
{	 0x0086,  0x0004,  0x0004,  0x0004, },
{	 0x0006,  0x0006,  0x0005,  0x0004, },
{	 0x0006,  0x0006,  0x0006,  0x0005, },
{	 0x0006,  0x0006,  0x0006,  0x0006, },
{	 0x0006,  0x0006,  0x0006,  0x0006, },
},{{	 0x00FC,  0x00FC,  0x00FC,  0x007C, },
{	 0x00FC,  0x00FC,  0x00FC,  0x007C, },
{	 0x00FC,  0x00FC,  0x00FC,  0x007C, },
{	 0x00FD,  0x00FD,  0x007E,  0x007E, },
{	 0x00FE,  0x00FE,  0x007E,  0x007E, },
{	 0x00FE,  0x007E,  0x007E,  0x007E, },
{	 0x00FE,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x0080,  0x007F,  0x007F,  0x007F, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0082,  0x0081,  0x0081,  0x0080, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0002, },
{	 0x0082,  0x0082,  0x0002,  0x0002, },
{	 0x0082,  0x0002,  0x0002,  0x0002, },
{	 0x0082,  0x0002,  0x0002,  0x0002, },
{	 0x0003,  0x0002,  0x0002,  0x0002, },
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
{	 0x007C,  0x007D,  0x007D,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007F,  0x007F,  0x007F,  0x007E, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0000, },
{	 0x0080,  0x0080,  0x0000,  0x0000, },
{	 0x0080,  0x0080,  0x0000,  0x0000, },
{	 0x0080,  0x0000,  0x0000,  0x0000, },
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
{	 0x0004,  0x0004,  0x0004,  0x0002, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
},{{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007D,  0x007D, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0xFFFE, },
{	 0x007E,  0x007E,  0x007E,  0xFFFE, },
{	 0x007E,  0x007E,  0xFFFE,  0xFFFE, },
{	 0x007E,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0x0080,  0x0000,  0x0000,  0x0000, },
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
{	 0x0003,  0x0002,  0x0002,  0x0002, },
{	 0x0004,  0x0004,  0x0003,  0x0002, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0xFF84,  0xFF84, },
},{{	 0x007C,  0x007C,  0x007C,  0x007D, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0xFFFE, },
{	 0x007E,  0x007E,  0xFFFE,  0xFFFE, },
{	 0x007E,  0x007E,  0xFFFE,  0xFFFE, },
{	 0x007E,  0xFFFE,  0xFFFE,  0xFFFE, },
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
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0002,  0x0001,  0x0000, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0xFF82,  0xFF82, },
{	 0x0002,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF84,  0xFF83,  0xFF82,  0xFF82, },
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
{	 0x0000,  0xFFFF,  0xFFFF,  0xFFFF, },
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
{	 0x0002,  0x0001,  0x0000,  0x0000, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0xFF82,  0xFF82, },
{	 0x0002,  0xFF82,  0xFF82,  0xFF82, },
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
{	 0xFFFF,  0xFFFF,  0xFFFF,  0xFFFE, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0000,  0x0000,  0xFF80,  0xFF80, },
{	 0x0001,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF81, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
},};
