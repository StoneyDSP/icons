cmake_minimum_required (VERSION 3.14...3.27 FATAL_ERROR)

include("CMakeRC.cmake")

project (icons)

cmrc_add_resource_library(icons
	ALIAS stoneydsp::icons
	NAMESPACE icons

    w_icon__196x128.png
    w_icon__384x256.png
    w_icon__768x512.png
    w_icon__1024x768.png
)

cmrc_add_resource_library(wide_icons
	ALIAS stoneydsp::wide_icons
	NAMESPACE wide_icons

    w_icon__196x128.png
    w_icon__384x256.png
    w_icon__768x512.png
    w_icon__1024x768.png
)
