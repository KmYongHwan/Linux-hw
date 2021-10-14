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
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x7bb4cda4, "skb_add_rx_frag" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x5daab43a, "__napi_alloc_skb" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0xc60854c8, "kmem_cache_alloc_node_trace" },
	{ 0xc2c5802, "work_busy" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x40393bfd, "dev_set_mac_address" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x7c083e8, "skb_checksum_help" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x2a9b4f39, "usb_autopm_get_interface_async" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xb0c22846, "__skb_gso_segment" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x706ccad, "usb_autopm_put_interface_async" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0xce1fec0d, "usb_enable_lpm" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x383dd35e, "usb_driver_set_configuration" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x40555496, "usb_reset_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0x5a03a8c6, "netdev_notice" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x1f37da0c, "usb_queue_reset_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x90de418b, "mii_nway_restart" },
	{ 0x7404840e, "mii_ethtool_get_link_ksettings" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3fa55769, "__put_page" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x15314fce, "consume_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x3c24030c, "usb_autopm_put_interface" },
	{ 0xc576c069, "usb_autopm_get_interface" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "FA86E4C9EBDCC1E1B2DBB6F");
