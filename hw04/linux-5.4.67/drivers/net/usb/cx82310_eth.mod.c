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
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xf9a482f9, "msleep" },
	{ 0x21f99bf6, "usbnet_get_endpoints" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x4d7cadaa, "usb_string" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x69acdf38, "memcpy" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xb18156be, "skb_pull" },
	{ 0x2c0719d2, "usbnet_skb_return" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v0572pCB01d*dcFFdsc00dp00ic*isc*ip*in*");

MODULE_INFO(srcversion, "7BD2F6DAAA1EF783C5CC97F");
