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
	{ 0x48ea3d5, "usbnet_get_stats64" },
	{ 0x8cf48c0c, "usbnet_tx_timeout" },
	{ 0x9ecdc83f, "cdc_ncm_change_mtu" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x96c4d8d3, "usbnet_start_xmit" },
	{ 0xef01084a, "usbnet_stop" },
	{ 0xca102794, "usbnet_open" },
	{ 0x75f28e4a, "usbnet_disconnect" },
	{ 0xcd7a5441, "usbnet_probe" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xde2222e6, "usb_match_id" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0x69b715b6, "usb_cdc_wdm_register" },
	{ 0x98b10c8c, "cdc_ncm_bind_common" },
	{ 0xa3f2a5ad, "cdc_ncm_select_altsetting" },
	{ 0xb17d2c71, "usbnet_suspend" },
	{ 0xb1eef0f0, "usbnet_resume" },
	{ 0xdc2d1fbc, "cdc_ncm_unbind" },
	{ 0x3c24030c, "usb_autopm_put_interface" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc576c069, "usb_autopm_get_interface" },
	{ 0x5b091fc0, "__vlan_find_dev_deep_rcu" },
	{ 0xd25e7156, "in6_dev_finish_destroy" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9fd8fcb4, "ipv6_stub" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x2c0719d2, "usbnet_skb_return" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x8bde3af6, "cdc_ncm_rx_verify_ndp16" },
	{ 0x3f4fe3f8, "cdc_ncm_rx_verify_nth16" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xfb735332, "cdc_ncm_fill_tx_frame" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb18156be, "skb_pull" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,cdc_ncm,cdc-wdm");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "E78127BCABE41799AC5303D");
