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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb1eef0f0, "usbnet_resume" },
	{ 0xcd7a5441, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb6aa41c3, "usbnet_cdc_unbind" },
	{ 0x75f28e4a, "usbnet_disconnect" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xd1b15ca7, "usbnet_generic_cdc_bind" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xef01084a, "usbnet_stop" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x48ea3d5, "usbnet_get_stats64" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x96c4d8d3, "usbnet_start_xmit" },
	{ 0xb17d2c71, "usbnet_suspend" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf12bcde7, "skb_copy_expand" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8cf48c0c, "usbnet_tx_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2c0719d2, "usbnet_skb_return" },
	{ 0xce42315c, "usb_driver_release_interface" },
	{ 0xca102794, "usbnet_open" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x583a430e, "usb_interrupt_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xb0e602eb, "memmove" },
	{ 0xb3b84165, "eth_mac_addr" },
};

MODULE_INFO(depends, "usbnet,cdc_ether");

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc04ip01in*");

MODULE_INFO(srcversion, "A9FBEA008EA5BDB759FB1F4");
