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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3e294cf7, "register_pernet_device" },
	{ 0x5d027ee5, "ip_tunnel_get_stats64" },
	{ 0x6c5c0618, "ip_tunnel_get_iflink" },
	{ 0xa8b80792, "dst_release" },
	{ 0x5b6ed908, "metadata_dst_alloc" },
	{ 0xebd2b967, "ipv4_update_pmtu" },
	{ 0xdd77a686, "ip_tunnel_lookup" },
	{ 0x11649f87, "__ip_tunnel_change_mtu" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xee5d0fe, "__icmp_send" },
	{ 0xfd1f43, "ip_tunnel_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x400364ce, "inetdev_by_index" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7a34906f, "__iptunnel_pull_header" },
	{ 0x9ae35ed3, "ip_tunnel_setup" },
	{ 0x55562e42, "ip_tunnel_dellink" },
	{ 0xa1027c17, "skb_checksum" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x2a128693, "ip_tunnel_delete_nets" },
	{ 0x38ceb1b7, "gre_add_protocol" },
	{ 0xe023ded8, "ip_tunnel_newlink" },
	{ 0xc5850110, "printk" },
	{ 0x22128ca5, "unregister_pernet_device" },
	{ 0x850d180c, "ip_tunnel_uninit" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xf331c282, "gre_del_protocol" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xb629083a, "ip_tunnel_init" },
	{ 0xc2a4ab9d, "ip_tunnel_get_link_net" },
	{ 0xb18156be, "skb_pull" },
	{ 0x12ea5cd2, "__skb_get_hash" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0xdc3ee4b3, "ip_tunnel_ioctl" },
	{ 0xe9478f1f, "__ip_mc_dec_group" },
	{ 0x494e34a, "ip_md_tunnel_xmit" },
	{ 0xaa273d99, "ip_tunnel_changelink" },
	{ 0xd5dff0b1, "rtnl_configure_link" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xb0127f23, "ipv4_redirect" },
	{ 0x7784acf4, "ip_mc_inc_group" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x20bde20e, "ip_tunnel_init_net" },
	{ 0xabbeabde, "iptunnel_handle_offloads" },
	{ 0xbb038948, "ip_route_output_flow" },
	{ 0xbcfe0f, "rtnl_create_link" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x6830cadb, "ip6_err_gen_icmpv6_unreach" },
	{ 0x8ddcee7d, "___pskb_trim" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0xb68bce04, "ip_tunnel_encap_setup" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xae493906, "ip_tunnel_change_mtu" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3f233a14, "gre_parse_header" },
	{ 0xeaf0d88b, "ip_tunnel_rcv" },
};

MODULE_INFO(depends, "ip_tunnel,gre");


MODULE_INFO(srcversion, "B456B8545B0EC0034496388");
