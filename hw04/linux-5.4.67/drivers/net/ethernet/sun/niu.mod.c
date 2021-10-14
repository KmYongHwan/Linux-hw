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
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xfe64b80a, "netif_tx_stop_all_queues" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcab3e906, "netif_set_real_num_tx_queues" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x7763ec00, "netif_set_real_num_rx_queues" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x55e77e8, "jiffies_64" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x754d539c, "strlen" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa9263e2b, "pcie_capability_clear_and_set_word" },
	{ 0xe01dfded, "sysfs_create_link" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x11d80dd4, "__skb_pad" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x55f384b9, "skb_realloc_headroom" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xb18156be, "skb_pull" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x15314fce, "consume_skb" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xcc8afd53, "pci_enable_msix_range" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5792f848, "strlcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x87f5f48a, "pci_disable_msix" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x87b4f5a9, "netdev_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe193ad0d, "sysfs_remove_link" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000108Ed0000ABCDsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E326AECBBC9DB7030940AC4");
