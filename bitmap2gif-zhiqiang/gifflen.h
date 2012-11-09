/*
 * gifflen.h add by chris	2012.11.09
 *
 * */

#ifndef __GIFFLEN_H__
#define __GIFFLEN_H__
#include <stdio.h>

/*
 * interface: add some bitmaps into a gif buffer
 *
 * return : the pointer to the gif buffer ,the size of the buffer is gif_buf_large
 *
 * */
unsigned char *  bitmap2gif(int * gif_buf_large ,
				unsigned char* bitmap_buf[], int bitmap_num,
				int w, int h,  int quality, int frameDelay);

void free_mem();

int Init(unsigned char **gif_buf/*char* gifName*/ ,int w, int h, int numColors, int quality, int frameDelay);

void Close(unsigned char **gif_buf);

int AddFrame(unsigned char *bitmap_buf ,unsigned char **gif_buf);


#endif
