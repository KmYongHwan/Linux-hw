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
	{ 0x5bba4f6, "regulator_list_voltage_table" },
	{ 0xc7fd66d4, "regulator_is_enabled_regmap" },
	{ 0xaefd15fd, "regulator_disable_regmap" },
	{ 0xfc49dd4b, "regulator_enable_regmap" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x86c80eb8, "devm_regulator_register" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x4a8c2861, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:max77693-pmic");
MODULE_ALIAS("platform:max77843-regulator");

MODULE_INFO(srcversion, "4B73F3A82FE36DC1C8AB807");
