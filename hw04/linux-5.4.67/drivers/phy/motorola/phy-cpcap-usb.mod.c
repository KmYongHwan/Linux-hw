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
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8d5eb965, "usb_remove_phy" },
	{ 0x9492220, "musb_mailbox" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x8cdde1de, "pinctrl_select_state" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "musb_hdrc");


MODULE_INFO(srcversion, "81B2DDC50F0B68EF7411FC0");
