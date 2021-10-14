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
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x74d22198, "phy_ethtool_set_link_ksettings" },
	{ 0x982fe6e6, "phy_ethtool_get_link_ksettings" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0x762c9c79, "phy_ethtool_nway_reset" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x7bbc3d3f, "__napi_schedule_irqoff" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x342410f4, "phy_start_aneg" },
	{ 0x2c5e4e3e, "phy_set_asym_pause" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x7bb4cda4, "skb_add_rx_frag" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x5daab43a, "__napi_alloc_skb" },
	{ 0x15314fce, "consume_skb" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x1fe912f1, "netdev_alloc_frag" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf08c67de, "napi_alloc_frag" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9198c918, "softnet_data" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c64ae14, "devm_mdiobus_alloc_size" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8d4bed43, "phy_disconnect" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x5a889429, "phy_stop" },
	{ 0xaad3d693, "phy_mii_ioctl" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x3fa55769, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Caurora,nb8800");
MODULE_ALIAS("of:N*T*Caurora,nb8800C*");
MODULE_ALIAS("of:N*T*Csigma,smp8642-ethernet");
MODULE_ALIAS("of:N*T*Csigma,smp8642-ethernetC*");
MODULE_ALIAS("of:N*T*Csigma,smp8734-ethernet");
MODULE_ALIAS("of:N*T*Csigma,smp8734-ethernetC*");

MODULE_INFO(srcversion, "0909ACB1BBC693BC055F556");
