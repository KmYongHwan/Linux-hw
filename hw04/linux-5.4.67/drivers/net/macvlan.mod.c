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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x698c507b, "dev_forward_skb" },
	{ 0xf29362f6, "dev_mc_unsync" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3c5f6a30, "dev_uc_add" },
	{ 0xbef56c0e, "__dev_forward_skb" },
	{ 0x406934c6, "dev_mc_add_excl" },
	{ 0xe0ca8433, "netdev_rx_handler_register" },
	{ 0xc74f6f7d, "dev_uc_add_excl" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x438e7aae, "dev_set_allmulti" },
	{ 0xb41b35dd, "vlan_vid_del" },
	{ 0x8a5087f2, "call_netdevice_notifiers" },
	{ 0xdb6be758, "linkwatch_fire_event" },
	{ 0xf9216c56, "vlan_vid_add" },
	{ 0x3675f171, "__netpoll_setup" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x7bc9e495, "netpoll_send_skb_on_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0x40393bfd, "dev_set_mac_address" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x4efd79f0, "ip_check_defrag" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x78b3951c, "__ethtool_get_link_ksettings" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa5c8e942, "dev_mc_del" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x988a6c9b, "netdev_upper_dev_unlink" },
	{ 0x11a3a74, "ndo_dflt_fdb_dump" },
	{ 0x90c556f7, "netif_stacked_transfer_operstate" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x3785c132, "init_net" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x819cae46, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x4ac7abba, "eth_header_cache_update" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdc81e95a, "netdev_rx_handler_unregister" },
	{ 0x7d81681, "eth_header_parse" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xf05254e5, "passthru_features_check" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3e49bf8a, "netdev_upper_dev_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x9fda7d7c, "dev_uc_unsync" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x7e9023a4, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x810f98c3, "dev_change_proto_down_generic" },
	{ 0x72dc4514, "eth_header_cache" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x31338857, "dev_uc_del" },
	{ 0xc8c728b1, "dev_uc_sync" },
	{ 0x27cb35c3, "__netpoll_free" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x15314fce, "consume_skb" },
	{ 0xea08bafa, "netdev_update_features" },
	{ 0x5312f71, "dev_queue_xmit_accel" },
	{ 0x4bf25e51, "netdev_is_rx_handler_busy" },
	{ 0x579db938, "dev_mc_sync" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x4a8fc4ce, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9D37EBBED69D1EBDA3940F8");
