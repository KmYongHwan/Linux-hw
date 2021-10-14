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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x86c80eb8, "devm_regulator_register" },
	{ 0xbd6bbe1, "tps80031_ext_power_req_config" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xeedded40, "regulator_map_voltage_iterate" },
	{ 0xb7d449e8, "regulator_map_voltage_linear" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb8070965, "regulator_list_voltage_linear" },
	{ 0x6f486f60, "rdev_get_dev" },
	{ 0x4a8c2861, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D0171A4BC5419A5B6ABFE0B");
