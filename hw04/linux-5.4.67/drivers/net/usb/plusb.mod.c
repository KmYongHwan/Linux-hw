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
	{ 0xb1eef0f0, "usbnet_resume" },
	{ 0xb17d2c71, "usbnet_suspend" },
	{ 0x75f28e4a, "usbnet_disconnect" },
	{ 0xcd7a5441, "usbnet_probe" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xb77794f, "usbnet_read_cmd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v067Bp0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp25A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp258Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3923p7825d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp27A1d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "03EF8B773B47FAC343FC2D3");
