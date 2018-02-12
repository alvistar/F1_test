from distutils.core import setup
from Cython.Build import cythonize
from distutils.command.build_clib import build_clib
from distutils.extension import Extension

ext_modules=[
    Extension("fpga_interface",
              sources=["fpga_interface.pyx",'fpga_dummy.c']
    )
]

setup(
  name = "fpgaapp",
  ext_modules = cythonize (ext_modules)
)

