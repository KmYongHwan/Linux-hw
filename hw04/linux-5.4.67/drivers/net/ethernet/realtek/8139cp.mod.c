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
	{ 0x349cba85, "strchr" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x5daab43a, "__napi_alloc_skb" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7bbc3d3f, "__napi_schedule_irqoff" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xd20fc08f, "mii_check_media" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xb871c87f, "pci_set_mwi" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x68fb4f56, "generic_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0x90de418b, "mii_nway_restart" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x7404840e, "mii_ethtool_get_link_ksettings" },
	{ 0x5d4b2462, "mii_ethtool_set_link_ksettings" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xd2b13065, "pci_clear_mwi" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v000010ECd00008139sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000357d0000000Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "827B27CED837CAD93E0EBA8");
