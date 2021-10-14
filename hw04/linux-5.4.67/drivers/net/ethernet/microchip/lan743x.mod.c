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
	{ 0xf3744f5f, "netdev_info" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x8d4bed43, "phy_disconnect" },
	{ 0x8af8c34d, "ptp_schedule_worker" },
	{ 0x5a889429, "phy_stop" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x87f5f48a, "pci_disable_msix" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0x6ecaed18, "phy_ethtool_get_wol" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x927a00cc, "phy_support_asym_pause" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c64ae14, "devm_mdiobus_alloc_size" },
	{ 0xbeb032cb, "phy_ethtool_get_eee" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x342410f4, "phy_start_aneg" },
	{ 0xccbc429c, "ptp_clock_unregister" },
	{ 0x26c6d6e, "phy_print_status" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xfb578fc5, "memset" },
	{ 0xe64ea93a, "phy_remove_link_mode" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xb8e75250, "phy_start" },
	{ 0x9b34997c, "phy_find_first" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xbd6841d4, "crc16" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0xc1d2d562, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x79093209, "devm_alloc_etherdev_mqs" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x85ef0bf5, "phy_init_eee" },
	{ 0x982fe6e6, "phy_ethtool_get_link_ksettings" },
	{ 0xafaf0e45, "pci_select_bars" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcc8afd53, "pci_enable_msix_range" },
	{ 0x94c13bd7, "eth_prepare_mac_addr_change" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xfdbaf8c3, "phy_connect_direct" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x42e842c6, "phy_ethtool_set_wol" },
	{ 0x74d22198, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x17212a9a, "ptp_clock_index" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0x21815954, "pci_prepare_to_sleep" },
	{ 0x5c415271, "devm_ioremap" },
	{ 0x104220e0, "phy_ethtool_set_eee" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xaad3d693, "phy_mii_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x15314fce, "consume_skb" },
	{ 0xef53f3b5, "pci_enable_device_mem" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xfe31ba97, "pci_release_selected_regions" },
	{ 0xd8a909f7, "pci_request_selected_regions" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa637b975, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3B245B3A274D1AF5CA7C45F");
