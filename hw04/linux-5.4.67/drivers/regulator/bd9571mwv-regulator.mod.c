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
	{ 0xb7d449e8, "regulator_map_voltage_linear" },
	{ 0xb8070965, "regulator_list_voltage_linear" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x86c80eb8, "devm_regulator_register" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:bd9571mwv-regulator");

MODULE_INFO(srcversion, "CAB71D2549F9A85F5786A7C");
