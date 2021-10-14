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
	{ 0x222e5aca, "regulator_map_voltage_linear_range" },
	{ 0x4851cb9, "regulator_list_voltage_linear_range" },
	{ 0xc7fd66d4, "regulator_is_enabled_regmap" },
	{ 0x4cbcc2af, "regulator_get_bypass_regmap" },
	{ 0x4704b44f, "regulator_set_bypass_regmap" },
	{ 0xa407a43b, "regulator_set_voltage_time_sel" },
	{ 0xaefd15fd, "regulator_disable_regmap" },
	{ 0xfc49dd4b, "regulator_enable_regmap" },
	{ 0x48d2ebea, "regulator_get_voltage_sel_regmap" },
	{ 0x4d64a33f, "regulator_set_voltage_sel_regmap" },
	{ 0xb7d449e8, "regulator_map_voltage_linear" },
	{ 0xb8070965, "regulator_list_voltage_linear" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x86c80eb8, "devm_regulator_register" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xad123709, "palmas_ext_control_req_config" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xa19862fa, "rdev_get_id" },
	{ 0x4a8c2861, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,palmas-pmic");
MODULE_ALIAS("of:N*T*Cti,palmas-pmicC*");
MODULE_ALIAS("of:N*T*Cti,twl6035-pmic");
MODULE_ALIAS("of:N*T*Cti,twl6035-pmicC*");
MODULE_ALIAS("of:N*T*Cti,twl6036-pmic");
MODULE_ALIAS("of:N*T*Cti,twl6036-pmicC*");
MODULE_ALIAS("of:N*T*Cti,twl6037-pmic");
MODULE_ALIAS("of:N*T*Cti,twl6037-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps65913-pmic");
MODULE_ALIAS("of:N*T*Cti,tps65913-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps65914-pmic");
MODULE_ALIAS("of:N*T*Cti,tps65914-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps80036-pmic");
MODULE_ALIAS("of:N*T*Cti,tps80036-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps659038-pmic");
MODULE_ALIAS("of:N*T*Cti,tps659038-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps65917-pmic");
MODULE_ALIAS("of:N*T*Cti,tps65917-pmicC*");

MODULE_INFO(srcversion, "30BD7CA8532CD9C1BA336B4");
