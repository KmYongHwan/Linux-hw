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
	{ 0x7ac151a5, "pinctrl_enable" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xc4142837, "seq_printf" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x6704ccc4, "devm_pinctrl_register_and_init" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd9cde342, "pinctrl_dev_get_drvdata" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x7ad1ded1, "pinctrl_register_mappings" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EB559F35AA4FC9A37F43107");
