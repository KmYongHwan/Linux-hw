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
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cx-powers,axp202-usb-power-supply");
MODULE_ALIAS("of:N*T*Cx-powers,axp202-usb-power-supplyC*");
MODULE_ALIAS("of:N*T*Cx-powers,axp221-usb-power-supply");
MODULE_ALIAS("of:N*T*Cx-powers,axp221-usb-power-supplyC*");
MODULE_ALIAS("of:N*T*Cx-powers,axp223-usb-power-supply");
MODULE_ALIAS("of:N*T*Cx-powers,axp223-usb-power-supplyC*");
MODULE_ALIAS("of:N*T*Cx-powers,axp813-usb-power-supply");
MODULE_ALIAS("of:N*T*Cx-powers,axp813-usb-power-supplyC*");

MODULE_INFO(srcversion, "E12079DF9781663DA773BF2");
