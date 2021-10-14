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
	{ 0x74d22198, "phy_ethtool_set_link_ksettings" },
	{ 0x982fe6e6, "phy_ethtool_get_link_ksettings" },
	{ 0xca0e475a, "ethtool_op_get_ts_info" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xb8e75250, "phy_start" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x5a889429, "phy_stop" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x15314fce, "consume_skb" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x11d80dd4, "__skb_pad" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0x9198c918, "softnet_data" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x26c6d6e, "phy_print_status" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xa3a17ff3, "phy_attached_info" },
	{ 0xcb3282b, "phy_set_max_speed" },
	{ 0xf27acad9, "phy_connect" },
	{ 0x9b34997c, "phy_find_first" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb8956b20, "mdiobus_alloc_size" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xaad3d693, "phy_mii_ioctl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf10de535, "ioread8" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x7bbc3d3f, "__napi_schedule_irqoff" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc5534d64, "ioread16" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0xbf023123, "mdiobus_free" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000017F3d00006040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D908CD3BF84D83992D15CFC");
