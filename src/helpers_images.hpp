#pragma once
#include <string>

unsigned char *load_image(char *path, int *width, int *height, int *channels);

void save_image(unsigned char **image, int width, int height, std::string filename);

void free_image(unsigned char* image); 
