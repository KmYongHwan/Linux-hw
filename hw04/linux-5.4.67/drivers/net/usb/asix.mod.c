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
	{ 0xf3744f5f, "netdev_info" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x1c7b51a6, "mii_ethtool_gset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8d4bed43, "phy_disconnect" },
	{ 0xb1eef0f0, "usbnet_resume" },
	{ 0x5a889429, "phy_stop" },
	{ 0xcd7a5441, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xed7e42ab, "usbnet_link_change" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0x762c9c79, "phy_ethtool_nway_reset" },
	{ 0x75f28e4a, "usbnet_disconnect" },
	{ 0x68fb4f56, "generic_mii_ioctl" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xef01084a, "usbnet_stop" },
	{ 0x5c892d31, "usbnet_update_max_qlen" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x26c6d6e, "phy_print_status" },
	{ 0x4f87e6b7, "usbnet_nway_reset" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xdf3916c9, "usbnet_set_link_ksettings" },
	{ 0xb8e75250, "phy_start" },
	{ 0x90de418b, "mii_nway_restart" },
	{ 0x48ea3d5, "usbnet_get_stats64" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x75d2ade8, "eth_platform_get_mac_address" },
	{ 0xbf023123, "mdiobus_free" },
	{ 0x21f99bf6, "usbnet_get_endpoints" },
	{ 0xe497e793, "usbnet_get_link_ksettings" },
	{ 0x12faebc3, "usbnet_get_drvinfo" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x46c7ab16, "usbnet_read_cmd_nopm" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x96c4d8d3, "usbnet_start_xmit" },
	{ 0xb17d2c71, "usbnet_suspend" },
	{ 0x34dbbe18, "usbnet_get_link" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x71de7e1f, "usbnet_write_cmd_nopm" },
	{ 0x982fe6e6, "phy_ethtool_get_link_ksettings" },
	{ 0xf12bcde7, "skb_copy_expand" },
	{ 0xb77794f, "usbnet_read_cmd" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8cf48c0c, "usbnet_tx_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xfae95686, "genphy_resume" },
	{ 0x2c0719d2, "usbnet_skb_return" },
	{ 0xca102794, "usbnet_open" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd20fc08f, "mii_check_media" },
	{ 0xdd2fbeed, "usbnet_get_msglevel" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xe67aa9e2, "usbnet_unlink_rx_urbs" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x74d22198, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4896f7fe, "usbnet_write_cmd_async" },
	{ 0xa17e8e13, "usbnet_change_mtu" },
	{ 0xf27acad9, "phy_connect" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xaad3d693, "phy_mii_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc002153b, "mii_link_ok" },
	{ 0xb0e602eb, "memmove" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x2bec3ff2, "usbnet_write_cmd" },
	{ 0xf93d1693, "usbnet_set_msglevel" },
	{ 0xb8956b20, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "mii,usbnet");

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8436DF6FDF608921B29656D");
