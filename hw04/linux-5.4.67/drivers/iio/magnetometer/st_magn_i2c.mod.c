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
	{ 0xca01b268, "st_magn_common_probe" },
	{ 0x10ee4756, "st_sensors_i2c_configure" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x1f8a79e0, "st_magn_get_settings" },
	{ 0x7a033209, "st_magn_common_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "st_magn,st_sensors_i2c,industrialio");

MODULE_ALIAS("i2c:lsm303dlh_magn");
MODULE_ALIAS("i2c:lsm303dlhc_magn");
MODULE_ALIAS("i2c:lsm303dlm_magn");
MODULE_ALIAS("i2c:lis3mdl");
MODULE_ALIAS("i2c:lsm303agr_magn");
MODULE_ALIAS("i2c:lis2mdl");
MODULE_ALIAS("i2c:lsm9ds1_magn");

MODULE_INFO(srcversion, "5D9E6A09F15074DC0E70BA6");
