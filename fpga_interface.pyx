
from libc.stdint cimport uint8_t
from cpython cimport array

cdef extern int pow_( uint8_t *pin, uint8_t *pout );

def do_pow(hash):
  hash_b = bytes.fromhex(hash)
  cdef array.array a = array.array('B', hash_b)
  cdef array.array int_array_template = array.array('B', [])
  cdef array.array b

  b = array.clone(int_array_template, 3, zero=False)

  #cdef uint8_t[:] pin = a
  #pow(pin, pin)
  pow_(a.data.as_uchars, b.data.as_uchars)
  print(b)