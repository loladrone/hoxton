#!/bin/bash
#Mauro Eldritch - 2018
#Hacemos esto cuatro veces, ya que la imagen "en blanco" es de 1MB,
#mientras que la memoria del nodemcu es de 4MB, al menos en nuestro caso.
#Entonces corremos esta imagen en los cuatro sectores para hacer 4MB.
sudo esptool.py -p /dev/ttyUSB0 write_flash -fm qio 0x0000 ./blank.bin
sudo esptool.py -p /dev/ttyUSB0 write_flash -fm qio 0x1000 ./blank.bin
sudo esptool.py -p /dev/ttyUSB0 write_flash -fm qio 0x2000 ./blank.bin
sudo esptool.py -p /dev/ttyUSB0 write_flash -fm qio 0x3000 ./blank.bin
