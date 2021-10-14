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
	{ 0x5d6a04c4, "ieee80211_rx_irqsafe" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x70691c99, "single_open" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x275867e8, "ieee80211_bss_get_elem" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa071f2c6, "single_release" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x85acbdf0, "ieee80211_cqm_rssi_notify" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x22e71afc, "ieee80211_beacon_get_tim" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xc4142837, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf36cc24f, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdcf29e6f, "ieee80211_scan_completed" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xcec6343e, "seq_read" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x6f3c3906, "ieee80211_stop_queue" },
	{ 0x848b35c9, "ieee80211_tx_status" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdefbea52, "default_llseek" },
	{ 0x6a4d5534, "cfg80211_get_bss" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x9f5febc5, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6626afca, "down" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb18156be, "skb_pull" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xd6cfed90, "cfg80211_put_bss" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9e4f6c37, "ieee80211_sta_set_buffered" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xe345725f, "ieee80211_get_key_rx_seq" },
	{ 0xeb5677a4, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x17e93065, "ieee80211_wake_queue" },
	{ 0x84972054, "param_ops_byte" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x11cd5fa9, "ieee80211_register_hw" },
	{ 0xcec1e9b6, "ieee80211_pspoll_get" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0xa95471d5, "ieee80211_nullfunc_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0xcf2a6966, "up" },
	{ 0x71deb539, "request_firmware" },
	{ 0x40d52ed1, "ieee80211_probereq_get" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0x15314fce, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xede283d, "release_firmware" },
	{ 0x84e25cd4, "ieee80211_connection_loss" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "B9DE3BFE62F8058B8352A71");
