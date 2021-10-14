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
	{ 0xc2a4ab9d, "ip_tunnel_get_link_net" },
	{ 0x55562e42, "ip_tunnel_dellink" },
	{ 0x6c5c0618, "ip_tunnel_get_iflink" },
	{ 0x5d027ee5, "ip_tunnel_get_stats64" },
	{ 0xae493906, "ip_tunnel_change_mtu" },
	{ 0x850d180c, "ip_tunnel_uninit" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x22128ca5, "unregister_pernet_device" },
	{ 0x9957e85d, "xfrm4_protocol_deregister" },
	{ 0x6b0e208d, "xfrm4_tunnel_deregister" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x42b76ac4, "xfrm4_tunnel_register" },
	{ 0xf65ac253, "xfrm4_protocol_register" },
	{ 0x3e294cf7, "register_pernet_device" },
	{ 0xc5850110, "printk" },
	{ 0xeaf0d88b, "ip_tunnel_rcv" },
	{ 0x7a34906f, "__iptunnel_pull_header" },
	{ 0x167ad61b, "xfrm_input" },
	{ 0xf9778613, "__xfrm_policy_check" },
	{ 0xee5d0fe, "__icmp_send" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x87071439, "skb_scrub_packet" },
	{ 0x12f43a55, "icmpv6_send" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x95952c47, "ip_route_output_key_hash" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa8b80792, "dst_release" },
	{ 0x112dfe9e, "xfrm_lookup" },
	{ 0x5df0f16e, "ip6_route_output_flags" },
	{ 0xef54d67f, "__xfrm_decode_session" },
	{ 0x20bde20e, "ip_tunnel_init_net" },
	{ 0x2a128693, "ip_tunnel_delete_nets" },
	{ 0xebd2b967, "ipv4_update_pmtu" },
	{ 0xfe90659f, "__xfrm_state_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb0127f23, "ipv4_redirect" },
	{ 0x8e377f9e, "xfrm_state_lookup" },
	{ 0xdd77a686, "ip_tunnel_lookup" },
	{ 0xb629083a, "ip_tunnel_init" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xdc3ee4b3, "ip_tunnel_ioctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x9ae35ed3, "ip_tunnel_setup" },
	{ 0xe023ded8, "ip_tunnel_newlink" },
	{ 0xaa273d99, "ip_tunnel_changelink" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");


MODULE_INFO(srcversion, "E0011F03B3DE39875F93978");
