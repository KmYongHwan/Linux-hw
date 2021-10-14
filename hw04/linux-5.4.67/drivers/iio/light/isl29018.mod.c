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
	{ 0xf9a482f9, "msleep" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xc5850110, "printk" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xb6f50190, "regmap_get_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cisil,isl29018");
MODULE_ALIAS("of:N*T*Cisil,isl29018C*");
MODULE_ALIAS("of:N*T*Cisil,isl29023");
MODULE_ALIAS("of:N*T*Cisil,isl29023C*");
MODULE_ALIAS("of:N*T*Cisil,isl29035");
MODULE_ALIAS("of:N*T*Cisil,isl29035C*");
MODULE_ALIAS("i2c:isl29018");
MODULE_ALIAS("i2c:isl29023");
MODULE_ALIAS("i2c:isl29035");
MODULE_ALIAS("acpi*:ISL29018:*");
MODULE_ALIAS("acpi*:ISL29023:*");
MODULE_ALIAS("acpi*:ISL29035:*");

MODULE_INFO(srcversion, "4CA0CF23EFAF92D1357F72D");
