# Icons

Here I will be storing some icons and other resources to be used on [stoneydsp.com](https://www.stoneydsp.com). 

I was intrigued by the [nextjs onelink example](https://github.com/StoneyDSP/onelink) and how it pipes out the favicon on the client side; it had me recall some intrguing ideas about serving [Win32-style compiled icon binaries](https://learn.microsoft.com/en-us/windows/win32/menurc/using-icons) by compiling some .ico files using [CMakeRC](https://github.com/vector-of-bool/cmrc), then piping them out via the NodeJS runtime by using the [Node Addon API](https://github.com/nathanjhood/cmodule).

There are a couple of dots to connect, but since first messing with those node addons I had been looking for a nice use case such as this. CMakeRC makes much of the work dead easy, and I believe I have the other pieces necessary; just need some time to revisit this based on priority.

Stay tuned!
