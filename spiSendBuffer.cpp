/**
* send dotstar buffer
*/

#include "pxt.h"
#include "pxtbase.h"
#include "spiSendBuffer.h"
#include <cstdint>
#include <math.h>

using namespace pxt;

namespace hidotstar {

	//%
	void spiDotStarSendBuffer(Buffer buf, int len) {
/*
		SPI* spi = pins::allocSPI();
		// Send zero frame initially
		for (int8_t i = 0; i < 4; i++) {
			spi->write(0x00);
		}
		int offset;
		uint8_t* bufPtr = buf->data;
		// Send values from buffer
		for(int8_t i = 0; i < len; i++) {
			offset = i*3;
			spi->write(0xff); //Brightness on full - colors already scaled in buffer
			// For some reason colors go out in reverse order
                spi->write(bufPtr[offset+2]);
                spi->write(bufPtr[offset+1]);
                spi->write(bufPtr[offset]);
		}
		// Send end frame
		for (int8_t i = 0; i < 4; i++) {
			spi->write(0xff);
		}		
*/
	}
}
