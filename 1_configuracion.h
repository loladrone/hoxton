/*
    ===========================================
      Original Copyright:
      Copyright (c) 2018 Stefan Kremser
             github.com/spacehuhn
   ===========================================
   ===========================================
              Hoxton - ESP8266 NodeMCU
           Desautenticador Wifi en Español
            Traducido y simplificado por 
             loladrone y mauroeldritch
   ===========================================   

           Modificar SOLO este archivo

Este archivo define SSIDs de las mayores prestadoras del área metropolitana de CABA, Argentina.
Simplemente se debe elegir uno a emular cambiando la opcion SSID_ELEGIDO.
Ejemplo, si se desea emular Speedy: 

#define SSID_ELEGIDO SSID_SPEEDY

También hay otros SSIDs emulando otros dispositivos.
Otras opciones como clave y visibilidad del accesspoint también pueden ser modificadas aqui.
*/

/* [No modificar a menos que sepa lo que está haciendo] */
#define SSID_FIBERTEL "Fibertel WiFi666 2.4GHz"
#define SSID_FIBERTEL_CINCO "Fibertel WiFi666 5.8GHz"
#define SSID_TELECENTRO "Telecentro-d666"
#define SSID_TELECENTRO_CINCO "Telecentro-d666-5G"
#define SSID_TELECENTRO_ZONE "Telecentro WiFi-Zone"
#define SSID_SPEEDY "Speedy-00029A"
#define SSID_PRINTER "HP-Print-4D-LaserJet M66"
#define SSID_CUSTOM "TP-LINK_D0666A"

//SSID elegido.
#define SSID_ELEGIDO SSID_FIBERTEL

//Clave. Usar algo sencillo, el dispositivo tiene problemas con claves con símbolos o muy largas.
#define CLAVE "axolote666"

//Define si el AP es visible al mundo o no. Usar tipo Booleano (true o false). false = VISIBLE, true = OCULTO.
#define OCULTAR false
