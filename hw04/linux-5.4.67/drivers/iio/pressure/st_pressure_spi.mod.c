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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6c91c2ec, "st_press_common_probe" },
	{ 0xda279a30, "st_sensors_spi_configure" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x369a7e97, "st_press_get_settings" },
	{ 0xe64fe144, "st_press_common_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "st_pressure,st_sensors_spi,industrialio");

MODULE_ALIAS("spi:lps001wp");
MODULE_ALIAS("spi:lps25h");
MODULE_ALIAS("spi:lps331ap");
MODULE_ALIAS("spi:lps22hb");
MODULE_ALIAS("spi:lps33hw");
MODULE_ALIAS("spi:lps35hw");
MODULE_ALIAS("spi:lps22hh");

MODULE_INFO(srcversion, "DBB679D9BA69BCB98BE0BD0");
