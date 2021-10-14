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
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x349cba85, "strchr" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x7bbc3d3f, "__napi_schedule_irqoff" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x95451c3, "netdev_alert" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xfe64b80a, "netif_tx_stop_all_queues" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x7763ec00, "netif_set_real_num_rx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcab3e906, "netif_set_real_num_tx_queues" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x9198c918, "softnet_data" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfe916dc6, "hex_dump_to_buffer" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0x8cba6c0b, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7bb4cda4, "skb_add_rx_frag" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x15314fce, "consume_skb" },
	{ 0x5daab43a, "__napi_alloc_skb" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa637b975, "dma_ops" },
	{ 0x3fa55769, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000016C3d00007302sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4D38888A90C6F254171BAA7");
