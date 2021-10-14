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
	{ 0x9ae2908, "ip6_tnl_get_link_net" },
	{ 0xaadd868d, "ip6_tnl_get_iflink" },
	{ 0x5d027ee5, "ip_tunnel_get_stats64" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x22128ca5, "unregister_pernet_device" },
	{ 0x3cafccfc, "xfrm6_protocol_deregister" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x59ee4286, "xfrm6_protocol_register" },
	{ 0x3e294cf7, "register_pernet_device" },
	{ 0x2356b169, "xfrm6_rcv_tnl" },
	{ 0x631aec1f, "ip6_tnl_rcv_ctl" },
	{ 0xf235770d, "ip6_redirect" },
	{ 0xfe90659f, "__xfrm_state_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x56e1768c, "ip6_update_pmtu" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0x8e377f9e, "xfrm_state_lookup" },
	{ 0xf9778613, "__xfrm_policy_check" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x87071439, "skb_scrub_packet" },
	{ 0x12f43a55, "icmpv6_send" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x5df0f16e, "ip6_route_output_flags" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xee5d0fe, "__icmp_send" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe80456e, "ip6_tnl_xmit_ctl" },
	{ 0x112dfe9e, "xfrm_lookup" },
	{ 0x95952c47, "ip_route_output_key_hash" },
	{ 0xef54d67f, "__xfrm_decode_session" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x754d539c, "strlen" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x3785c132, "init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xdd4dafc6, "netdev_state_change" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa8b80792, "dst_release" },
	{ 0x771eb007, "rt6_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x819cae46, "__dev_get_by_index" },
	{ 0xf9a3452f, "ip6_tnl_get_cap" },
	{ 0xe914e41e, "strcpy" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip6_tunnel");


MODULE_INFO(srcversion, "E3230682B03162C771B69B3");
