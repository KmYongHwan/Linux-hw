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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x11b2ec37, "st_gyro_common_probe" },
	{ 0x10ee4756, "st_sensors_i2c_configure" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x8e7eb241, "st_gyro_get_settings" },
	{ 0x810ccd32, "st_gyro_common_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "st_gyro,st_sensors_i2c,industrialio");

MODULE_ALIAS("i2c:l3g4200d");
MODULE_ALIAS("i2c:lsm330d_gyro");
MODULE_ALIAS("i2c:lsm330dl_gyro");
MODULE_ALIAS("i2c:lsm330dlc_gyro");
MODULE_ALIAS("i2c:l3gd20");
MODULE_ALIAS("i2c:l3gd20h");
MODULE_ALIAS("i2c:l3g4is_ui");
MODULE_ALIAS("i2c:lsm330_gyro");
MODULE_ALIAS("i2c:lsm9ds0_gyro");

MODULE_INFO(srcversion, "BBB32659890E90CF4BDC2FE");
