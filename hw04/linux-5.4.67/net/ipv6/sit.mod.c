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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc2a4ab9d, "ip_tunnel_get_link_net" },
	{ 0x6c5c0618, "ip_tunnel_get_iflink" },
	{ 0x5d027ee5, "ip_tunnel_get_stats64" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x42b76ac4, "xfrm4_tunnel_register" },
	{ 0x3e294cf7, "register_pernet_device" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x22128ca5, "unregister_pernet_device" },
	{ 0x6b0e208d, "xfrm4_tunnel_deregister" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x12f43a55, "icmpv6_send" },
	{ 0xf1d84fb2, "dst_cache_set_ip4" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf7f9254d, "iptunnel_xmit" },
	{ 0xe5850d1b, "iptun_encaps" },
	{ 0x15314fce, "consume_skb" },
	{ 0xdd9cd2ad, "skb_set_owner_w" },
	{ 0x55f384b9, "skb_realloc_headroom" },
	{ 0x184cc313, "dst_cache_get_ip4" },
	{ 0x37dde473, "neigh_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xc5850110, "printk" },
	{ 0xcece2b87, "ipv6_chk_prefix" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x45a65cb, "ipv6_chk_custom_prefix" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x819cae46, "__dev_get_by_index" },
	{ 0xa8b80792, "dst_release" },
	{ 0xbb038948, "ip_route_output_flow" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xeaf0d88b, "ip_tunnel_rcv" },
	{ 0xf9778613, "__xfrm_policy_check" },
	{ 0x7a34906f, "__iptunnel_pull_header" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xfd1f43, "ip_tunnel_xmit" },
	{ 0xabbeabde, "iptunnel_handle_offloads" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x3785c132, "init_net" },
	{ 0xb68bce04, "ip_tunnel_encap_setup" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x754d539c, "strlen" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb0127f23, "ipv4_redirect" },
	{ 0x6830cadb, "ip6_err_gen_icmpv6_unreach" },
	{ 0xebd2b967, "ipv4_update_pmtu" },
	{ 0x56470118, "__warn_printk" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdd4dafc6, "netdev_state_change" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");


MODULE_INFO(srcversion, "CF3D9714B0344C39A71FFF9");
