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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0xe4b30419, "build_skb" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0x71deb539, "request_firmware" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0xede283d, "release_firmware" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9ad03563, "pci_disable_pcie_error_reporting" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x1c437023, "device_set_wakeup_capable" },
	{ 0x85a49dc7, "pci_vpd_find_info_keyword" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x754d539c, "strlen" },
	{ 0xf1361941, "pci_vpd_find_tag" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x6d22963d, "pci_find_capability" },
	{ 0xc21e426e, "pci_enable_pcie_error_reporting" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x15314fce, "consume_skb" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xd368c71c, "pci_wake_from_d3" },
	{ 0xf04187ce, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x15af7f4, "system_state" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xfb578fc5, "memset" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcc8afd53, "pci_enable_msix_range" },
	{ 0x7763ec00, "netif_set_real_num_rx_queues" },
	{ 0xcab3e906, "netif_set_real_num_tx_queues" },
	{ 0xe914e41e, "strcpy" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x999e8297, "vfree" },
	{ 0x37a0cba, "kfree" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0x87f5f48a, "pci_disable_msix" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc5850110, "printk" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d0000164Asv0000103Csd00003101bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Asv0000103Csd00003106bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016AAsv0000103Csd00003102bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001639sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F79E78CE041E94667B0F617");
