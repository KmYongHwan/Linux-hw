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
	{ 0x77179d2e, "param_ops_string" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x48ea3d5, "usbnet_get_stats64" },
	{ 0x8cf48c0c, "usbnet_tx_timeout" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x96c4d8d3, "usbnet_start_xmit" },
	{ 0xef01084a, "usbnet_stop" },
	{ 0xca102794, "usbnet_open" },
	{ 0x272882d1, "rndis_tx_fixup" },
	{ 0xf8d8dafb, "rndis_rx_fixup" },
	{ 0xf117d334, "rndis_status" },
	{ 0xb1eef0f0, "usbnet_resume" },
	{ 0xb17d2c71, "usbnet_suspend" },
	{ 0x75f28e4a, "usbnet_disconnect" },
	{ 0xcd7a5441, "usbnet_probe" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x1b098acb, "wiphy_register" },
	{ 0x4e355d29, "generic_rndis_bind" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x86f7f0be, "wiphy_new_nm" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xa23eb047, "usbnet_purge_paused_rxq" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x68828cc7, "cfg80211_disconnected" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0xc56c77da, "cfg80211_ibss_joined" },
	{ 0x94e454b7, "cfg80211_roamed" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x518a029f, "usbnet_resume_rx" },
	{ 0x2e45a318, "cfg80211_cqm_rssi_notify" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd6cfed90, "cfg80211_put_bss" },
	{ 0xc510a792, "ieee80211_get_channel" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x754d539c, "strlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc223db15, "cfg80211_scan_done" },
	{ 0x93e6e765, "wiphy_free" },
	{ 0xc698a562, "wiphy_unregister" },
	{ 0x346484f3, "rndis_unbind" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x371b7efe, "rndis_command" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdc628a0b, "cfg80211_inform_bss_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x25cfb8d4, "cfg80211_connect_done" },
	{ 0x4ae943d1, "cfg80211_pmksa_candidate_notify" },
	{ 0x714dfe80, "cfg80211_michael_mic_failure" },
	{ 0xe48f4530, "usbnet_pause_rx" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x11089ac7, "_ctype" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,rndis_host,cfg80211");

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");

MODULE_INFO(srcversion, "AEC3E86F8E3A19A4D8F6728");
