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
	{ 0xb7d449e8, "regulator_map_voltage_linear" },
	{ 0xb8070965, "regulator_list_voltage_linear" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xe8ca8933, "gpiod_get_raw_value" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x86c80eb8, "devm_regulator_register" },
	{ 0xfc002a98, "max8998_write_reg" },
	{ 0xc1f391ba, "gpiod_direction_output_raw" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbe1de2e1, "max8998_update_reg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe709967c, "max8998_read_reg" },
	{ 0xa19862fa, "rdev_get_id" },
	{ 0x4a8c2861, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:max8998-pmic");
MODULE_ALIAS("platform:lp3974-pmic");

MODULE_INFO(srcversion, "11D1E03B7147ED900524D52");
