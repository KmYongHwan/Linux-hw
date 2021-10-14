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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xe5ac607f, "mrp_uninit_applicant" },
	{ 0x83a5b6bb, "dev_change_flags" },
	{ 0x279cabf5, "vlan_filter_push_vids" },
	{ 0xf29362f6, "dev_mc_unsync" },
	{ 0xf08dc72e, "mrp_request_leave" },
	{ 0xba7e7582, "vlan_filter_drop_vids" },
	{ 0xaf95ddb4, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xadfd6f08, "proc_create_single_data" },
	{ 0x9c3e3282, "garp_uninit_applicant" },
	{ 0x4ef31c44, "vlan_dev_vlan_id" },
	{ 0x3c5f6a30, "dev_uc_add" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x556de6e1, "garp_request_join" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xed670f69, "vlan_uses_dev" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xc4142837, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x438e7aae, "dev_set_allmulti" },
	{ 0xb41b35dd, "vlan_vid_del" },
	{ 0x8a5087f2, "call_netdevice_notifiers" },
	{ 0xdb6be758, "linkwatch_fire_event" },
	{ 0xf9216c56, "vlan_vid_add" },
	{ 0x3675f171, "__netpoll_setup" },
	{ 0xbff7fc0c, "garp_init_applicant" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x844f9322, "proc_remove" },
	{ 0xb3692b02, "vlan_ioctl_set" },
	{ 0x7bc9e495, "netpoll_send_skb_on_dev" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x78b3951c, "__ethtool_get_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0x50a4a486, "garp_register_application" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x988a6c9b, "netdev_upper_dev_unlink" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xb2cdf064, "proc_mkdir_data" },
	{ 0x90c556f7, "netif_stacked_transfer_operstate" },
	{ 0x3785c132, "init_net" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x819cae46, "__dev_get_by_index" },
	{ 0x9681c464, "garp_request_leave" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7d81681, "eth_header_parse" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x3a7140a9, "mrp_init_applicant" },
	{ 0x3e49bf8a, "netdev_upper_dev_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35fac541, "proc_create_net_data" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x9fda7d7c, "dev_uc_unsync" },
	{ 0x73d7d3b1, "__dev_get_by_name" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x77e64bdf, "garp_unregister_application" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x7e9023a4, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x389cfb78, "mrp_register_application" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x31338857, "dev_uc_del" },
	{ 0xc8c728b1, "dev_uc_sync" },
	{ 0x27cb35c3, "__netpoll_free" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0xea08bafa, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x7c08f82a, "mrp_unregister_application" },
	{ 0xacd7cf1c, "mrp_request_join" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x579db938, "dev_mc_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x6088321e, "dev_get_stats" },
	{ 0x4a8fc4ce, "dev_set_mtu" },
};

MODULE_INFO(depends, "mrp,garp");


MODULE_INFO(srcversion, "9B6F10924C07FAEE243BFB2");
