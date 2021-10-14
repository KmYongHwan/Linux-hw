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
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x4b397c99, "gnss_serial_free" },
	{ 0x1113c204, "__serdev_device_driver_register" },
	{ 0xbca59b9e, "gnss_serial_allocate" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x37228a4f, "gnss_serial_deregister" },
	{ 0x4fc91a1f, "devm_regulator_get_optional" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x97c26d11, "gnss_serial_pm_ops" },
	{ 0xc5146437, "gnss_serial_register" },
	{ 0x1fa8ea04, "regulator_enable" },
};

MODULE_INFO(depends, "gnss-serial");


MODULE_INFO(srcversion, "F1D1CD44D56010320ED93A6");
