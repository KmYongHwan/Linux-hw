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
	{ 0xa407a43b, "regulator_set_voltage_time_sel" },
	{ 0xc7fd66d4, "regulator_is_enabled_regmap" },
	{ 0xaefd15fd, "regulator_disable_regmap" },
	{ 0xfc49dd4b, "regulator_enable_regmap" },
	{ 0x48d2ebea, "regulator_get_voltage_sel_regmap" },
	{ 0x4d64a33f, "regulator_set_voltage_sel_regmap" },
	{ 0xb8070965, "regulator_list_voltage_linear" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x86c80eb8, "devm_regulator_register" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb7d449e8, "regulator_map_voltage_linear" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x4a8c2861, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:fan53526");
MODULE_ALIAS("i2c:fan53555");
MODULE_ALIAS("i2c:syr827");
MODULE_ALIAS("i2c:syr828");
MODULE_ALIAS("of:N*T*Cfcs,fan53526");
MODULE_ALIAS("of:N*T*Cfcs,fan53526C*");
MODULE_ALIAS("of:N*T*Cfcs,fan53555");
MODULE_ALIAS("of:N*T*Cfcs,fan53555C*");
MODULE_ALIAS("of:N*T*Csilergy,syr827");
MODULE_ALIAS("of:N*T*Csilergy,syr827C*");
MODULE_ALIAS("of:N*T*Csilergy,syr828");
MODULE_ALIAS("of:N*T*Csilergy,syr828C*");

MODULE_INFO(srcversion, "CB02964B00E678C939C3911");
