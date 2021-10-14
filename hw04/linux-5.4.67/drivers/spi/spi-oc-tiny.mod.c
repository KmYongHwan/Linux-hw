#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x29361773, "complete" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x83e67d89, "spi_bitbang_start" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xc1f391ba, "gpiod_direction_output_raw" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
	{ 0xdd8a71cf, "__spi_alloc_controller" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x7ea19302, "put_device" },
	{ 0xfe990052, "gpio_free" },
	{ 0x7fc8b95d, "spi_bitbang_stop" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "spi-bitbang");


MODULE_INFO(srcversion, "7265B217EEE8C0240D1189A");
