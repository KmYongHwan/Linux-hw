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
	{ 0x9b19ea10, "iw_handler_get_thrspy" },
	{ 0x3dcd2310, "iw_handler_set_thrspy" },
	{ 0xdd78daa8, "iw_handler_get_spy" },
	{ 0x60cc62c0, "iw_handler_set_spy" },
	{ 0xe1c9bbae, "cfg80211_wext_giwname" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xd348db09, "libipw_xmit" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xc35a23d5, "driver_remove_file" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xfa52aa89, "driver_create_file" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x1b098acb, "wiphy_register" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc3b541db, "libipw_set_geo" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x203c6c1f, "libipw_networks_age" },
	{ 0x71deb539, "request_firmware" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x12950e37, "skb_copy" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xb18156be, "skb_pull" },
	{ 0x61a3dea9, "libipw_rx_mgt" },
	{ 0x49267562, "libipw_rx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xb0e602eb, "memmove" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xc698a562, "wiphy_unregister" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x6e05d404, "libipw_txb_free" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x4194b22d, "libipw_freq_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb3fb445e, "libipw_wx_set_encode" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xede283d, "release_firmware" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x163ea90b, "wireless_send_event" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x3623ac30, "libipw_wx_get_scan" },
	{ 0xd69e511f, "libipw_wx_get_encode" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7cb6dc1a, "libipw_wx_set_encodeext" },
	{ 0x783484b, "libipw_wx_get_encodeext" },
	{ 0xfedb5e6b, "libipw_channel_to_index" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc1e1b97f, "wiphy_rfkill_set_hw_state" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9166fada, "strncpy" },
	{ 0x349cba85, "strchr" },
	{ 0xeceaa5a0, "libipw_is_valid_channel" },
	{ 0x4b417881, "libipw_get_geo" },
	{ 0x754d539c, "strlen" },
	{ 0x15314fce, "consume_skb" },
	{ 0x51a24c43, "free_libipw" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xdcd39b2, "alloc_libipw" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x11089ac7, "_ctype" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc5850110, "printk" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cfg80211,libipw");

MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002701bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002702bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002711bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002712bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002721bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002722bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002731bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002732bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002741bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv0000103Csd00002741bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002742bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002751bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002752bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002753bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002754bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002761bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002762bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004221sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004223sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004224sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "60237B8495EFF30A2F7123C");
