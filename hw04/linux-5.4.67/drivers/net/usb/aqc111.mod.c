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
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xf93d1693, "usbnet_set_msglevel" },
	{ 0xdd2fbeed, "usbnet_get_msglevel" },
	{ 0x48ea3d5, "usbnet_get_stats64" },
	{ 0x8cf48c0c, "usbnet_tx_timeout" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x96c4d8d3, "usbnet_start_xmit" },
	{ 0xef01084a, "usbnet_stop" },
	{ 0xca102794, "usbnet_open" },
	{ 0x75f28e4a, "usbnet_disconnect" },
	{ 0xcd7a5441, "usbnet_probe" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xb1eef0f0, "usbnet_resume" },
	{ 0xb17d2c71, "usbnet_suspend" },
	{ 0x46c7ab16, "usbnet_read_cmd_nopm" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x3c24030c, "usb_autopm_put_interface" },
	{ 0xc576c069, "usb_autopm_get_interface" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x383dd35e, "usb_driver_set_configuration" },
	{ 0x37a0cba, "kfree" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x21f99bf6, "usbnet_get_endpoints" },
	{ 0xcfa8251d, "usb_reset_configuration" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x12faebc3, "usbnet_get_drvinfo" },
	{ 0xdd46729b, "usbnet_defer_kevent" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xb77794f, "usbnet_read_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4896f7fe, "usbnet_write_cmd_async" },
	{ 0x2c0719d2, "usbnet_skb_return" },
	{ 0xb18156be, "skb_pull" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xf12bcde7, "skb_copy_expand" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "BB8B3583DF6D104EA245BF4");
