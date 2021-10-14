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
	{ 0x10347159, "devlink_port_register" },
	{ 0x830c21b3, "phylink_connect_phy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf29362f6, "dev_mc_unsync" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0x68dc92a4, "phylink_of_phy_connect" },
	{ 0x56be148a, "phylink_mii_ioctl" },
	{ 0x62104126, "phylink_ethtool_set_wol" },
	{ 0x3c5f6a30, "dev_uc_add" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdccfdecd, "phylink_ethtool_ksettings_get" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0xf3083a1d, "phylink_destroy" },
	{ 0x14b6ffdc, "mdiobus_get_phy" },
	{ 0x12950e37, "skb_copy" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xee38ef57, "register_switchdev_blocking_notifier" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x438e7aae, "dev_set_allmulti" },
	{ 0x12135396, "phylink_mac_change" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd8415bdc, "devlink_alloc" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x3675f171, "__netpoll_setup" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb18f9eec, "phylink_ethtool_ksettings_set" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3c64ae14, "devm_mdiobus_alloc_size" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x8a516c89, "switchdev_handle_port_obj_add" },
	{ 0x50cbf9c9, "flow_block_cb_alloc" },
	{ 0xad645234, "register_switchdev_notifier" },
	{ 0xe2cecc56, "flow_block_cb_is_busy" },
	{ 0x7bc9e495, "netpoll_send_skb_on_dev" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdcb0a2c0, "phylink_stop" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x8213956, "phylink_ethtool_get_wol" },
	{ 0x57727285, "phylink_ethtool_set_eee" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x6d294e43, "clock_t_to_jiffies" },
	{ 0x3963cf1a, "device_find_child" },
	{ 0xc5850110, "printk" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x911fcd6c, "phylink_start" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x47ebd616, "br_vlan_get_info" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3288e3bb, "phylink_fixed_state_cb" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf04187ce, "dev_close" },
	{ 0x983276da, "phylink_disconnect_phy" },
	{ 0x12bc2eb, "dev_remove_pack" },
	{ 0x8677245d, "unregister_switchdev_blocking_notifier" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x85a04ea2, "devlink_port_unregister" },
	{ 0x224b5164, "vlan_dev_real_dev" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x419c6d4c, "ptp_classify_raw" },
	{ 0xf720a60b, "module_put" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x2c8e28ee, "phylink_ethtool_get_eee" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x6fa426d2, "phylink_ethtool_nway_reset" },
	{ 0x7ea19302, "put_device" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xd19029b0, "switchdev_handle_port_obj_del" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x3883b76, "vlan_for_each" },
	{ 0xcfac4241, "phylink_create" },
	{ 0xe8ed3ce3, "switchdev_handle_port_attr_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xdc9fa232, "raw_notifier_chain_register" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x9fda7d7c, "dev_uc_unsync" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x963cf8c8, "get_device" },
	{ 0xd40c4eda, "devlink_free" },
	{ 0x2075ed1, "devlink_register" },
	{ 0x7e9023a4, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d8789ab, "devlink_port_attrs_set" },
	{ 0xe2b3207a, "unregister_switchdev_notifier" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x31338857, "dev_uc_del" },
	{ 0xc8c728b1, "dev_uc_sync" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x27cb35c3, "__netpoll_free" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x728e29ca, "skb_clone_sk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6b95e068, "dev_add_pack" },
	{ 0xb0e602eb, "memmove" },
	{ 0x15314fce, "consume_skb" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x274c5c0a, "call_switchdev_notifiers" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xa851973a, "raw_notifier_call_chain" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0x33a1ba14, "devlink_unregister" },
	{ 0x579db938, "dev_mc_sync" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xaed0008d, "devlink_port_type_eth_set" },
	{ 0xca8780b, "br_vlan_enabled" },
	{ 0x4a8fc4ce, "dev_set_mtu" },
	{ 0xca6984b1, "flow_block_cb_lookup" },
	{ 0xd06524ba, "raw_notifier_chain_unregister" },
};

MODULE_INFO(depends, "phylink,bridge");


MODULE_INFO(srcversion, "1E2B694A7C7C3CC3DBAF50B");
