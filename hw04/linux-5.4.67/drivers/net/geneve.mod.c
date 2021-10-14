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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xd7ea6b34, "gro_find_receive_by_type" },
	{ 0x5d027ee5, "ip_tunnel_get_stats64" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xfc53efbe, "udp_tunnel_notify_del_rx_port" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x66628bf3, "ip_tunnel_metadata_cnt" },
	{ 0xa8b80792, "dst_release" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x2abce662, "udp_tunnel_xmit_skb" },
	{ 0x5c3d2e4e, "dst_cache_set_ip6" },
	{ 0x9e43ce84, "udp_tun_rx_dst" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x184cc313, "dst_cache_get_ip4" },
	{ 0x42bfb37f, "dst_cache_get_ip6" },
	{ 0x87071439, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x698ac60c, "udp_sock_create6" },
	{ 0x461a82b8, "setup_udp_tunnel_sock" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x7a34906f, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x9da0c2a5, "udp_tunnel_sock_release" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc5850110, "printk" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8b98f71f, "udp_tunnel_push_rx_port" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x1b6fcc34, "gro_cells_receive" },
	{ 0x732230f8, "gro_find_complete_by_type" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x9fd8fcb4, "ipv6_stub" },
	{ 0x12ea5cd2, "__skb_get_hash" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xd5dff0b1, "rtnl_configure_link" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xd0f56941, "udp_tunnel_notify_add_rx_port" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xa6017f57, "udp_tunnel_drop_rx_port" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xabbeabde, "iptunnel_handle_offloads" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xbb038948, "ip_route_output_flow" },
	{ 0xbcfe0f, "rtnl_create_link" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4bfaea9a, "gro_cells_init" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x771eb007, "rt6_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x8b4c2536, "udp_tunnel6_xmit_skb" },
	{ 0xf1d84fb2, "dst_cache_set_ip4" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x2fe533a8, "udp_sock_create4" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x15314fce, "consume_skb" },
	{ 0xc2fbda5, "ip6_dst_hoplimit" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "udp_tunnel,ip6_udp_tunnel");


MODULE_INFO(srcversion, "AE27553B3C8E9D251336234");
