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
	{ 0x21f99bf6, "usbnet_get_endpoints" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x24d016da, "usbnet_device_suggests_idle" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xb18156be, "skb_pull" },
	{ 0x2c0719d2, "usbnet_skb_return" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x15314fce, "consume_skb" },
	{ 0xb0e602eb, "memmove" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xf12bcde7, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "10D97D26E5592B8F6591AB8");
