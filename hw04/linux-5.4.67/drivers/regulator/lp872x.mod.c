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
	{ 0x48d2ebea, "regulator_get_voltage_sel_regmap" },
	{ 0x4d64a33f, "regulator_set_voltage_sel_regmap" },
	{ 0xc7fd66d4, "regulator_is_enabled_regmap" },
	{ 0xaefd15fd, "regulator_disable_regmap" },
	{ 0xfc49dd4b, "regulator_enable_regmap" },
	{ 0x9a5fab57, "regulator_get_current_limit_regmap" },
	{ 0x46d5c002, "regulator_set_current_limit_regmap" },
	{ 0x537c3d17, "regulator_map_voltage_ascend" },
	{ 0x5bba4f6, "regulator_list_voltage_table" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xa19862fa, "rdev_get_id" },
	{ 0x4a8c2861, "rdev_get_drvdata" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86c80eb8, "devm_regulator_register" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:lp8720");
MODULE_ALIAS("i2c:lp8725");
MODULE_ALIAS("of:N*T*Cti,lp8720");
MODULE_ALIAS("of:N*T*Cti,lp8720C*");
MODULE_ALIAS("of:N*T*Cti,lp8725");
MODULE_ALIAS("of:N*T*Cti,lp8725C*");

MODULE_INFO(srcversion, "9ADF6B0522B4EEBC1CE55BA");
