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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca0e475a, "ethtool_op_get_ts_info" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x9778e580, "usb_get_from_anchor" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc576c069, "usb_autopm_get_interface" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x674829b1, "usb_get_urb" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x4d7cadaa, "usb_string" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x90de418b, "mii_nway_restart" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x706ccad, "usb_autopm_put_interface_async" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x5d4b2462, "mii_ethtool_set_link_ksettings" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x2a9b4f39, "usb_autopm_get_interface_async" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x13f99d62, "usb_clear_halt" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xed1924a1, "skb_defer_rx_timestamp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7404840e, "mii_ethtool_get_link_ksettings" },
	{ 0xc6c6ab3, "usb_autopm_get_interface_no_resume" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc002153b, "mii_link_ok" },
	{ 0x15314fce, "consume_skb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x3c24030c, "usb_autopm_put_interface" },
	{ 0x769cd94d, "usb_anchor_urb" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "mii");


MODULE_INFO(srcversion, "D5A986C05E613A10212BB7A");
