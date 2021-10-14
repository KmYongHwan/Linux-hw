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
	{ 0xea4c5e82, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x89b6037a, "ieee802154_hdr_push" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xe77cae40, "wpan_phy_new" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x2a186953, "bpf_trace_run3" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xa17f5f47, "crypto_alloc_sync_skcipher" },
	{ 0xdbed3cd3, "ieee802154_hdr_pull" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x2f89cc53, "bpf_trace_run1" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x44f68b67, "wpan_phy_free" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf682fb8c, "ieee802154_hdr_peek" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xcd47e287, "crypto_aead_encrypt" },
	{ 0xd5b8b3f8, "wpan_phy_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x5a9ed457, "crypto_aead_setkey" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xf12bcde7, "skb_copy_expand" },
	{ 0xfa6e62c1, "crypto_skcipher_decrypt" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0x3bd997c9, "wpan_phy_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1cd2555a, "ieee802154_hdr_peek_addrs" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0x6c2b627a, "crypto_aead_decrypt" },
	{ 0x95195e25, "crypto_aead_setauthsize" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x3a48c0e4, "bpf_trace_run2" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x63344450, "crypto_alloc_aead" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0x61963a6c, "dev_alloc_name" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x15314fce, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x78b49955, "bpf_trace_run4" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x87e2553b, "ieee802154_max_payload" },
	{ 0x67d8bcc9, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "ieee802154");


MODULE_INFO(srcversion, "A42EBB92EC6FACB8F5FD61B");
