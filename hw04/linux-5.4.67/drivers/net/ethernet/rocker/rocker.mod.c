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
	{ 0xddce8d3c, "napi_disable" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xefb03558, "netdev_walk_all_lower_dev" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xee0c6453, "arp_tbl" },
	{ 0x87f5f48a, "pci_disable_msix" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xa99b39c2, "prandom_bytes" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xee38ef57, "register_switchdev_blocking_notifier" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x37dde473, "neigh_destroy" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xaa93d096, "__neigh_create" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa48ac55f, "__neigh_event_send" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xad645234, "register_switchdev_notifier" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6d294e43, "clock_t_to_jiffies" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfc3bba0f, "unregister_fib_notifier" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x4fe1eddf, "unregister_netevent_notifier" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc5ee0d1a, "fib4_rule_default" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x8677245d, "unregister_switchdev_blocking_notifier" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3785c132, "init_net" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2697b48, "free_fib_info" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xcc8afd53, "pci_enable_msix_range" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xe2b3207a, "unregister_switchdev_notifier" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x15314fce, "consume_skb" },
	{ 0x6cff3b90, "register_fib_notifier" },
	{ 0x4761f17c, "register_netevent_notifier" },
	{ 0x274c5c0a, "call_switchdev_notifiers" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xe28e247d, "pci_msix_vec_count" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa637b975, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001B36d00000006sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D2B81450988B5449985276D");
