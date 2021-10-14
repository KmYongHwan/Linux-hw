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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xdbccbf4f, "wimax_dev_init" },
	{ 0x349cba85, "strchr" },
	{ 0xb74f842f, "debugfs_create_u8" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x7793ff74, "wimax_report_rfkill_sw" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xecd60e51, "wimax_msg_data" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x25819aaf, "wimax_state_change" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x7f6e9fba, "wimax_msg_send" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2fc2002b, "simple_attr_read" },
	{ 0x77179d2e, "param_ops_string" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe31ef352, "debugfs_create_u32" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0xdefbea52, "default_llseek" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xa27f4abe, "wimax_msg_data_len" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x8dcb06b3, "debugfs_create_size_t" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xed94c3bd, "wimax_state_get" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x63331ce9, "simple_attr_release" },
	{ 0xb18156be, "skb_pull" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb64b1e36, "wimax_report_rfkill_hw" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xa916b694, "strnlen" },
	{ 0xcb488f51, "wimax_msg_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xde5bab74, "wimax_dev_add" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x62468641, "wimax_dev_rm" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x64c76542, "wimax_msg" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x71deb539, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x15314fce, "consume_skb" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9a087e18, "simple_attr_open" },
	{ 0xede283d, "release_firmware" },
	{ 0xc04c0275, "simple_attr_write" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "wimax");


MODULE_INFO(srcversion, "C2CAB1DE77BBFF967A6FF92");
