/* C source file created by SevenuP v1.20                                */
/* SevenuP (C) Copyright 2002-2006 by Jaime Tejedor Gomez, aka Metalbrain*/

/*
GRAPHIC DATA:
Pixel Size:      (256,  64)
Char Size:       ( 32,   8)
Sort Priorities: Char line, X char, Y char
Data Outputted:  Gfx+Attr
Interleave:      Sprite
Mask:            No
*/

unsigned char tileset[2304] = {
  0,  0,  0,  0,  0,  0,  0,  0,
  0, 16, 16, 16, 16,  0, 16,  0,
  0, 36, 36,  0,  0,  0,  0,  0,
  0, 36,126, 36, 36,126, 36,  0,
  0,  8, 62, 40, 62, 10, 62,  8,
  0, 98,100,  8, 16, 38, 70,  0,
  0, 16, 40, 16, 42, 68, 58,  0,
  0,  8, 16,  0,  0,  0,  0,  0,
  0,  4,  8,  8,  8,  8,  4,  0,
  0, 32, 16, 16, 16, 16, 32,  0,
  0,  0, 20,  8, 62,  8, 20,  0,
  0,  0,  8,  8, 62,  8,  8,  0,
  0,  0,  0,  0,  0,  8,  8, 16,
  0,  0,  0,  0, 62,  0,  0,  0,
  0,  0,  0,  0,  0, 24, 24,  0,
  0,  0,  2,  4,  8, 16, 32,  0,
  0, 60, 70, 74, 82, 98, 60,  0,
  0, 24, 40,  8,  8,  8, 62,  0,
  0, 60, 66,  2, 60, 64,126,  0,
  0, 60, 66, 12,  2, 66, 60,  0,
  0,  8, 24, 40, 72,126,  8,  0,
  0,126, 64,124,  2, 66, 60,  0,
  0, 60, 64,124, 66, 66, 60,  0,
  0,126,  2,  4,  8, 16, 16,  0,
  0, 60, 66, 60, 66, 66, 60,  0,
  0, 60, 66, 66, 62,  2, 60,  0,
  0,  0,  0, 16,  0,  0, 16,  0,
  0,  0, 16,  0,  0, 16, 16, 32,
  0,  0,  4,  8, 16,  8,  4,  0,
  0,  0,  0, 62,  0, 62,  0,  0,
  0,  0, 16,  8,  4,  8, 16,  0,
  0, 60, 66,  4,  8,  0,  8,  0,
  0, 60, 74, 86, 94, 64, 60,  0,
  0, 60, 66, 66,126, 66, 66,  0,
  0,124, 66,124, 66, 66,124,  0,
  0, 60, 66, 64, 64, 66, 60,  0,
  0,120, 68, 66, 66, 68,120,  0,
  0,126, 64,124, 64, 64,126,  0,
  0,126, 64,124, 64, 64, 64,  0,
  0, 60, 66, 64, 78, 66, 60,  0,
  0, 66, 66,126, 66, 66, 66,  0,
  0, 62,  8,  8,  8,  8, 62,  0,
  0,  2,  2,  2, 66, 66, 60,  0,
  0, 68, 72,112, 72, 68, 66,  0,
  0, 64, 64, 64, 64, 64,126,  0,
  0, 66,102, 90, 66, 66, 66,  0,
  0, 66, 98, 82, 74, 70, 66,  0,
  0, 60, 66, 66, 66, 66, 60,  0,
  0,124, 66, 66,124, 64, 64,  0,
  0, 60, 66, 66, 82, 74, 60,  0,
  0,124, 66, 66,124, 68, 66,  0,
  0, 60, 64, 60,  2, 66, 60,  0,
  0,254, 16, 16, 16, 16, 16,  0,
  0, 66, 66, 66, 66, 66, 60,  0,
  0, 66, 66, 66, 66, 36, 24,  0,
  0, 66, 66, 66, 66, 90, 36,  0,
  0, 66, 36, 24, 24, 36, 66,  0,
  0,130, 68, 40, 16, 16, 16,  0,
  0,126,  4,  8, 16, 32,126,  0,
  0, 14,  8,  8,  8,  8, 14,  0,
  0,  0, 64, 32, 16,  8,  4,  0,
  0,112, 16, 16, 16, 16,112,  0,
  0, 16, 56, 84, 16, 16, 16,  0,
  0,  0,  0,  0,  0,  0,  0,255,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
 68,239,255,255,255,255,255,255,
162,247,255,255,255,255,255,255,
  0,223, 63,251,167,255,215,255,
  0, 61,255,243,239,255,231,255,
  0,125,127,111,  0,  0,  0,  0,
  0,119,127,123,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
235,191,251, 94,223,238,111,220,
119, 85,221,190,239,223, 90, 80,
220, 72, 64,  0,  0,  0,  0,  0,
 80, 16,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0, 64, 64,
  0,  0, 16, 17, 25, 59,109, 85,
 96,224,240,208,233,121,187,182,
255,255,127, 58, 16,  0,  0,  0,
255,255,254,236, 64,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
235,191,219, 94,207,110, 47, 55,
119, 85,221,190, 46,222, 82, 82,
 38, 39, 34, 34,  3,  3,  2,  0,
 66,128,128,128,  0,  0,  0,  0,
 66, 52,223,127,239,127,251,  0,
 34,203,255,254,175,223,119,  0,
219, 95,235,191,223, 94,207,110,
221,190,127, 93,221,254,190,222,
  0, 59,127,127,  0,125,127,111,
  0, 95,123,127,  0,119,126,123,
  0, 59,127,127,  0,125,127,111,
  0, 95,123,127,  0,118,127,123,
 54,182,183,215,246,119,122,183,
239,238,246,246,230,239,239,111,
191,191,191,191,221,254,110,110,
126,126,255,191,223,246,238,238,
  0,  0,  0,  1,  0,  1,  3,  7,
  0,  0,  0,  0,128,192,224,224,
  0, 15,  7,  3,  1,  0,  0,  0,
  0,224,192,128,  0,  0,  0,  0,
  0,  0, 48,123,207,133,135,199,
  0,  0, 12,222,243,161,225,227,
 66, 34,  0,  0,  0,  0,  0,  0,
194,132,  0,  0,  0,  0,  0,  0,
 96,240,240,240,255,255,255,255,
  1,  3,  3,  3,255,255,255,255,
  0,111,123,127,  0,  0,  0,  0,
  0,127,111, 91,  0,127, 61, 91,
128,192,192,192,255,255,255,255,
  1,  3,  3,  3,255,255,255,255,
  0, 59,127,127,  0,125,127,111,
  0, 95,123,127,  0,119,127,123,
128,192,192,192,255,255,255,255,
  6, 15, 15, 15,255,255,255,255,
  0,126,118, 90,  0,126, 60, 90,
  0,246,222,254,  0,  0,  0,  0,
  2, 54, 55, 87,246,119,122,183,
  8,236,246,246,230,238,238,110,
191,191,191,191,221,254,110,110,
126,126,255,191,223,246,238,238,
  0,  0, 32,100, 36, 36, 39,  0,
  0,  0,  0,158,146,158,144,  0,
  0,  1,  3,  1,  1,  3,  1,  1,
  0,128,192,240, 64,192,  0,128,
  0,  0,  0,  0,  0,  0,  0,  1,
  0,  0,  0,  0,  0,  0,  0,128,
  1,  1,  1,  3,  3,  3,  3,  3,
128,128,128,192,192,192,192,192,
  0, 16, 47, 95, 63, 63, 63,127,
  0,  0,248,140,196,228,244,254,
127, 74, 90, 74, 90, 88,127, 63,
254,150,182,150,182,146,254,252,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  2,  7, 15, 15, 31, 63, 31, 15,
  2,  6,143,223,223,239,223,191,
 32, 23, 15,  7,  6,  6,  6,  4,
  0, 71,135,  7,  0,255,255,255,
  0,  0,128,128,192,224,224,224,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  1,255,255,255,
  0,  0,126,255,255,255,255,255,
  3,  6,  4, 12, 24, 48, 48, 96,
255,127,127, 76, 85, 77, 85, 84,
255,255,255,127,113,100, 42,  4,
255,127,255,255,255,128,255,  0,
255,255,255, 77, 85, 84, 85, 85,
255,215,255, 71, 87, 71, 87, 87,
255,255,255,255,227, 73,213,  8,
255,255,255,254,248,192,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,
  0, 71, 71, 71, 71, 71, 71, 71,
 71, 71, 71, 71, 71, 71, 71, 71,
 71, 71, 71, 71, 71, 71, 71, 71,
 71, 71, 71, 71, 71, 71, 71, 71,
 71, 71, 71, 71, 71, 71, 71, 71,
 71, 71, 71, 71, 71, 71, 71, 71,
 71, 71, 71, 71, 71, 71, 71, 71,
 71, 71, 71, 71, 71, 71, 71, 71,
  7,  7,  7,  7,  4, 68,  2,  2,
  6, 70,  7,  7,  2,  2,  5, 69,
  7, 71,  7, 71,  4,  4,  7,  7,
  2,  2, 66,  2,  5,  5,  2,  2,
 70,  6,  6, 70,  2,  2,  2,  2,
  6, 70,  7, 71, 71,  7,  7,  7,
  6,  6,  6, 70,  6,  6,  6, 70,
  6,  6, 70,  6,  2,  2,  3,  2,
  4, 68,  6, 70, 66,  2, 70,  6,
 69, 69,  5,  5,  7,  7,  7,  7,
  4, 68,  2, 66,  4,  7, 71, 71,
 66, 67, 66, 66, 67, 67, 66, 66,
  7,  7,  7,  7,  7,  7,  7,  7,
  7,  7,  7,  7,  7,  7,  7,  7,
  7,  7,  7,  7,  7,  7,  7,  7,
  7,  7,  7,  7,  7,  7,  7,  7,
  7,  7,  7,  7,  7,  7,  7,  7,
  7,  7,  7,  7,  7,  7,  7,  7,
  7,  7,  7,  7,  7,  7,  7,  7,
  7,  7,  7,  7,  7,  7,  7,  7,
  7,  7,  7,  7,  7,  7,  7,  7,
  7,  7,  7,  7,  7,  7,  7,  7,
  7,  7,  7,  7,  7,  7,  7,  7,
  7,  7,  7,  7,  7,  7,  7,  7};