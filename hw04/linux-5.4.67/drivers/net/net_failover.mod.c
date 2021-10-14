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
	{ 0x56ad42a8, "dev_mc_sync_multiple" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xd13be7fe, "pci_bus_type" },
	{ 0xf29362f6, "dev_mc_unsync" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xed670f69, "vlan_uses_dev" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0xb41b35dd, "vlan_vid_del" },
	{ 0x8a5087f2, "call_netdevice_notifiers" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xf9216c56, "vlan_vid_add" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xef4bb87f, "vlan_vids_del_by_dev" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xfc36ed25, "vlan_vids_add_by_dev" },
	{ 0xa3c13835, "failover_register" },
	{ 0xcbc8de47, "netdev_lower_state_changed" },
	{ 0x83274227, "netdev_change_features" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xfe64b80a, "netif_tx_stop_all_queues" },
	{ 0x78b3951c, "__ethtool_get_link_ksettings" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xf04187ce, "dev_close" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x638f26ad, "dev_open" },
	{ 0xe04c3b72, "netdev_pick_tx" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf05254e5, "passthru_features_check" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x9fda7d7c, "dev_uc_unsync" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x14e452bc, "dev_uc_sync_multiple" },
	{ 0xf31223bd, "failover_slave_unregister" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x1437460, "failover_unregister" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x6088321e, "dev_get_stats" },
	{ 0x4a8fc4ce, "dev_set_mtu" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "failover");


MODULE_INFO(srcversion, "E623C8FE2A11145245BFE01");
