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
	{ 0x7709baa0, "ssb_driver_unregister" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x65ae47d0, "__ssb_driver_register" },
	{ 0x3e559cb6, "ssb_pcihost_register" },
	{ 0xb8e75250, "phy_start" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0xb18156be, "skb_pull" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x5daab43a, "__napi_alloc_skb" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x4971717c, "phy_ethtool_ksettings_set" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x5a889429, "phy_stop" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x68fb4f56, "generic_mii_ioctl" },
	{ 0xaad3d693, "phy_mii_ioctl" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xc5850110, "printk" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1c437023, "device_set_wakeup_capable" },
	{ 0xa3a17ff3, "phy_attached_info" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xf27acad9, "phy_connect" },
	{ 0x90356866, "mdiobus_is_registered_device" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb8956b20, "mdiobus_alloc_size" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x57d105d4, "ssb_dma_translation" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xcec732a9, "ssb_bus_powerup" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xbf023123, "mdiobus_free" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0x8d4bed43, "phy_disconnect" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0x7e9d378b, "ssb_bus_may_powerdown" },
	{ 0xc62df2f3, "ssb_device_disable" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xaeee16ae, "ssb_clockspeed" },
	{ 0x2b5f8ab6, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0x1276b7e0, "ssb_device_enable" },
	{ 0xb855d37b, "ssb_device_is_enabled" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x26c6d6e, "phy_print_status" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x99e26883, "phy_ethtool_ksettings_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbb3d2c11, "pv_ops" },
};

MODULE_INFO(depends, "ssb,mii");

MODULE_ALIAS("ssb:v4243id0806rev*");
MODULE_ALIAS("pci:v000014E4d00004401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004402sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8DA5A44EB55ECC69FAACB0A");
