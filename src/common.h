#pragma once

// If DEBUG is defined, the function debugBorder changes the border color, otherwise it does nothing.
//#define DEBUG TRUE 

#include <msxhal.h>
#include <tms99X8.h>

#include <rand.h>

#include <psg.h>
USING_MODULE(psg, PAGE_C);

typedef struct {
	uint8_t seg;
	isr_function f;
} Tpaged_isr;
extern Tpaged_isr paged_isr;
