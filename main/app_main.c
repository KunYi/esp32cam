

#include "app_wifi.h"
#include "app_camera.h"
#include "app_uart.h"

#include "esp_log.h"
#include "sdkconfig.h"

void app_main()
{
	app_camera_main();
	app_wifi_main();
	uart_init();
}
