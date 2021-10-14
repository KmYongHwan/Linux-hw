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
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0xede283d, "release_firmware" },
	{ 0x71deb539, "request_firmware" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x31b31f5c, "csum_partial_copy_nocheck" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xc5850110, "printk" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xb871c87f, "pci_set_mwi" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x69acdf38, "memcpy" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x15314fce, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xd2b13065, "pci_clear_mwi" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B7d00009900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009902sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009904sv*sd00001000bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009904sv*sd00001102bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009904sv*sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009905sv*sd00001101bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009905sv*sd00001102bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009905sv*sd00002101bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009905sv*sd00002102bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009908sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009909sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d0000990Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CD222442E518D83F933447A");
