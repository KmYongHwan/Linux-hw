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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x4b8b9322, "devm_watchdog_register_device" },
	{ 0x2ee76e44, "watchdog_init_timeout" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0x4a96006f, "gpiod_get_value" },
	{ 0x13d9b37d, "gpiod_set_consumer_name" },
	{ 0x78fedf54, "devm_gpiod_get_index" },
	{ 0xa1017bf3, "gpiod_count" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmen,a021-wdt");
MODULE_ALIAS("of:N*T*Cmen,a021-wdtC*");

MODULE_INFO(srcversion, "DB60F8A578926F50185DE23");
