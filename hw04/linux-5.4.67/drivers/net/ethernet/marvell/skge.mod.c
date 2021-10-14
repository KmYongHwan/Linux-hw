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
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x754d539c, "strlen" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x11d80dd4, "__skb_pad" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xf04187ce, "dev_close" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x15314fce, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5a03a8c6, "netdev_notice" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x87b4f5a9, "netdev_printk" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x5792f848, "strlcpy" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0x6d22963d, "pci_find_capability" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xfb578fc5, "memset" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xd368c71c, "pci_wake_from_d3" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B7d00001700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d000080EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004B01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004C00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001371d0000434Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001032sv*sd00000015bc*sc*i*");

MODULE_INFO(srcversion, "7DF1EDA4FEC7FC90BAF1A2B");
