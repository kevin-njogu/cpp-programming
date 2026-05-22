// color_packing.cpp : Defines the entry point for the application.
//

#include "color_packing.h"

using namespace std;

int main()
{
    const unsigned int red_mask{ 0xFF000000 };
    const unsigned int green_mask{ 0x00FF0000 };
    const unsigned int blue_mask{ 0x0000FF00 };
    const unsigned int alpha_mask{ 0x000000FF };// Transparency information


    unsigned int my_color{ 0xAABCDE00 };//32 bit color representation RGBA

    /*
    * AA BB CC DD
    * RED BLUE GREEN ALPHA
    * 1111 0000 0000 0000 - RED MASK
    * 0000 1111 0000 0000 - GREEN MASK
    * 0000 0000 1111 0000 - BLUE MASK
    * 0000 0000 0000 1111 - ALPA MASK
    */

    //We shift to make sure the color byte of interest is in the 
    // lower index byte position so that we can interpret that as an integer,
    // which will be between 0 and 255. 

    //Set some format options
    std::cout << std::dec << std::showbase << std::endl;

    //Makes 0xAA000000 -> shited to the right 24 bits to make sure it remains under 255
    std::cout << "Red is : " << ((my_color & red_mask) >> 24) << std::endl;

    //Makes 0x00BB0000 -> shited to the right 16 bits to make sure it remains under 255
    std::cout << "Green is : " << ((my_color & green_mask) >> 16) << std::endl;

    //Makes 0x0000CC00 -> shited to the right 8 bits to make sure it remains under 255
    std::cout << "Blue is : " << ((my_color & blue_mask) >> 8) << std::endl;

    //Makes 0x000000DD -> no need to shift
    std::cout << "Alpha is : " << ((my_color & alpha_mask) >> 0) << std::endl;

    return 0;

}
