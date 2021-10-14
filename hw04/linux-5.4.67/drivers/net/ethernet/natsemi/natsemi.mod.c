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
	{ 0xaad49c42, "param_array_ops" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x15314fce, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000100Bd00000020sv000012D9sd0000000Cbc*sc*i*");
MODULE_ALIAS("pci:v0000100Bd00000020sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "83AC7EBAC3B75DB703337AE");
