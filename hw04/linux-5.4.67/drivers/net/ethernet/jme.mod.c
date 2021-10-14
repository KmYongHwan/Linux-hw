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
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8a7979c4, "pci_pme_active" },
	{ 0x12a38747, "usleep_range" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xc38973ed, "pci_disable_link_state" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x68fb4f56, "generic_mii_ioctl" },
	{ 0xea08bafa, "netdev_update_features" },
	{ 0x5792f848, "strlcpy" },
	{ 0x7404840e, "mii_ethtool_get_link_ksettings" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x15314fce, "consume_skb" },
	{ 0x5d4b2462, "mii_ethtool_set_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v0000197Bd00000250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00000260sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1A32C94CEED11CDDAB36889");
