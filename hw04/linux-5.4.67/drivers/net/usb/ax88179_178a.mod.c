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
	{ 0x4f87e6b7, "usbnet_nway_reset" },
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
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x1c7b51a6, "mii_ethtool_gset" },
	{ 0x21f99bf6, "usbnet_get_endpoints" },
	{ 0x90de418b, "mii_nway_restart" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4896f7fe, "usbnet_write_cmd_async" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xb17d2c71, "usbnet_suspend" },
	{ 0xb1eef0f0, "usbnet_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xed7e42ab, "usbnet_link_change" },
	{ 0x5c892d31, "usbnet_update_max_qlen" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x71de7e1f, "usbnet_write_cmd_nopm" },
	{ 0x2bec3ff2, "usbnet_write_cmd" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x46c7ab16, "usbnet_read_cmd_nopm" },
	{ 0xb77794f, "usbnet_read_cmd" },
	{ 0x68fb4f56, "generic_mii_ioctl" },
	{ 0x7404840e, "mii_ethtool_get_link_ksettings" },
	{ 0x5d4b2462, "mii_ethtool_set_link_ksettings" },
	{ 0x2c0719d2, "usbnet_skb_return" },
	{ 0xb18156be, "skb_pull" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,mii");

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E427404EFF51596EF774889");
