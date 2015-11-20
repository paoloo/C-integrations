import ctypes
biblioteca=ctypes.CDLL('./zoalib.so')
biblioteca.zoeira.restype = ctypes.c_int
biblioteca.zoeira.argtypes = [ctypes.c_int]
biblioteca.zoeira(5)
