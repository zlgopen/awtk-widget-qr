﻿import os
import app_helper as app

helper = app.Helper(ARGUMENTS);
helper.set_dll_def('src/qr.def').set_libs(['qr']).call(DefaultEnvironment)

SConscriptFiles = ['src/SConscript', 'demos/SConscript', 'tests/SConscript']
SConscript(SConscriptFiles)
