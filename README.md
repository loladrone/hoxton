# HOXTON

Hoxton es un escáner, desautenticador y falsificador de APs Wi-Fi totalmente en español. Está basado en una idea original de `spacehuhn`, esp8266_deauther.

Mi fork viene por defecto en español, precompilado para NodeMCU, con algunos scripts para automatizar problemas frecuentes que tuve (Como borrar el dispositivo o grabar la imagen), trae precargados varios SSID de prestadores de internet argentinos y es muy fácil de configurar ya que unifiqué la configuración en un solo archivo.

## COMO USAR HOXTON

Simplemente se debe modificar el archivo principal de configuraciones.

> 1_configuracion.h 

Fue probado correctamente en un NodeMCU v3 pero debería soportar todas las placas soportadas por el proyecto original ya que no se tocó el núcleo.

- loladrone