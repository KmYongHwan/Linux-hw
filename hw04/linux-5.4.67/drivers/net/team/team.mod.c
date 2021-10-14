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
	{ 0x56ad42a8, "dev_mc_sync_multiple" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1c06f459, "genl_register_family" },
	{ 0xf29362f6, "dev_mc_unsync" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x73adf88d, "dev_disable_lro" },
	{ 0x71227479, "genl_unregister_family" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe0ca8433, "netdev_rx_handler_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xed670f69, "vlan_uses_dev" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x438e7aae, "dev_set_allmulti" },
	{ 0xb41b35dd, "vlan_vid_del" },
	{ 0x8a5087f2, "call_netdevice_notifiers" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf9216c56, "vlan_vid_add" },
	{ 0x3675f171, "__netpoll_setup" },
	{ 0xef4bb87f, "vlan_vids_del_by_dev" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xfc36ed25, "vlan_vids_add_by_dev" },
	{ 0xb4019bcb, "netdev_master_upper_dev_link" },
	{ 0xcbc8de47, "netdev_lower_state_changed" },
	{ 0x83274227, "netdev_change_features" },
	{ 0x7bc9e495, "netpoll_send_skb_on_dev" },
	{ 0xab18f070, "netdev_has_upper_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x40393bfd, "dev_set_mac_address" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x11089ac7, "_ctype" },
	{ 0x78b3951c, "__ethtool_get_link_ksettings" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x988a6c9b, "netdev_upper_dev_unlink" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf04187ce, "dev_close" },
	{ 0xf6523542, "dev_get_by_index" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x53825c19, "netlink_unicast" },
	{ 0x68c256de, "dev_mc_flush" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x638f26ad, "dev_open" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x1e69f17d, "dev_uc_flush" },
	{ 0xf720a60b, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x66593e48, "netlink_broadcast" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdc81e95a, "netdev_rx_handler_unregister" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xf05254e5, "passthru_features_check" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x9fda7d7c, "dev_uc_unsync" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x7e9023a4, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x14e452bc, "dev_uc_sync_multiple" },
	{ 0x789d8622, "genlmsg_put" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x27cb35c3, "__netpoll_free" },
	{ 0x15314fce, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x4a8fc4ce, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4629A44914375A1B79DCA31");
