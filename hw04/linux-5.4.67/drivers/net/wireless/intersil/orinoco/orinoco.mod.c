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
	{ 0x2d3385d3, "system_wq" },
	{ 0x3dcd2310, "iw_handler_set_thrspy" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x93e6e765, "wiphy_free" },
	{ 0x59a11eaf, "crypto_alloc_shash" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xdc628a0b, "cfg80211_inform_bss_data" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x5fa25787, "cfg80211_wext_siwscan" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x45092f7e, "cfg80211_wext_giwretry" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x6a4178b2, "crypto_shash_final" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x646aef2d, "cfg80211_wext_siwmode" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x53874969, "wireless_spy_update" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xd25eb83e, "crypto_shash_update" },
	{ 0xdd78daa8, "iw_handler_get_spy" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x163ea90b, "wireless_send_event" },
	{ 0xc510a792, "ieee80211_get_channel" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x7f0db767, "cfg80211_wext_giwfrag" },
	{ 0x3bf58509, "crypto_shash_setkey" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0xa81498ff, "cfg80211_wext_siwrts" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xd6cfed90, "cfg80211_put_bss" },
	{ 0x1b098acb, "wiphy_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9b19ea10, "iw_handler_get_thrspy" },
	{ 0x848d372e, "iowrite8" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x86f7f0be, "wiphy_new_nm" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x100c5019, "cfg80211_wext_giwrange" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x61aa704, "cfg80211_wext_giwmode" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x60cc62c0, "iw_handler_set_spy" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1c9bbae, "cfg80211_wext_giwname" },
	{ 0x69acdf38, "memcpy" },
	{ 0x121ec540, "cfg80211_wext_giwscan" },
	{ 0x71deb539, "request_firmware" },
	{ 0x7a4497db, "kzfree" },
	{ 0xc5534d64, "ioread16" },
	{ 0xbac50aea, "cfg80211_wext_giwrts" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x12c2821e, "cfg80211_wext_siwfrag" },
	{ 0x15314fce, "consume_skb" },
	{ 0xc223db15, "cfg80211_scan_done" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xede283d, "release_firmware" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "A3005614B229A4D8DB60F5D");
