#include "angles_common.h"
const uint16_t angle_10B_single[4][4][8][8] = {
{{{	 0x1F41,  0xF811,  0xFB08,  0xFC85,  0xFD84,  0xFE02,  0xFF01,  0xFF01, },
{	 0x16D8,  0xF80E,  0xFA88,  0xFC85,  0xFE03,  0xFE02,  0xFE81,  0xFF01, },
{	 0x175C,  0xF78D,  0xFB07,  0xFC84,  0xFD82,  0xFE82,  0xFE81,  0xFF01, },
{	 0x1760,  0xF70B,  0xFB06,  0xFC84,  0xFE02,  0xFE01,  0xFF01,  0xFF00, },
{	 0x1764,  0xF70B,  0xFA85,  0xFD03,  0xFE01,  0xFE01,  0xFF01,  0xFF00, },
{	 0x16E9,  0xF709,  0xFB03,  0xFD02,  0xFD82,  0xFE80,  0xFE81,  0xFEFF, },
{	 0x16EE,  0xF707,  0xFB03,  0xFD01,  0xFE01,  0xFE80,  0xFE80,  0xFF00, },
{	 0x1672,  0xF785,  0xFB02,  0xFD01,  0xFD81,  0xFE7F,  0xFF00,  0xFF00, },
},{{	 0x1D71,  0xF783,  0xFB02,  0xFD00,  0xFE00,  0xFE7F,  0xFEFF,  0xFF01, },
{	 0x157A,  0xF782,  0xFB80,  0xFD00,  0xFDFF,  0xFE7F,  0xFE80,  0xFEFF, },
{	 0x157F,  0xF800,  0xFB00,  0xFCFF,  0xFDFF,  0xFE7F,  0xFEFF,  0xFEFE, },
{	 0x1504,  0xF7FF,  0xFB7E,  0xFCFE,  0xFDFF,  0xFE7F,  0xFEFE,  0xFEFF, },
{	 0x148A,  0xF7FB,  0xFB7D,  0xFD7E,  0xFDFE,  0xFE7F,  0xFE7E,  0xFF7F, },
{	 0x140E,  0xF879,  0xFB7D,  0xFCFD,  0xFDFE,  0xFE7E,  0xFEFE,  0xFEFF, },
{	 0x1412,  0xF878,  0xFB7B,  0xFD7D,  0xFDFD,  0xFE7E,  0xFEFE,  0xFEFE, },
{	 0x1397,  0xF877,  0xFBF9,  0xFCFD,  0xFE7C,  0xFE7E,  0xFEFE,  0xFEFE, },
},{{	 0x19A3,  0xF8F4,  0xFB7A,  0xFD7B,  0xFDFD,  0xFE7D,  0xFEFE,  0xFF7D, },
{	 0x12A1,  0xF8F2,  0xFBF9,  0xFCFA,  0xFE7C,  0xFE7D,  0xFEFE,  0xFEFD, },
{	 0x1324,  0xF871,  0xFBF8,  0xFD7A,  0xFDFC,  0xFEFC,  0xFEFE,  0xFEFD, },
{	 0x12A8,  0xF8EF,  0xFBF7,  0xFD7A,  0xFDFB,  0xFE7D,  0xFEFD,  0xFF7D, },
{	 0x122C,  0xF8EF,  0xFBF5,  0xFD79,  0xFE7A,  0xFE7D,  0xFEFC,  0xFF7D, },
{	 0x11B1,  0xF8ED,  0xFC74,  0xFD79,  0xFDFA,  0xFEFC,  0xFEFC,  0xFEFD, },
{	 0x11B5,  0xF96B,  0xFBF4,  0xFD77,  0xFE7A,  0xFE7C,  0xFF7C,  0xFEFC, },
{	 0x113A,  0xF969,  0xFC73,  0xFD77,  0xFE7A,  0xFE7B,  0xFEFB,  0xFF7D, },
},{{	 0x1653,  0xF967,  0xFC73,  0xFD76,  0xFE79,  0xFEFB,  0xFEFB,  0xFF7D, },
{	 0x1042,  0xF9E6,  0xFC71,  0xFD76,  0xFE78,  0xFEFB,  0xFEFB,  0xFEFD, },
{	 0x1046,  0xF9E5,  0xFC6F,  0xFDF6,  0xFE77,  0xFE7B,  0xFEFB,  0xFF7C, },
{	 0x0FCC,  0xF9E2,  0xFCEE,  0xFD76,  0xFE77,  0xFEFA,  0xFEFB,  0xFF7B, },
{	 0x0F51,  0xFA60,  0xFC6E,  0xFDF4,  0xFE78,  0xFEF9,  0xFEFB,  0xFF7B, },
{	 0x0ED5,  0xFA5E,  0xFC6E,  0xFDF3,  0xFE77,  0xFEF9,  0xFF7B,  0xFEFB, },
{	 0x0F57,  0xF9DF,  0xFCEC,  0xFDF3,  0xFE76,  0xFEF9,  0xFEFB,  0xFF7B, },
{	 0x0EDC,  0xFA5C,  0xFC6C,  0xFDF2,  0xFEF6,  0xFEF8,  0xFEFA,  0xFF7B, },
},},{{{	 0x0770,  0xFF00,  0xFF80,  0xFF80,  0xFF80,  0xFFFF,  0xFF81,  0xFF7F, },
{	 0x037B,  0xFEFF,  0xFF81,  0xFF7F,  0xFF80,  0xFF80,  0xFFFF,  0xFF7F, },
{	 0x02FC,  0xFF80,  0xFF7F,  0xFF81,  0xFF7F,  0xFF7F,  0x0001,  0xFF7F, },
{	 0x02FB,  0xFF80,  0xFF80,  0xFF7F,  0xFF81,  0xFF7F,  0xFF7F,  0xFFFF, },
{	 0x02FD,  0xFF7F,  0xFF01,  0xFF7F,  0xFFFF,  0xFF7F,  0xFF80,  0x0000, },
{	 0x02FC,  0xFF00,  0xFF7F,  0xFF80,  0xFF80,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x02FD,  0xFF01,  0xFF7F,  0xFF7F,  0xFF7F,  0xFFFF,  0xFF80,  0xFF80, },
{	 0x02FD,  0xFF7F,  0xFF80,  0xFF80,  0xFF7F,  0xFF7F,  0xFFFF,  0xFF7F, },
},{{	 0x067C,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0x0000,  0xFF7F, },
{	 0x02FF,  0xFF80,  0xFEFF,  0xFFFF,  0xFF7F,  0xFF7F,  0xFFFF,  0xFF7F, },
{	 0x02FF,  0xFEFF,  0xFF7F,  0xFF7F,  0xFFFF,  0xFF7F,  0xFF7F,  0xFFFF, },
{	 0x0281,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0281,  0xFF7F,  0xFF7F,  0xFF7E,  0xFF7F,  0xFFFE,  0xFF7F,  0xFFFF, },
{	 0x0282,  0xFF7F,  0xFF7E,  0xFF7F,  0xFF7F,  0xFFFF,  0xFF7F,  0xFF7F, },
{	 0x0301,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7E,  0xFF7F,  0xFFFE,  0xFF7F, },
{	 0x0283,  0xFF7F,  0xFF7E,  0xFFFE,  0xFF7F,  0xFF7F,  0xFFFF,  0xFF7F, },
},{{	 0x0588,  0xFF7E,  0xFF7E,  0xFF7F,  0xFFFF,  0xFF7E,  0xFFFE,  0xFF7F, },
{	 0x0284,  0xFF7E,  0xFF7F,  0xFF7E,  0xFFFE,  0xFF7F,  0xFF7F,  0xFFFE, },
{	 0x0284,  0xFF7F,  0xFF7E,  0xFF7E,  0xFF7F,  0xFFFE,  0xFF7E,  0xFFFF, },
{	 0x0285,  0xFF7D,  0xFF7F,  0xFF7E,  0xFF7E,  0xFFFF,  0xFF7F,  0xFFFE, },
{	 0x0206,  0xFF7D,  0xFF7F,  0xFFFD,  0xFF7F,  0xFF7E,  0xFFFE,  0xFFFF, },
{	 0x0206,  0xFF7E,  0xFF7D,  0xFF7F,  0xFFFD,  0xFF7F,  0xFFFF,  0xFF7D, },
{	 0x0287,  0xFF7E,  0xFF7E,  0xFF7D,  0xFFFF,  0xFF7E,  0xFFFE,  0xFF7F, },
{	 0x0287,  0xFF7D,  0xFF7E,  0xFF7E,  0xFFFD,  0xFF7F,  0xFFFE,  0xFF7E, },
},{{	 0x0494,  0xFF7D,  0xFFFD,  0xFF7E,  0xFF7E,  0xFFFE,  0xFF7E,  0xFFFF, },
{	 0x0208,  0xFF7D,  0xFF7E,  0xFFFD,  0xFF7E,  0xFFFE,  0xFF7E,  0xFFFE, },
{	 0x0209,  0xFF7D,  0xFF7E,  0xFFFE,  0xFF7D,  0xFFFE,  0xFF7E,  0xFFFE, },
{	 0x020A,  0xFF7D,  0xFF7D,  0xFF7D,  0xFFFE,  0xFF7E,  0xFFFE,  0xFFFE, },
{	 0x020B,  0xFF7C,  0xFF7E,  0xFF7D,  0xFFFD,  0xFF7E,  0xFFFE,  0xFF7E, },
{	 0x020B,  0xFF7C,  0xFFFD,  0xFF7E,  0xFFFE,  0xFF7D,  0xFFFE,  0xFF7E, },
{	 0x020B,  0xFF7D,  0xFFFD,  0xFF7D,  0xFF7D,  0xFFFE,  0xFFFE,  0xFF7D, },
{	 0x020D,  0xFF7D,  0xFF7C,  0xFFFD,  0xFF7E,  0xFFFD,  0xFF7D,  0xFFFF, },
},},{{{	 0x03F6,  0xFF7F,  0x0001,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x017F,  0xFF7F,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF80,  0x0000, },
{	 0x00FD,  0xFFFF,  0xFFFF,  0xFF80,  0x0000,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x00FE,  0x0000,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x00FF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0x0000,  0x0000, },
{	 0x00FD,  0xFFFF,  0xFF80,  0x0000,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x00FF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x00FF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0x0000,  0xFF7F, },
},{{	 0x037D,  0xFF80,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x017F,  0xFF7F,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x00FF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0101,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x00FF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x0101,  0xFFFF,  0xFF7E,  0xFFFF,  0xFFFF,  0xFF7E,  0xFFFF,  0xFFFF, },
{	 0x0101,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x0100,  0xFF7E,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
},{{	 0x0304,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7E,  0xFFFE,  0xFFFF,  0xFFFF, },
{	 0x0101,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFE,  0xFF7E,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x0101,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFE,  0xFFFE,  0xFFFF,  0xFF7F, },
{	 0x0103,  0xFFFE,  0xFF7E,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFE, },
{	 0x0102,  0xFFFF,  0xFF7F,  0xFFFE,  0xFFFE,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0102,  0xFFFE,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7D,  0xFFFF,  0xFFFF, },
{	 0x0103,  0xFF7F,  0xFFFD,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFD, },
},{{	 0x028A,  0xFF7F,  0xFFFF,  0xFFFE,  0xFF7E,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0083,  0xFFFE,  0xFFFE,  0xFFFF,  0xFF7F,  0xFFFD,  0xFFFF,  0xFFFF, },
{	 0x0083,  0xFFFF,  0xFFFE,  0xFFFE,  0xFF7F,  0xFFFF,  0xFFFE,  0xFFFE, },
{	 0x0085,  0xFFFD,  0xFFFF,  0xFF7F,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0083,  0xFFFF,  0xFFFD,  0xFF7F,  0xFFFF,  0xFFFE,  0xFFFE,  0xFF7F, },
{	 0x0104,  0xFFFE,  0xFF7F,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFE,  0xFF7E, },
{	 0x0105,  0xFFFE,  0xFF7E,  0xFFFF,  0xFFFD,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0103,  0xFF7F,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFE,  0xFF7E,  0xFFFF, },
},},{{{	 0x0279,  0x0000,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x00FF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x00FF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF80,  0x0000, },
{	 0x00FD,  0xFF7F,  0x0000,  0x0000,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0x0000,  0xFFFF, },
{	 0x007F,  0x0000,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
},{{	 0x01FE,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFF7F,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFE,  0xFFFF,  0xFF7F, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F, },
},{{	 0x0182,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0080,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFE,  0xFF7E,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFE,  0xFF7E,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFE, },
},{{	 0x0188,  0xFFFD,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFF7F,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF, },
{	 0x0002,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFD, },
{	 0x0003,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFD,  0xFF7F,  0xFFFF, },
{	 0x0083,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFE,  0xFFFE, },
},},};
const uint16_t angle_10B_double[8][4][8][4] = {
{{{	 0x017A,  0x0000,  0x0000,  0x0001, },
{	 0xFFFF,  0x0001,  0x0001,  0xFF80, },
{	 0x0080,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0x0000,  0xFF80,  0x0001, },
{	 0x0080,  0x0001,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
},{{	 0x017E,  0xFF80,  0x0000,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0x0000, },
},{{	 0x0102,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0081,  0xFFFF,  0x0000,  0xFF80, },
{	 0x0082,  0x0000,  0xFF7E,  0x0000, },
{	 0x0082,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
},{{	 0x0106,  0xFF7E,  0x0000,  0x0000, },
{	 0x0082,  0xFF80,  0xFFFF,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0xFFFF, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0xFFFF, },
},},{{{	 0x00FC,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0001, },
{	 0x0000,  0x0001,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
},{{	 0x00FE,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0082,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0081,  0x0000,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFE,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
},{{	 0x0084,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFE,  0x0000,  0xFF80, },
{	 0x0082,  0x0000,  0xFFFF,  0xFF7F, },
{	 0x0082,  0x0000,  0xFF80,  0xFFFF, },
{	 0x0081,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
},},{{{	 0x00FC,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0001, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x007E,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0080,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0x0000,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
},{{	 0x0084,  0xFF80,  0xFFFE,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFF, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFE,  0x0000, },
},},{{{	 0x007C,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0001, },
{	 0x0000,  0x0001,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x007E,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
},{{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0001,  0x0000,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFF, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},},{{{	 0x007C,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0001, },
{	 0x0000,  0x0001,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
},{{	 0x007E,  0xFF80,  0x0000,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0x0000,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFF, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},},{{{	 0x007C,  0x0000,  0xFF80,  0x0001, },
{	 0x0080,  0xFF81,  0x0000,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0xFFFE,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0x0000,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFF7F, },
},},{{{	 0xFFFD,  0x0001,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0xFFFE,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0x0000,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFF, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
},{{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},},{{{	 0xFFFE,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0xFFFE,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0xFF80, },
{	 0x0082,  0x0000,  0xFF80,  0xFFFF, },
},{{	 0x0002,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},},};