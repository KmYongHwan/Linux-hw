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
	{ 0xf3744f5f, "netdev_info" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0xaf770f2c, "pci_enable_sriov" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x7bbc3d3f, "__napi_schedule_irqoff" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xccd77df3, "__skb_flow_dissect" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xc3030f67, "napi_hash_del" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x87f5f48a, "pci_disable_msix" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x5c8f0a1a, "pci_disable_sriov" },
	{ 0xd02d0ca2, "__hw_addr_sync_dev" },
	{ 0xbc3bdc7f, "flow_get_u32_src" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x8a5087f2, "call_netdevice_notifiers" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x70ebd226, "rps_may_expire_flow" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xf10de535, "ioread8" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xc025016c, "flow_keys_dissector" },
	{ 0x5d41d08f, "netif_set_xps_queue" },
	{ 0xc5850110, "printk" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xf04187ce, "dev_close" },
	{ 0x7763ec00, "netif_set_real_num_rx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcab3e906, "netif_set_real_num_tx_queues" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9198c918, "softnet_data" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x6f791233, "alloc_cpu_rmap" },
	{ 0xc8a91f5b, "cpumask_local_spread" },
	{ 0x810be09, "free_irq_cpu_rmap" },
	{ 0x638f26ad, "dev_open" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0xa7738e27, "__hw_addr_unsync_dev" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xcc8afd53, "pci_enable_msix_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x8b5b25c8, "irq_cpu_rmap_add" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x8516c14a, "flow_get_u32_dst" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x15314fce, "consume_skb" },
	{ 0xef53f3b5, "pci_enable_device_mem" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xef04b368, "pci_find_ext_capability" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa637b975, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001137d00000043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001137d00000044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001137d00000071sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "406833034A3F1826069FD6B");
