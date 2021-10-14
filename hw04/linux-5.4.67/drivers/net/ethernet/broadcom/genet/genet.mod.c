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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xca0e475a, "ethtool_op_get_ts_info" },
	{ 0x8d4bed43, "phy_disconnect" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0x815588a6, "clk_enable" },
	{ 0x5a889429, "phy_stop" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x7bbc3d3f, "__napi_schedule_irqoff" },
	{ 0xbcab0ef6, "phy_resume" },
	{ 0x1f406f14, "netdev_boot_setup_check" },
	{ 0x4971717c, "phy_ethtool_ksettings_set" },
	{ 0xa34df50d, "phy_init_hw" },
	{ 0x99e26883, "phy_ethtool_ksettings_get" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8ac3334b, "net_dim_get_def_rx_moderation" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x762c9c79, "phy_ethtool_nway_reset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x45d7679, "mdiobus_write" },
	{ 0x7f7bebad, "__genphy_config_aneg" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x99d472b1, "net_dim_get_rx_moderation" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x55f384b9, "skb_realloc_headroom" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xbeb032cb, "phy_ethtool_get_eee" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x26c6d6e, "phy_print_status" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x73a532d5, "phy_mac_interrupt" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xb8e75250, "phy_start" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x7763ec00, "netif_set_real_num_rx_queues" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xcab3e906, "netif_set_real_num_tx_queues" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x51b98543, "fixed_phy_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x59556df0, "fixed_phy_set_link_update" },
	{ 0xb18156be, "skb_pull" },
	{ 0xce42b30d, "phy_suspend" },
	{ 0x9198c918, "softnet_data" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x40b69005, "platform_device_add_resources" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x85ef0bf5, "phy_init_eee" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7f52071a, "net_dim" },
	{ 0xfdbaf8c3, "phy_connect_direct" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa9dcba35, "pm_wakeup_dev_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x6cbe5161, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x104220e0, "phy_ethtool_set_eee" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xc7408d73, "phy_attach" },
	{ 0xaad3d693, "phy_mii_ioctl" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x15314fce, "consume_skb" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x1c437023, "device_set_wakeup_capable" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
	{ 0xa637b975, "dma_ops" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0xcb3282b, "phy_set_max_speed" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xd2f40230, "netdev_crit" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,genet-v1");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v1C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v2");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v2C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v3");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v3C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v4");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v4C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v5");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v5C*");

MODULE_INFO(srcversion, "802E1D7B6C7D6EB04B70E04");
