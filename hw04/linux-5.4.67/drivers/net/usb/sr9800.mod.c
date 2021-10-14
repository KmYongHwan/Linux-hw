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
	{ 0xb1eef0f0, "usbnet_resume" },
	{ 0xb17d2c71, "usbnet_suspend" },
	{ 0x75f28e4a, "usbnet_disconnect" },
	{ 0xcd7a5441, "usbnet_probe" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x21f99bf6, "usbnet_get_endpoints" },
	{ 0x90de418b, "mii_nway_restart" },
	{ 0xed7e42ab, "usbnet_link_change" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x2c0719d2, "usbnet_skb_return" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4896f7fe, "usbnet_write_cmd_async" },
	{ 0x68fb4f56, "generic_mii_ioctl" },
	{ 0x12faebc3, "usbnet_get_drvinfo" },
	{ 0xc002153b, "mii_link_ok" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb77794f, "usbnet_read_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1c7b51a6, "mii_ethtool_gset" },
	{ 0xd20fc08f, "mii_check_media" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x2bec3ff2, "usbnet_write_cmd" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xb0e602eb, "memmove" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xf12bcde7, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,mii");

MODULE_ALIAS("usb:v0FE6p9800d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "99F6B84E1BBC11F6E7821DE");
