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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xd348db09, "libipw_xmit" },
	{ 0xa41935ec, "pm_qos_remove_request" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x28a8c058, "pm_qos_add_request" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x61a3dea9, "libipw_rx_mgt" },
	{ 0xb0e602eb, "memmove" },
	{ 0x49267562, "libipw_rx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x1b098acb, "wiphy_register" },
	{ 0x4b417881, "libipw_get_geo" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdcd39b2, "alloc_libipw" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x71deb539, "request_firmware" },
	{ 0x203c6c1f, "libipw_networks_age" },
	{ 0xc3b541db, "libipw_set_geo" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xede283d, "release_firmware" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x51a24c43, "free_libipw" },
	{ 0xc698a562, "wiphy_unregister" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xe4233013, "pm_qos_update_request" },
	{ 0xf10de535, "ioread8" },
	{ 0xc5534d64, "ioread16" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfb578fc5, "memset" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x15314fce, "consume_skb" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x11089ac7, "_ctype" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3623ac30, "libipw_wx_get_scan" },
	{ 0xb3fb445e, "libipw_wx_set_encode" },
	{ 0xd69e511f, "libipw_wx_get_encode" },
	{ 0x7cb6dc1a, "libipw_wx_set_encodeext" },
	{ 0x783484b, "libipw_wx_get_encodeext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x754d539c, "strlen" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xc1e1b97f, "wiphy_rfkill_set_hw_state" },
	{ 0xe484e35f, "ioread32" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6e05d404, "libipw_txb_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x69acdf38, "memcpy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x163ea90b, "wireless_send_event" },
	{ 0xc5850110, "printk" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libipw,cfg80211");

MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002520bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002521bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002524bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002525bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002526bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002522bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002523bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002527bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002528bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002529bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd0000252Bbc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd0000252Cbc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd0000252Dbc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002550bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002551bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002553bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002554bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002555bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002560bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002562bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002563bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002561bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002565bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002566bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002567bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002570bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002580bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002582bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002583bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002581bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002585bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002586bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002587bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002590bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002592bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002591bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002593bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002596bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002598bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd000025A0bc*sc*i*");

MODULE_INFO(srcversion, "98E74B18E2326AC10863ABE");
