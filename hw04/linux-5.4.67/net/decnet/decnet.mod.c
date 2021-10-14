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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x66e9f04d, "release_sock" },
	{ 0xe31c4d93, "neigh_lookup" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xbcde298, "dev_load" },
	{ 0xcba1a7c4, "sock_init_data" },
	{ 0xc46bedbf, "proc_create_seq_private" },
	{ 0xac537ac2, "percpu_counter_destroy" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x66984dba, "send_sig" },
	{ 0x2292635f, "sk_stop_timer" },
	{ 0x9762d7f1, "rtnetlink_put_metrics" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xdb8e7ec7, "dst_dev_put" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xa8b80792, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x1a8edf00, "nf_getsockopt" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x7a42bc96, "dev_get_by_name" },
	{ 0x12950e37, "skb_copy" },
	{ 0xc4142837, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4cd71f31, "rtnl_notify" },
	{ 0x41165600, "neigh_table_init" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf71c17fa, "neigh_seq_stop" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x969846cf, "__dst_destroy_metrics_generic" },
	{ 0xdd9cd2ad, "skb_set_owner_w" },
	{ 0x37dde473, "neigh_destroy" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1ef238a2, "sock_rfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x55f384b9, "skb_realloc_headroom" },
	{ 0xf591753d, "nf_hooks_needed" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x6e2c28c7, "dst_alloc" },
	{ 0x8963ee0d, "neigh_lookup_nodev" },
	{ 0xbb16b90e, "neigh_parms_release" },
	{ 0xaa93d096, "__neigh_create" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbc376b57, "skb_unlink" },
	{ 0x46a8862b, "nf_hook_slow" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa8a40b25, "dev_mc_add" },
	{ 0xa3dd0759, "sock_no_sendpage" },
	{ 0xc15ae4c3, "nf_setsockopt" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x46612729, "sk_alloc" },
	{ 0x9e4e6af, "rtnl_register_module" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf1e046cc, "panic" },
	{ 0x190c9cd7, "dst_discard_out" },
	{ 0xa5c8e942, "dev_mc_del" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xf6523542, "dev_get_by_index" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xb18156be, "skb_pull" },
	{ 0x74cc7aa4, "sk_dst_check" },
	{ 0x3785c132, "init_net" },
	{ 0x819cae46, "__dev_get_by_index" },
	{ 0x2a557900, "sk_filter_trim_cap" },
	{ 0x319d493d, "proc_dostring" },
	{ 0x872f0d3, "dst_cow_metrics_generic" },
	{ 0x9f4efd0b, "rtnl_unicast" },
	{ 0xf9e7b235, "__sk_receive_skb" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x20bdf071, "neigh_table_clear" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xbb9c728c, "proto_register" },
	{ 0x471754f1, "rtnl_set_sk_err" },
	{ 0xd58732a8, "sk_reset_timer" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x89462ec1, "netlink_capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x97493cb0, "datagram_poll" },
	{ 0xbeeca5db, "sock_register" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x403bb3a9, "neigh_for_each" },
	{ 0x652ce9aa, "nla_memcmp" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xea2babe1, "dst_release_immediate" },
	{ 0xf8b90c94, "sock_alloc_send_skb" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0x20cbb30a, "__percpu_counter_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35fac541, "proc_create_net_data" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x230d29fa, "neigh_seq_start" },
	{ 0x73d7d3b1, "__dev_get_by_name" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe269a956, "neigh_parms_alloc" },
	{ 0x12073e9f, "sk_stream_error" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xb0209a6c, "neigh_ifdown" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xc52a675c, "neigh_seq_next" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xc74fa8ce, "rtnl_put_cacheinfo" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6b95e068, "dev_add_pack" },
	{ 0x15314fce, "consume_skb" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x9111d3b6, "register_net_sysctl" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x112dfe9e, "xfrm_lookup" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0x523cfbfd, "_copy_to_iter" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "814A6B0F2D9085063B1BB57");
