#include "angles_common.h"
const uint16_t angle_03F_single[4][4][8][8] = {
{{{	 0x1F79,  0xFA81,  0xFA80,  0xFBFF,  0xFD7F,  0xFE00,  0xFE80,  0xFEFF, },
{	 0x1600,  0xF9FE,  0xFA00,  0xFC7F,  0xFD7F,  0xFDFF,  0xFE7F,  0xFEFF, },
{	 0x1683,  0xF8FE,  0xFA7F,  0xFC7E,  0xFD7F,  0xFE7E,  0xFE7F,  0xFE7F, },
{	 0x1708,  0xF87C,  0xFA7D,  0xFC7E,  0xFD7F,  0xFE7E,  0xFE7F,  0xFEFF, },
{	 0x170A,  0xF77C,  0xFAFC,  0xFC7E,  0xFDFD,  0xFDFF,  0xFE7F,  0xFEFE, },
{	 0x178E,  0xF6FA,  0xFAFC,  0xFC7D,  0xFDFD,  0xFDFF,  0xFEFE,  0xFEFE, },
{	 0x1692,  0xF778,  0xFAFB,  0xFC7D,  0xFDFD,  0xFE7E,  0xFE7E,  0xFEFF, },
{	 0x1615,  0xF777,  0xFAFB,  0xFCFB,  0xFDFD,  0xFE7E,  0xFEFE,  0xFEFE, },
},{{	 0x1CA1,  0xF7F4,  0xFAFB,  0xFD7B,  0xFD7D,  0xFE7D,  0xFEFE,  0xFEFE, },
{	 0x149D,  0xF7F4,  0xFB79,  0xFD7A,  0xFDFD,  0xFE7D,  0xFE7D,  0xFF7F, },
{	 0x13A0,  0xF872,  0xFB79,  0xFD7A,  0xFDFC,  0xFE7D,  0xFEFD,  0xFEFE, },
{	 0x1323,  0xF872,  0xFBF8,  0xFD7A,  0xFDFB,  0xFE7D,  0xFEFD,  0xFF7D, },
{	 0x1228,  0xF8F0,  0xFBF6,  0xFD7A,  0xFDFB,  0xFEFC,  0xFEFD,  0xFEFE, },
{	 0x11AA,  0xF8F0,  0xFC75,  0xFD79,  0xFDFB,  0xFEFC,  0xFEFC,  0xFEFE, },
{	 0x112E,  0xF96E,  0xFC74,  0xFD79,  0xFE7B,  0xFE7B,  0xFEFD,  0xFF7D, },
{	 0x1032,  0xF96D,  0xFC74,  0xFDF8,  0xFE7A,  0xFEFB,  0xFEFD,  0xFEFD, },
},{{	 0x14C8,  0xF9EB,  0xFC73,  0xFDF8,  0xFE7A,  0xFEFB,  0xFEFC,  0xFF7D, },
{	 0x0EB9,  0xFA68,  0xFC74,  0xFDF7,  0xFE7A,  0xFEFB,  0xFF7B,  0xFEFD, },
{	 0x0E3D,  0xFA68,  0xFCF2,  0xFDF7,  0xFE79,  0xFEFB,  0xFF7B,  0xFF7D, },
{	 0x0D40,  0xFAE6,  0xFCF2,  0xFDF6,  0xFEF9,  0xFEFA,  0xFEFC,  0xFF7C, },
{	 0x0CC4,  0xFAE5,  0xFD71,  0xFDF5,  0xFEF9,  0xFEFA,  0xFF7B,  0xFF7C, },
{	 0x0BC7,  0xFB65,  0xFD6F,  0xFDF5,  0xFEF9,  0xFEF9,  0xFF7B,  0xFF7D, },
{	 0x0B49,  0xFB65,  0xFDED,  0xFDF6,  0xFEF8,  0xFF79,  0xFF7B,  0xFF7B, },
{	 0x0A4F,  0xFBE2,  0xFD6E,  0xFEF3,  0xFE79,  0xFF79,  0xFF7B,  0xFF7B, },
},{{	 0x0CEE,  0xFBE2,  0xFDED,  0xFE74,  0xFF76,  0xFEFA,  0xFF7A,  0xFF7C, },
{	 0x08D7,  0xFCDD,  0xFDEC,  0xFEF4,  0xFEF6,  0xFF79,  0xFF7A,  0xFF7B, },
{	 0x0859,  0xFC5F,  0xFE6B,  0xFEF3,  0xFEF6,  0xFF79,  0xFF7A,  0xFF7B, },
{	 0x075D,  0xFD5C,  0xFE6B,  0xFEF2,  0xFEF6,  0xFF78,  0xFF7B,  0xFFFB, },
{	 0x06DB,  0xFD5F,  0xFE6B,  0xFEF1,  0xFF75,  0xFF79,  0xFF7A,  0xFF7A, },
{	 0x065B,  0xFD63,  0xFEE9,  0xFEF2,  0xFF75,  0xFF78,  0xFF79,  0xFFFB, },
{	 0x0559,  0xFD67,  0xFEE9,  0xFF70,  0xFF75,  0xFF78,  0xFFF9,  0xFF7B, },
{	 0x04D7,  0xFDEB,  0xFEE7,  0xFF70,  0xFF75,  0xFF78,  0xFFF9,  0xFFF9, },
},},{{{	 0x087E,  0xFEFF,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F, },
{	 0x0380,  0xFF7E,  0xFF00,  0xFF7F,  0xFF7F,  0xFF7F,  0xFFFF,  0xFF7E, },
{	 0x0381,  0xFEFF,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0xFFFF, },
{	 0x0301,  0xFF7E,  0xFF7E,  0xFEFF,  0xFFFF,  0xFF7F,  0xFF7F,  0xFFFF, },
{	 0x0301,  0xFEFF,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0xFFFF,  0xFF7E, },
{	 0x0302,  0xFF7F,  0xFF7E,  0xFF7E,  0xFF7F,  0xFF7F,  0xFF7F,  0xFFFF, },
{	 0x0302,  0xFEFE,  0xFF7F,  0xFF7F,  0xFF7F,  0xFFFE,  0xFF7E,  0xFFFF, },
{	 0x0283,  0xFF7F,  0xFF7E,  0xFF7E,  0xFF7F,  0xFF7F,  0xFFFF,  0xFF7F, },
},{{	 0x0688,  0xFEFD,  0xFF7F,  0xFFFF,  0xFF7E,  0xFF7E,  0xFFFF,  0xFF7F, },
{	 0x0283,  0xFF7F,  0xFF7E,  0xFF7E,  0xFF7F,  0xFFFF,  0xFF7E,  0xFFFE, },
{	 0x0285,  0xFF7D,  0xFF7F,  0xFF7F,  0xFF7D,  0xFF7F,  0xFFFF,  0xFF7F, },
{	 0x0284,  0xFF7E,  0xFF7E,  0xFF7E,  0xFFFF,  0xFF7E,  0xFFFE,  0xFF7F, },
{	 0x0285,  0xFF7E,  0xFF7E,  0xFF7E,  0xFF7E,  0xFFFF,  0xFF7F,  0xFFFD, },
{	 0x0207,  0xFF7D,  0xFF7E,  0xFFFE,  0xFF7F,  0xFF7D,  0xFFFF,  0xFFFF, },
{	 0x0205,  0xFF7E,  0xFF7E,  0xFF7E,  0xFFFE,  0xFF7F,  0xFFFD,  0xFF7F, },
{	 0x0207,  0xFF7D,  0xFFFD,  0xFF7F,  0xFF7E,  0xFFFE,  0xFF7F,  0xFFFE, },
},{{	 0x0491,  0xFF7E,  0xFF7D,  0xFF7E,  0xFFFE,  0xFF7F,  0xFFFD,  0xFFFF, },
{	 0x0187,  0xFF7D,  0xFFFE,  0xFF7E,  0xFFFD,  0xFF7F,  0xFFFF,  0xFF7D, },
{	 0x0209,  0xFF7D,  0xFF7D,  0xFFFD,  0xFF7F,  0xFFFD,  0xFF7F,  0xFFFF, },
{	 0x0187,  0xFFFD,  0xFF7E,  0xFF7E,  0xFFFD,  0xFF7F,  0xFFFD,  0xFFFF, },
{	 0x0189,  0xFF7D,  0xFF7D,  0xFFFD,  0xFF7F,  0xFFFD,  0xFFFF,  0xFF7D, },
{	 0x018A,  0xFFFC,  0xFF7E,  0xFFFE,  0xFF7D,  0xFFFF,  0xFF7D,  0xFFFF, },
{	 0x0189,  0xFF7D,  0xFFFD,  0xFF7D,  0xFFFF,  0xFF7D,  0xFFFE,  0xFFFE, },
{	 0x010B,  0xFFFC,  0xFF7D,  0xFFFE,  0xFF7D,  0xFFFE,  0xFFFE,  0xFFFD, },
},{{	 0x029A,  0xFF7D,  0xFFFD,  0xFF7D,  0xFFFE,  0xFFFE,  0xFF7D,  0xFFFF, },
{	 0x010B,  0xFFFD,  0xFF7C,  0xFFFE,  0xFFFD,  0xFF7D,  0xFFFF,  0xFFFD, },
{	 0x010C,  0xFF7C,  0xFFFD,  0xFFFD,  0xFF7D,  0xFFFF,  0xFFFD,  0xFFFE, },
{	 0x008C,  0xFFFD,  0xFF7D,  0xFFFD,  0xFFFD,  0xFFFD,  0xFFFD,  0xFF7F, },
{	 0x010D,  0xFF7B,  0xFFFD,  0xFFFD,  0xFFFD,  0xFF7E,  0xFFFE,  0xFFFD, },
{	 0x008D,  0xFFFD,  0xFFFD,  0xFF7D,  0xFFFD,  0xFFFD,  0xFFFD,  0xFFFF, },
{	 0x008D,  0xFFFB,  0xFF7D,  0xFFFD,  0xFFFD,  0xFFFD,  0xFFFE,  0xFF7E, },
{	 0x008E,  0xFFFC,  0xFFFD,  0xFFFC,  0xFFFD,  0xFF7E,  0xFFFD,  0xFFFD, },
},},{{{	 0x047E,  0xFF7F,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x017F,  0xFF7F,  0xFFFF,  0xFF7F,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x0101,  0xFFFF,  0xFF7F,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x00FF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x0180,  0xFF7E,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0101,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFF7E,  0xFFFF,  0xFFFE, },
{	 0x0101,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x0100,  0xFF7E,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
},{{	 0x0384,  0xFF7F,  0xFFFF,  0xFF7E,  0xFFFE,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x0101,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7E,  0xFFFE, },
{	 0x0102,  0xFFFE,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x0101,  0xFF7F,  0xFFFE,  0xFFFE,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFF, },
{	 0x0082,  0xFFFE,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFD, },
{	 0x0103,  0xFFFF,  0xFF7E,  0xFFFE,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x0101,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7D,  0xFFFF,  0xFFFF,  0xFFFF, },
},{{	 0x020A,  0xFFFD,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF, },
{	 0x0083,  0xFFFF,  0xFF7D,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7D, },
{	 0x0103,  0xFF7F,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0083,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFE,  0xFF7E,  0xFFFF,  0xFFFF, },
{	 0x0083,  0xFFFF,  0xFFFD,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFD,  0xFFFF, },
{	 0x0083,  0xFFFF,  0xFF7F,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFD, },
{	 0x0085,  0xFF7D,  0xFFFF,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x0083,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF,  0xFF7D,  0xFFFF,  0xFFFF, },
},{{	 0x010E,  0xFFFF,  0xFFFE,  0xFFFE,  0xFF7F,  0xFFFF,  0xFFFD,  0xFFFF, },
{	 0x0085,  0xFFFD,  0xFF7F,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFD, },
{	 0x0005,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFF, },
{	 0x0003,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFE,  0xFFFE,  0xFF7F, },
{	 0x0085,  0xFFFD,  0xFFFF,  0xFFFD,  0xFF7F,  0xFFFF,  0xFFFD,  0xFFFF, },
{	 0x0085,  0xFF7F,  0xFFFD,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFD, },
{	 0x0005,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF, },
{	 0x0005,  0xFFFD,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF, },
},},{{{	 0x02FE,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFFFE,  0xFFFF,  0xFFFE,  0xFF7F,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
},{{	 0x0202,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFF7F,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF,  0xFF7F, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFE, },
{	 0x0080,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFD,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFF7F,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
},{{	 0x0186,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF, },
{	 0x0001,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFD, },
{	 0x0002,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFD,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFF7E,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF, },
{	 0x0002,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFD, },
{	 0x0003,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
},{{	 0x008A,  0xFFFF,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7D,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF, },
{	 0x0003,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFE,  0xFFFE, },
{	 0x0003,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0001,  0xFFFF,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0001,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF,  0xFF7F, },
{	 0x0083,  0xFFFD,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF, },
},},};
const uint16_t angle_03F_double[8][4][8][4] = {
{{{	 0x01FE,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0082,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0x0000,  0xFF80, },
{	 0x0081,  0x0000,  0xFF7F,  0x0000, },
},{{	 0x0182,  0xFF80,  0x0000,  0xFFFF, },
{	 0x0081,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0xFF80, },
{	 0x0082,  0x0000,  0xFF80,  0xFFFE, },
{	 0x0082,  0xFF80,  0x0000,  0x0000, },
},{{	 0x0104,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFE, },
{	 0x0002,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0008,  0xFFFE,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFE,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0xFFFE, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFE,  0xFF80,  0x0000, },
{	 0x0002,  0xFFFE,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFE,  0x0000, },
},},{{{	 0x017E,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0082,  0xFF80,  0x0000,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0101,  0xFFFF,  0x0000,  0xFF80, },
{	 0x0082,  0x0000,  0xFF7F,  0x0000, },
{	 0x0081,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
},{{	 0x0084,  0x0000,  0xFFFF,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0xFFFF, },
{	 0x0001,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFE,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFE,  0x0000, },
},{{	 0x0006,  0x0000,  0x0000,  0xFFFE, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0xFF80,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFE,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFE,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0xFFFF, },
},},{{{	 0x00FE,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0080,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0x0000,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
},{{	 0x0082,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0004,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0082,  0xFF7E,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFE,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFE, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},},{{{	 0x00FE,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0080,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0x0000,  0xFFFF,  0xFF80, },
{	 0x0082,  0x0000,  0xFF80,  0xFFFF, },
{	 0x0081,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFE,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFF, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
},{{	 0x0004,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFE,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFE,  0x0000, },
},},{{{	 0x007E,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0080,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0x0000, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0xFF80,  0x0000, },
{	 0x0002,  0xFFFE,  0x0000,  0x0000, },
},{{	 0xFF84,  0x0000,  0xFFFF,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},},{{{	 0x007E,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
},{{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0xFF82,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFF, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},},{{{	 0x007E,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0082,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
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
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0x0000, },
},{{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0xFF82,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},},{{{	 0x007E,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0x0000, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
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
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFF80,  0xFFFF, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0xFF82,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0x0000, },
},},};