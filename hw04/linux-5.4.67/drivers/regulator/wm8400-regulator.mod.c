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
	{ 0x4d64a33f, "regulator_set_voltage_sel_regmap" },
	{ 0xb7d449e8, "regulator_map_voltage_linear" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x28f9f010, "rdev_get_regmap" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x48d2ebea, "regulator_get_voltage_sel_regmap" },
	{ 0x222e5aca, "regulator_map_voltage_linear_range" },
	{ 0x4851cb9, "regulator_list_voltage_linear_range" },
	{ 0xb8070965, "regulator_list_voltage_linear" },
	{ 0xaefd15fd, "regulator_disable_regmap" },
	{ 0xa19862fa, "rdev_get_id" },
	{ 0xfc49dd4b, "regulator_enable_regmap" },
	{ 0x12b678d5, "platform_device_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc7fd66d4, "regulator_is_enabled_regmap" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x86c80eb8, "devm_regulator_register" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8032FB0BF273F20A2EABFE1");
