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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x66e9f04d, "release_sock" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcba1a7c4, "sock_init_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x49045426, "icmp_err_convert" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x4fc02643, "rhashtable_walk_exit" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xf24bc9d7, "rps_sock_flow_table" },
	{ 0x59a11eaf, "crypto_alloc_shash" },
	{ 0x8062d817, "iov_iter_revert" },
	{ 0xac537ac2, "percpu_counter_destroy" },
	{ 0xaad0ae78, "__bitmap_shift_right" },
	{ 0xfc071489, "ip_getsockopt" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4d1c812e, "reuseport_detach_sock" },
	{ 0x754d539c, "strlen" },
	{ 0xe7dd4c18, "ipv6_getsockopt" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x6aa56670, "ipv6_chk_addr" },
	{ 0xcd5835b, "ipv6_flowlabel_exclusive" },
	{ 0xa1750c59, "ip_setsockopt" },
	{ 0x7da9e8ce, "security_inet_conn_established" },
	{ 0xcb48ab33, "from_kuid_munged" },
	{ 0x417488f5, "inet6_add_protocol" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x66984dba, "send_sig" },
	{ 0x84827b14, "compat_ipv6_getsockopt" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd81314bf, "sk_setup_caps" },
	{ 0xb3351c6c, "rhashtable_walk_next" },
	{ 0xbc794b62, "security_sctp_bind_connect" },
	{ 0x4c764fdc, "sock_gettstamp" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x40aebdcf, "sock_release" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xa8b80792, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb223decf, "inet_sk_set_state" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x12950e37, "skb_copy" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x628523ae, "proc_create_net_single" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x37bc3020, "rhltable_init" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x8eb1ec51, "ipv6_dup_options" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcbb1f72a, "inet_sendmsg" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0x45e69e01, "prepare_to_wait_exclusive" },
	{ 0xa5d84659, "inet6_release" },
	{ 0xae316c11, "icmpv6_err_convert" },
	{ 0xed8ffca4, "inet6_register_protosw" },
	{ 0x1ca739d9, "reuseport_alloc" },
	{ 0xf75ad9ad, "__skb_checksum" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0xdd9cd2ad, "skb_set_owner_w" },
	{ 0x2b71cdb8, "inet_del_protocol" },
	{ 0xc64416e5, "security_sctp_assoc_request" },
	{ 0xf3f1eb1b, "ip6_xmit" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd48a58f4, "sock_i_ino" },
	{ 0xf415094f, "inet6_getname" },
	{ 0xb15b4109, "crc32c" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0xf2b33cb7, "memory_cgrp_subsys_on_dfl_key" },
	{ 0x2a186953, "bpf_trace_run3" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x88a67e53, "sk_common_release" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x603ba1d2, "compat_sock_common_setsockopt" },
	{ 0xa3dd0759, "sock_no_sendpage" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xdeb7eb4, "compat_sock_common_getsockopt" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0xfb578fc5, "memset" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0xee8de09d, "compat_ip_getsockopt" },
	{ 0x5674b3cb, "rhashtable_free_and_destroy" },
	{ 0x545a9fbb, "ip6_dst_lookup_flow" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x3dabf271, "memcg_sockets_enabled_key" },
	{ 0x46612729, "sk_alloc" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0xba312d7b, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x52b48091, "skb_copy_datagram_iter" },
	{ 0xe21e70bc, "rhashtable_walk_stop" },
	{ 0x484ecab2, "inet6_ioctl" },
	{ 0xc5850110, "printk" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x3d669121, "inet_addr_type" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0xe590dea3, "sk_busy_loop_end" },
	{ 0xf08050c4, "rhashtable_walk_start_check" },
	{ 0x56802ae8, "rps_cpu_mask" },
	{ 0x60572429, "sock_prot_inuse_add" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xacde0476, "crypto_shash_digest" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0x507ebc7d, "fl6_update_dst" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xd0dabec4, "__sk_mem_reclaim" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0xd1b30930, "__ip_queue_xmit" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0xd76445a2, "inet_del_offload" },
	{ 0xb2cdf064, "proc_mkdir_data" },
	{ 0x954f099c, "idr_preload" },
	{ 0x91b9215a, "dev_get_by_index_rcu" },
	{ 0x8c7f745, "sock_wake_async" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xbe2849ad, "inet_shutdown" },
	{ 0xb601bfb9, "inet_add_protocol" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x7074f983, "inet_add_offload" },
	{ 0xb18156be, "skb_pull" },
	{ 0x3bf58509, "crypto_shash_setkey" },
	{ 0x3785c132, "init_net" },
	{ 0x42593850, "inet_accept" },
	{ 0xa0fd0123, "fput" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x2a557900, "sk_filter_trim_cap" },
	{ 0x319d493d, "proc_dostring" },
	{ 0x3005c753, "reuseport_select_sock" },
	{ 0x9942fb52, "reuseport_add_sock" },
	{ 0x5a5bc92e, "inet_ioctl" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x3f7763de, "inet_ctl_sock_create" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xc81e91a8, "napi_busy_loop" },
	{ 0xadd139d4, "rfs_needed" },
	{ 0x4dcde7e3, "__sock_recv_ts_and_drops" },
	{ 0x399bb8c0, "__wake_up_sync_key" },
	{ 0xf12bcde7, "skb_copy_expand" },
	{ 0xbb9c728c, "proto_register" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xed61e42d, "inet_release" },
	{ 0x50f91491, "__genradix_ptr" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x54e6fcdd, "net_enable_timestamp" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xcea0c0ff, "security_sctp_sk_clone" },
	{ 0x1865e519, "proto_unregister" },
	{ 0xe2dae6b4, "inet_getname" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x49e6d078, "inet6_del_protocol" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9699df20, "sock_kmalloc" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x896e0303, "inet_sock_destruct" },
	{ 0x9feed7ce, "timer_reduce" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0x5cf7aa0e, "put_cmsg" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x20cbb30a, "__percpu_counter_init" },
	{ 0xc71e64a9, "snmp_get_cpu_field" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35fac541, "proc_create_net_data" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbda1d8ac, "compat_ip_setsockopt" },
	{ 0xde1eac14, "sock_alloc_file" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x51674ac6, "ipv6_setsockopt" },
	{ 0x400035e7, "__sk_mem_schedule" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x555f9eca, "rhashtable_walk_enter" },
	{ 0xbb038948, "ip_route_output_flow" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2581e3be, "remove_proc_subtree" },
	{ 0x5083ef8f, "sock_common_setsockopt" },
	{ 0x3a48c0e4, "bpf_trace_run2" },
	{ 0xf9778613, "__xfrm_policy_check" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xd25e7156, "in6_dev_finish_destroy" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x801f93f2, "inet_register_protosw" },
	{ 0x37a0cba, "kfree" },
	{ 0xf5a20ed2, "__genradix_prealloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0x5c8b5637, "fd_install" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xc9b0855e, "sock_create" },
	{ 0x1bf9ff37, "inet_bind" },
	{ 0x71190f1e, "sock_common_getsockopt" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe0d14781, "__ip_dev_find" },
	{ 0x8b75640d, "skb_segment" },
	{ 0x7a4497db, "kzfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5be63c5b, "crc32c_csum_stub" },
	{ 0xb5064d8b, "inet6_unregister_protosw" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xe146138f, "inet6_bind" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6526e2, "inet6_add_offload" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x15314fce, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x77952e4f, "__fl6_sock_lookup" },
	{ 0x9111d3b6, "register_net_sysctl" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xbdd0a203, "sock_wfree" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0x3c953993, "inet_unregister_protosw" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x27fa66e1, "nr_free_buffer_pages" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x506dff1a, "__genradix_free" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xe2dcb84f, "inet_get_local_port_range" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc010edb1, "sock_i_uid" },
	{ 0x1c681750, "compat_ipv6_setsockopt" },
	{ 0x56253529, "inet6_destroy_sock" },
	{ 0x502177f7, "inet_recvmsg" },
};

MODULE_INFO(depends, "libcrc32c");


MODULE_INFO(srcversion, "738E639B9575F9ECE14A9D6");
