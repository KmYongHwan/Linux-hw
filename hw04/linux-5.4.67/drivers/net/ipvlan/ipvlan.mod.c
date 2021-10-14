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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa77bfd29, "register_inet6addr_validator_notifier" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x698c507b, "dev_forward_skb" },
	{ 0x83a5b6bb, "dev_change_flags" },
	{ 0xf29362f6, "dev_mc_unsync" },
	{ 0xc32c71af, "register_inetaddr_validator_notifier" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x76cbebf3, "ip_local_out" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xab63baa5, "unregister_inetaddr_validator_notifier" },
	{ 0xe0ca8433, "netdev_rx_handler_register" },
	{ 0xa8b80792, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x438e7aae, "dev_set_allmulti" },
	{ 0xb41b35dd, "vlan_vid_del" },
	{ 0x8a5087f2, "call_netdevice_notifiers" },
	{ 0xf9216c56, "vlan_vid_add" },
	{ 0x47c65bfc, "unregister_inet6addr_validator_notifier" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x87071439, "skb_scrub_packet" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x78b3951c, "__ethtool_get_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x9674f8f8, "nf_unregister_net_hooks" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x988a6c9b, "netdev_upper_dev_unlink" },
	{ 0x90c556f7, "netif_stacked_transfer_operstate" },
	{ 0xb18156be, "skb_pull" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x819cae46, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xb1d6053b, "ip_route_input_noref" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x5df0f16e, "ip6_route_output_flags" },
	{ 0x5fb4da0a, "nf_register_net_hooks" },
	{ 0x4ac7abba, "eth_header_cache_update" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7d81681, "eth_header_parse" },
	{ 0xdc81e95a, "netdev_rx_handler_unregister" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x3e49bf8a, "netdev_upper_dev_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x9fda7d7c, "dev_uc_unsync" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xbb038948, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0x72dc4514, "eth_header_cache" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xc8c728b1, "dev_uc_sync" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x89ff1e0d, "ip6_local_out" },
	{ 0x15314fce, "consume_skb" },
	{ 0xea08bafa, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x4bf25e51, "netdev_is_rx_handler_busy" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x579db938, "dev_mc_sync" },
	{ 0x72de40e5, "dev_pre_changeaddr_notify" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x7b6fb9ac, "ip6_route_input_lookup" },
	{ 0x4198ca95, "__do_once_done" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "212B3D0C11545A5CB3F5A03");
