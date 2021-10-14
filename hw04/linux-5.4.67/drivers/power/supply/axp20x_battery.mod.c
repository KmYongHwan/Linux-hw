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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cx-powers,axp209-battery-power-supply");
MODULE_ALIAS("of:N*T*Cx-powers,axp209-battery-power-supplyC*");
MODULE_ALIAS("of:N*T*Cx-powers,axp221-battery-power-supply");
MODULE_ALIAS("of:N*T*Cx-powers,axp221-battery-power-supplyC*");
MODULE_ALIAS("of:N*T*Cx-powers,axp813-battery-power-supply");
MODULE_ALIAS("of:N*T*Cx-powers,axp813-battery-power-supplyC*");

MODULE_INFO(srcversion, "A12243BD6C1D3CD3B109A60");
