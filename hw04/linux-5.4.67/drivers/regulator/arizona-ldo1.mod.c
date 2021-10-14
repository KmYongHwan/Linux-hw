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
	{ 0x4cbcc2af, "regulator_get_bypass_regmap" },
	{ 0x4704b44f, "regulator_set_bypass_regmap" },
	{ 0x222e5aca, "regulator_map_voltage_linear_range" },
	{ 0x4851cb9, "regulator_list_voltage_linear_range" },
	{ 0xb7d449e8, "regulator_map_voltage_linear" },
	{ 0xb8070965, "regulator_list_voltage_linear" },
	{ 0x10274e72, "platform_unregister_drivers" },
	{ 0xd01823d4, "__platform_register_drivers" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x86c80eb8, "devm_regulator_register" },
	{ 0xf2b4ea27, "gpiod_get_optional" },
	{ 0x4d64a33f, "regulator_set_voltage_sel_regmap" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x48d2ebea, "regulator_get_voltage_sel_regmap" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x28f9f010, "rdev_get_regmap" },
	{ 0x9a28da47, "gpiod_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D9354DD7EB5580D396759DD");
