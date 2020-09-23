#include "angles_common.h"
const uint16_t angle_30F_single[4][4][8][8] = {
{{{	 0x1F79,  0xFB00,  0xFA00,  0xFC7F,  0xFD00,  0xFE7F,  0xFE7F,  0xFE7F, },
{	 0x1600,  0xFA00,  0xFA7E,  0xFC7F,  0xFD7F,  0xFE00,  0xFE7F,  0xFEFF, },
{	 0x1604,  0xF97D,  0xFA7E,  0xFC7F,  0xFD7E,  0xFDFF,  0xFE7F,  0xFEFE, },
{	 0x1688,  0xF8FC,  0xFA7E,  0xFC7E,  0xFD7E,  0xFE7E,  0xFE7F,  0xFEFF, },
{	 0x168B,  0xF7FB,  0xFAFD,  0xFC7D,  0xFD7E,  0xFE7E,  0xFE7F,  0xFEFF, },
{	 0x170E,  0xF779,  0xFAFC,  0xFC7D,  0xFDFD,  0xFDFF,  0xFEFE,  0xFEFE, },
{	 0x1692,  0xF6F9,  0xFAFB,  0xFCFD,  0xFDFD,  0xFDFE,  0xFEFE,  0xFEFE, },
{	 0x1616,  0xF776,  0xFAFB,  0xFCFC,  0xFDFD,  0xFE7E,  0xFE7D,  0xFEFF, },
},{{	 0x1D1F,  0xF776,  0xFB7A,  0xFCFC,  0xFDFC,  0xFE7D,  0xFEFE,  0xFEFD, },
{	 0x149D,  0xF7F4,  0xFB79,  0xFCFC,  0xFDFC,  0xFE7D,  0xFEFD,  0xFEFE, },
{	 0x141F,  0xF873,  0xFB79,  0xFCFB,  0xFE7B,  0xFE7D,  0xFEFD,  0xFEFF, },
{	 0x12A5,  0xF8F0,  0xFBF7,  0xFCFA,  0xFE7B,  0xFE7D,  0xFEFD,  0xFEFD, },
{	 0x12A7,  0xF8F1,  0xFBF7,  0xFD79,  0xFDFB,  0xFE7D,  0xFEFD,  0xFF7D, },
{	 0x112D,  0xF96D,  0xFC75,  0xFD79,  0xFDFB,  0xFEFD,  0xFEFC,  0xFEFE, },
{	 0x112D,  0xF96E,  0xFBF6,  0xFDF8,  0xFDFA,  0xFEFC,  0xFEFC,  0xFF7D, },
{	 0x0FB5,  0xF9EA,  0xFC74,  0xFDF8,  0xFE7A,  0xFE7C,  0xFF7C,  0xFEFD, },
},{{	 0x1546,  0xF9EB,  0xFC74,  0xFDF8,  0xFE79,  0xFEFB,  0xFEFD,  0xFF7D, },
{	 0x0EB7,  0xF9EB,  0xFCF3,  0xFDF7,  0xFE79,  0xFEFB,  0xFEFC,  0xFF7C, },
{	 0x0E3D,  0xFA68,  0xFCF2,  0xFDF7,  0xFE79,  0xFEFB,  0xFF7B,  0xFF7D, },
{	 0x0D3F,  0xFA68,  0xFD71,  0xFDF6,  0xFE79,  0xFEFB,  0xFF7B,  0xFF7D, },
{	 0x0CC3,  0xFAE5,  0xFD71,  0xFDF6,  0xFEF8,  0xFEFA,  0xFEFC,  0xFF7B, },
{	 0x0C47,  0xFAE5,  0xFD70,  0xFE75,  0xFEF8,  0xFEFA,  0xFF7B,  0xFF7C, },
{	 0x0ACC,  0xFBE2,  0xFD6F,  0xFE74,  0xFEF8,  0xFEF9,  0xFF7B,  0xFF7D, },
{	 0x0A4F,  0xFBE1,  0xFDED,  0xFE75,  0xFEF7,  0xFF79,  0xFF7B,  0xFF7B, },
},{{	 0x0CEF,  0xFC5F,  0xFDED,  0xFE74,  0xFEF7,  0xFF79,  0xFF7B,  0xFF7B, },
{	 0x08D6,  0xFCDE,  0xFDED,  0xFE73,  0xFF77,  0xFEF9,  0xFF7A,  0xFFFB, },
{	 0x07DB,  0xFCDC,  0xFE6B,  0xFE73,  0xFF77,  0xFF78,  0xFF7A,  0xFF7B, },
{	 0x075E,  0xFD5B,  0xFDEC,  0xFF71,  0xFEF7,  0xFF78,  0xFF7A,  0xFFFB, },
{	 0x065D,  0xFD5E,  0xFE6A,  0xFF71,  0xFEF7,  0xFF77,  0xFFFB,  0xFF7A, },
{	 0x05DC,  0xFDE1,  0xFE6A,  0xFF71,  0xFEF6,  0xFFF7,  0xFF7A,  0xFFFA, },
{	 0x04DB,  0xFDE5,  0xFEE9,  0xFF70,  0xFF76,  0xFF77,  0xFF79,  0xFFFB, },
{	 0x0459,  0xFE69,  0xFEE8,  0xFF70,  0xFF74,  0xFF78,  0xFFF9,  0xFF7B, },
},},{{{	 0x087C,  0xFF7F,  0xFF7F,  0xFEFF,  0xFF7F,  0xFFFF,  0xFF7F,  0xFF7F, },
{	 0x0381,  0xFEFF,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0xFFFF, },
{	 0x02FF,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0xFFFF, },
{	 0x0301,  0xFEFF,  0xFF7F,  0xFF7F,  0xFF7E,  0xFFFF,  0xFF7F,  0xFF7E, },
{	 0x0302,  0xFF7E,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0xFFFF,  0xFF7F, },
{	 0x0301,  0xFF7F,  0xFEFF,  0xFF7F,  0xFFFD,  0xFF7F,  0xFF7F,  0xFFFF, },
{	 0x0283,  0xFF7E,  0xFF7E,  0xFF7F,  0xFF7F,  0xFFFF,  0xFF7F,  0xFF7E, },
{	 0x0302,  0xFF7F,  0xFF7F,  0xFF7E,  0xFF7E,  0xFF7F,  0xFFFF,  0xFF7F, },
},{{	 0x0686,  0xFF7E,  0xFF7E,  0xFF7F,  0xFFFF,  0xFF7E,  0xFF7E,  0xFFFF, },
{	 0x0284,  0xFF7E,  0xFF7F,  0xFF7E,  0xFF7E,  0xFFFF,  0xFF7F,  0xFF7F, },
{	 0x0283,  0xFF7F,  0xFF7D,  0xFFFF,  0xFF7F,  0xFF7D,  0xFFFF,  0xFF7F, },
{	 0x0285,  0xFF7D,  0xFF7F,  0xFF7D,  0xFF7F,  0xFFFF,  0xFF7E,  0xFFFE, },
{	 0x0205,  0xFF7F,  0xFFFD,  0xFF7F,  0xFF7E,  0xFFFE,  0xFF7F,  0xFFFF, },
{	 0x0205,  0xFF7D,  0xFF7F,  0xFF7D,  0xFFFF,  0xFF7F,  0xFFFD,  0xFF7F, },
{	 0x0285,  0xFF7F,  0xFF7D,  0xFF7F,  0xFF7D,  0xFFFF,  0xFF7F,  0xFFFD, },
{	 0x0207,  0xFF7D,  0xFF7F,  0xFFFD,  0xFF7F,  0xFFFD,  0xFF7F,  0xFFFF, },
},{{	 0x0490,  0xFFFD,  0xFF7D,  0xFF7F,  0xFFFD,  0xFF7F,  0xFFFE,  0xFF7E, },
{	 0x0207,  0xFF7E,  0xFF7E,  0xFFFD,  0xFF7F,  0xFFFD,  0xFF7F,  0xFFFE, },
{	 0x0208,  0xFF7D,  0xFF7D,  0xFF7F,  0xFFFD,  0xFF7F,  0xFFFD,  0xFFFF, },
{	 0x0188,  0xFF7D,  0xFFFE,  0xFF7D,  0xFFFE,  0xFF7E,  0xFFFF,  0xFF7D, },
{	 0x0209,  0xFF7D,  0xFF7D,  0xFFFE,  0xFF7E,  0xFFFE,  0xFFFE,  0xFF7E, },
{	 0x018A,  0xFF7D,  0xFFFD,  0xFF7D,  0xFFFD,  0xFFFF,  0xFF7D,  0xFFFF, },
{	 0x0189,  0xFF7D,  0xFF7D,  0xFFFE,  0xFFFE,  0xFF7D,  0xFFFF,  0xFFFD, },
{	 0x010B,  0xFF7D,  0xFFFD,  0xFFFD,  0xFF7D,  0xFFFF,  0xFFFD,  0xFF7F, },
},{{	 0x0319,  0xFF7C,  0xFFFD,  0xFF7E,  0xFFFE,  0xFFFD,  0xFF7E,  0xFFFE, },
{	 0x010B,  0xFFFD,  0xFF7D,  0xFFFD,  0xFF7D,  0xFFFE,  0xFFFE,  0xFFFD, },
{	 0x010D,  0xFF7C,  0xFFFC,  0xFF7D,  0xFFFF,  0xFFFD,  0xFFFD,  0xFF7F, },
{	 0x010B,  0xFFFD,  0xFF7D,  0xFFFD,  0xFFFD,  0xFF7D,  0xFFFF,  0xFFFD, },
{	 0x010D,  0xFF7C,  0xFFFC,  0xFFFD,  0xFF7E,  0xFFFE,  0xFFFD,  0xFFFE, },
{	 0x008D,  0xFFFC,  0xFF7D,  0xFFFD,  0xFFFD,  0xFFFD,  0xFFFE,  0xFFFE, },
{	 0x008D,  0xFF7D,  0xFFFB,  0xFFFD,  0xFFFD,  0xFF7F,  0xFFFD,  0xFFFD, },
{	 0x008F,  0xFFFB,  0xFFFD,  0xFF7D,  0xFFFD,  0xFFFD,  0xFFFD,  0xFFFE, },
},},{{{	 0x04FC,  0xFF7F,  0xFFFF,  0xFF7F,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x0101,  0xFFFF,  0xFF7F,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x017F,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x017F,  0xFF7F,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0101,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFE,  0xFF7F,  0xFFFF,  0xFFFE, },
{	 0x0101,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x00FF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x0181,  0xFF7F,  0xFFFE,  0xFF7F,  0xFFFE,  0xFFFF,  0xFFFF,  0xFF7F, },
},{{	 0x0382,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7E,  0xFFFE, },
{	 0x0101,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x0101,  0xFF7F,  0xFFFE,  0xFFFE,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFE,  0xFFFE,  0xFFFF,  0xFF7F, },
{	 0x0102,  0xFFFE,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFD, },
{	 0x0103,  0xFFFF,  0xFF7D,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x0101,  0xFF7F,  0xFFFF,  0xFFFE,  0xFF7E,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0082,  0xFFFE,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF, },
},{{	 0x0288,  0xFFFF,  0xFF7D,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7D, },
{	 0x0103,  0xFF7F,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0082,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFD,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x0083,  0xFFFE,  0xFFFE,  0xFFFF,  0xFF7F,  0xFFFE,  0xFFFE,  0xFFFF, },
{	 0x0083,  0xFFFF,  0xFF7F,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFD, },
{	 0x0084,  0xFF7E,  0xFFFF,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x0083,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFF,  0xFF7D,  0xFFFF,  0xFFFF, },
{	 0x0083,  0xFFFF,  0xFFFE,  0xFFFE,  0xFF7F,  0xFFFF,  0xFFFD,  0xFFFF, },
},{{	 0x018E,  0xFFFD,  0xFF7F,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFD, },
{	 0x0085,  0xFF7E,  0xFFFE,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFF, },
{	 0x0003,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFD,  0xFF7F,  0xFFFF, },
{	 0x0085,  0xFFFD,  0xFFFF,  0xFFFD,  0xFF7F,  0xFFFF,  0xFFFD,  0xFFFF, },
{	 0x0085,  0xFFFD,  0xFF7F,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFD, },
{	 0x0005,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF, },
{	 0x0005,  0xFFFD,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF, },
{	 0x0005,  0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE,  0xFF7F,  0xFFFE,  0xFFFE, },
},},{{{	 0x02FC,  0x0000,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0080,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x00FF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFE,  0xFF7F,  0xFFFF,  0xFFFE, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
},{{	 0x0280,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFF7E,  0xFFFF,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0001,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFE,  0xFF7E,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFE,  0xFFFE,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFF7F,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0001,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF, },
},{{	 0x0184,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x0080,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFE,  0xFF7E,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0001,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF, },
{	 0x0002,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFE, },
{	 0x0002,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFFFD,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
},{{	 0x0108,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF, },
{	 0x0003,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFD, },
{	 0x0003,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0001,  0xFFFF,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0001,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFD,  0xFFFF,  0xFFFF, },
{	 0x0083,  0xFF7D,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFD,  0xFFFF, },
{	 0x0003,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFD, },
},},};
const uint16_t angle_30F_double[8][4][8][4] = {
{{{	 0x027D,  0xFF80,  0x0000,  0x0001, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0082,  0xFF80,  0xFFFF,  0x0000, },
{	 0x0081,  0xFF80,  0x0000,  0x0000, },
},{{	 0x0180,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0xFF80, },
{	 0x0082,  0x0000,  0xFF7F,  0xFFFF, },
{	 0x0082,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0102,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFE,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFE,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFF7F, },
{	 0x0081,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0xFFFE,  0x0000,  0x0000, },
},{{	 0x0086,  0x0000,  0xFFFE,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFE, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0xFF80,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0xFFFE,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFE, },
},},{{{	 0x01FE,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0082,  0x0000,  0xFF7F,  0x0000, },
},{{	 0x0180,  0xFF80,  0x0000,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFE,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFF7F, },
},{{	 0x0102,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFE, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
},{{	 0x0084,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0xFF80,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFE,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0xFFFE, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
},},{{{	 0x017E,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0100,  0x0000,  0xFFFF,  0x0000, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0082,  0xFFFF,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFF, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0xFF80,  0x0000, },
},{{	 0x0004,  0xFFFE,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFE,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFF, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},},{{{	 0x00FE,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x00FE,  0x0000,  0x0000,  0xFF80, },
{	 0x0082,  0x0000,  0xFF7F,  0x0000, },
{	 0x0081,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0080,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFE,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFE, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},},{{{	 0x00FE,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x007E,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0x0000, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0080,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFE,  0x0000,  0x0000, },
},},{{{	 0x00FE,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x007E,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0x0000, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0080,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0x0000, },
},{{	 0x0002,  0x0000,  0x0000,  0xFFFF, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},},{{{	 0x007E,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x007E,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0x0000,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
},{{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFE, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0xFF80,  0x0000, },
},},{{{	 0x007E,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x007E,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0082,  0xFF7F,  0x0000,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0xFF80,  0x0000,  0x0000,  0x0000, },
},},};