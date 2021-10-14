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
	{ 0x442639ef, "param_ops_uint" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcc8afd53, "pci_enable_msix_range" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x15314fce, "consume_skb" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xfe64b80a, "netif_tx_stop_all_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5792f848, "strlcpy" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x87f5f48a, "pci_disable_msix" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xb18156be, "skb_pull" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb578fc5, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000017D5d00005731sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D5d00005831sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D5d00005732sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D5d00005832sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "10179816C2F6F9F27585A8A");
