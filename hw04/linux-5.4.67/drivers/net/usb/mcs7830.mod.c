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
	{ 0xdf3916c9, "usbnet_set_link_ksettings" },
	{ 0xe497e793, "usbnet_get_link_ksettings" },
	{ 0x34dbbe18, "usbnet_get_link" },
	{ 0x4f87e6b7, "usbnet_nway_reset" },
	{ 0xf93d1693, "usbnet_set_msglevel" },
	{ 0xdd2fbeed, "usbnet_get_msglevel" },
	{ 0x48ea3d5, "usbnet_get_stats64" },
	{ 0x8cf48c0c, "usbnet_tx_timeout" },
	{ 0xa17e8e13, "usbnet_change_mtu" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x96c4d8d3, "usbnet_start_xmit" },
	{ 0xef01084a, "usbnet_stop" },
	{ 0xca102794, "usbnet_open" },
	{ 0xb17d2c71, "usbnet_suspend" },
	{ 0x75f28e4a, "usbnet_disconnect" },
	{ 0xcd7a5441, "usbnet_probe" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x21f99bf6, "usbnet_get_endpoints" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xb1eef0f0, "usbnet_resume" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x4896f7fe, "usbnet_write_cmd_async" },
	{ 0x12faebc3, "usbnet_get_drvinfo" },
	{ 0x68fb4f56, "generic_mii_ioctl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb77794f, "usbnet_read_cmd" },
	{ 0x2bec3ff2, "usbnet_write_cmd" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xed7e42ab, "usbnet_link_change" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,mii");

MODULE_ALIAS("usb:v9710p7832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0021d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "710D0221EB218926DD22EBB");
