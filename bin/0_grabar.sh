#!/bin/bash
#Mauro Eldritch - 2018.
#Grabar la imagen precompilada de Hoxton en el nodemcu.
sudo esptool.py -p /dev/ttyUSB0 write_flash -fm qio 0x0000 ./hoxton.bin
