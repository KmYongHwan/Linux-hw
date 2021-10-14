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
	{ 0x7ea19302, "put_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb46b7c4b, "siox_master_register" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0xa3ace4a4, "siox_master_alloc" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x7ca1750, "siox_master_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "siox-core");

MODULE_ALIAS("of:N*T*Ceckelmann,siox-gpio");
MODULE_ALIAS("of:N*T*Ceckelmann,siox-gpioC*");

MODULE_INFO(srcversion, "8293261D488F132994C9C85");
