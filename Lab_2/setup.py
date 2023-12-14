from distutils.core import setup, Extension
setup(name='calculateSinIterations', version='1.0',
      ext_modules=[Extension('calculateSinNTimes', ['calculationSin.c'])])
