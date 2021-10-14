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
	{ 0xf490d28c, "__iio_device_register" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:jsa1212");
MODULE_ALIAS("acpi*:JSA1212:*");

MODULE_INFO(srcversion, "6DFAF4761D00A2B38ECC538");
