#ifndef _hidotstar_hpp
#define _hidotstar_hpp

namespace pins {
	extern SPI* allocSPI();
	extern void spiFormat(int bits, int mode);
}

#endif