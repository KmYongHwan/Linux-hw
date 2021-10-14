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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xc6a86d39, "w1_ds2781_eeprom_cmd" },
	{ 0x4147f1a4, "power_supply_am_i_supplied" },
	{ 0xcebeeb50, "devm_power_supply_register" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9994955e, "w1_ds2781_io" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "w1_ds2781");


MODULE_INFO(srcversion, "E3BCC1010046D582300BF0B");
