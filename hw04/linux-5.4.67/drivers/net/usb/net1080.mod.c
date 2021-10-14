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
	{ 0x25b3797e, "skb_trim" },
	{ 0xb18156be, "skb_pull" },
	{ 0x4896f7fe, "usbnet_write_cmd_async" },
	{ 0x21f99bf6, "usbnet_get_endpoints" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x2bec3ff2, "usbnet_write_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xb77794f, "usbnet_read_cmd" },
	{ 0xb0e602eb, "memmove" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xf12bcde7, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E7AAEE8F61A6962EDB9E7BA");
