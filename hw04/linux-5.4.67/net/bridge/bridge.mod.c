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
	{ 0xe7750f8, "kobject_put" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xe31c4d93, "neigh_lookup" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb65720f5, "stp_proto_unregister" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x562cd49a, "sysfs_remove_bin_file" },
	{ 0x349cba85, "strchr" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0xac02f806, "nf_queue" },
	{ 0xac537ac2, "percpu_counter_destroy" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x5a03a8c6, "netdev_notice" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xaf95ddb4, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x6aa56670, "ipv6_chk_addr" },
	{ 0x73adf88d, "dev_disable_lro" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3c5f6a30, "dev_uc_add" },
	{ 0xe0ca8433, "netdev_rx_handler_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1e21b48f, "ipv6_dev_mc_dec" },
	{ 0xee0c6453, "arp_tbl" },
	{ 0xfe736ff9, "kobject_uevent" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xa8b80792, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x5b6ed908, "metadata_dst_alloc" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x12950e37, "skb_copy" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x2124474, "ip_send_check" },
	{ 0x5b091fc0, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4cd71f31, "rtnl_notify" },
	{ 0x469a0f73, "ipv6_dev_mc_inc" },
	{ 0xc7a66ee, "netdev_master_upper_dev_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x698c6c6e, "net_ns_get_ownership" },
	{ 0x438e7aae, "dev_set_allmulti" },
	{ 0xb41b35dd, "vlan_vid_del" },
	{ 0x632baade, "is_skb_forwardable" },
	{ 0x8a5087f2, "call_netdevice_notifiers" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x2aad1fd8, "kobject_del" },
	{ 0xa6824f3f, "__tracepoint_br_fdb_external_learn_add" },
	{ 0x37dde473, "neigh_destroy" },
	{ 0xf9216c56, "vlan_vid_add" },
	{ 0x3675f171, "__netpoll_setup" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x9f36457e, "__tracepoint_fdb_delete" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0xf591753d, "nf_hooks_needed" },
	{ 0xa80654d9, "in_dev_finish_destroy" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x85b01f94, "netdev_walk_all_upper_dev_rcu" },
	{ 0x6b0ed89c, "__ip_mc_inc_group" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x46a8862b, "nf_hook_slow" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xb4019bcb, "netdev_master_upper_dev_link" },
	{ 0x22526d17, "switchdev_port_obj_del" },
	{ 0x8f801d8d, "rhashtable_destroy" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xb0cdcf6e, "ip_mc_check_igmp" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0xad645234, "register_switchdev_notifier" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x7bc9e495, "netpoll_send_skb_on_dev" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x894875ce, "switchdev_port_obj_add" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xf7acc097, "sysfs_rename_link_ns" },
	{ 0xcacd88a0, "__tracepoint_br_fdb_update" },
	{ 0x9e4e6af, "rtnl_register_module" },
	{ 0xc0ab6a60, "stp_proto_register" },
	{ 0xba312d7b, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x78b3951c, "__ethtool_get_link_ksettings" },
	{ 0x22196e61, "arp_create" },
	{ 0x6d294e43, "clock_t_to_jiffies" },
	{ 0xc5850110, "printk" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x69364662, "inet_select_addr" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x3419d58, "__skb_warn_lro_forwarding" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xcd279169, "nla_find" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xf8673de, "llc_mac_hdr_init" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x988a6c9b, "netdev_upper_dev_unlink" },
	{ 0x5a921311, "strncmp" },
	{ 0x11a3a74, "ndo_dflt_fdb_dump" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc0536d08, "br_fdb_test_addr_hook" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x652032cb, "mac_pton" },
	{ 0x31785f08, "__tracepoint_br_fdb_add" },
	{ 0xcd9f2192, "arp_send" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa19f26a1, "rtnl_af_unregister" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xf98ef5d7, "skb_vlan_untag" },
	{ 0xe193ad0d, "sysfs_remove_link" },
	{ 0x9c6e0e4a, "ipv6_mc_check_icmpv6" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb18156be, "skb_pull" },
	{ 0xbb1f95e3, "inet_confirm_addr" },
	{ 0x9fd8fcb4, "ipv6_stub" },
	{ 0x3785c132, "init_net" },
	{ 0xc0739e98, "dev_get_port_parent_id" },
	{ 0x36242943, "switchdev_deferred_process" },
	{ 0x7e3191f6, "try_to_del_timer_sync" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x819cae46, "__dev_get_by_index" },
	{ 0xe9478f1f, "__ip_mc_dec_group" },
	{ 0x9ed8133a, "nla_reserve_64bit" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xae91f9fb, "ipv6_dev_get_saddr" },
	{ 0xe01dfded, "sysfs_create_link" },
	{ 0x6a1e5810, "skb_vlan_pop" },
	{ 0x471754f1, "rtnl_set_sk_err" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xc83f964c, "rtnl_af_register" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdc81e95a, "netdev_rx_handler_unregister" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x26ed639, "nla_put_nohdr" },
	{ 0xf05254e5, "passthru_features_check" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa1c0821f, "arp_xmit" },
	{ 0x85021d66, "netdev_port_same_parent_id" },
	{ 0x882672d9, "brioctl_set" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0x20cbb30a, "__percpu_counter_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x73d7d3b1, "__dev_get_by_name" },
	{ 0xdd4dafc6, "netdev_state_change" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0x7e9023a4, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x13cab2e3, "dev_get_iflink" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe3c6d9e8, "sysfs_create_bin_file" },
	{ 0xe2b3207a, "unregister_switchdev_notifier" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x31338857, "dev_uc_del" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x27cb35c3, "__netpoll_free" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x15314fce, "consume_skb" },
	{ 0xea08bafa, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4ad54488, "sysfs_create_file_ns" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x274c5c0a, "call_switchdev_notifiers" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x5df973c6, "ipv6_mc_check_mld" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xfd31315b, "switchdev_port_attr_set" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x72de40e5, "dev_pre_changeaddr_notify" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x4a8fc4ce, "dev_set_mtu" },
	{ 0x51d24a1, "netdev_lower_get_next" },
};

MODULE_INFO(depends, "stp,llc");


MODULE_INFO(srcversion, "33FA921A758597C1D3E588C");
