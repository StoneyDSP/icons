cmake_minimum_required (VERSION 3.14...3.27 FATAL_ERROR)

include("CMakeRC.cmake")

project (img)

cmrc_add_resource_library(img
	ALIAS stoneydsp::img
	NAMESPACE img
	icon__32x32.png
	icon__48x48.png
    icon__64x64.png
    icon__96x96.png
    icon__144x144.png
    icon__168x168.png
    icon__256x256.png
    icon__512x512.png
)
