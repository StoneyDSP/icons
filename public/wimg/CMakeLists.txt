cmake_minimum_required (VERSION 3.14...3.27 FATAL_ERROR)

include("CMakeRC.cmake")

project (img)

cmrc_add_resource_library(img
	ALIAS stoneydsp::img
	NAMESPACE img
    w_icon__196x128.png
    w_icon__384x256.png
    w_icon__768x512.png
    w_icon__1024x768.png
)
