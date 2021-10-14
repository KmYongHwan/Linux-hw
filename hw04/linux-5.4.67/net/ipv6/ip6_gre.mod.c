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
	{ 0x9ae2908, "ip6_tnl_get_link_net" },
	{ 0xaadd868d, "ip6_tnl_get_iflink" },
	{ 0x5d027ee5, "ip_tunnel_get_stats64" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x22128ca5, "unregister_pernet_device" },
	{ 0x49e6d078, "inet6_del_protocol" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x417488f5, "inet6_add_protocol" },
	{ 0x3e294cf7, "register_pernet_device" },
	{ 0xc5850110, "printk" },
	{ 0x8ddcee7d, "___pskb_trim" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xee5d0fe, "__icmp_send" },
	{ 0xabbeabde, "iptunnel_handle_offloads" },
	{ 0xe80456e, "ip6_tnl_xmit_ctl" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xa1027c17, "skb_checksum" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0x347a84eb, "ip6_tnl_xmit" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xdd4dafc6, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xa4804561, "ip6_tnl_rcv" },
	{ 0x5b6ed908, "metadata_dst_alloc" },
	{ 0x7a34906f, "__iptunnel_pull_header" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x56e1768c, "ip6_update_pmtu" },
	{ 0xf235770d, "ip6_redirect" },
	{ 0x3f233a14, "gre_parse_header" },
	{ 0x12f43a55, "icmpv6_send" },
	{ 0xb48e3967, "ip6_tnl_parse_tlv_enc_lim" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0xf3509719, "__get_hash_from_flowi6" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x8eb2d047, "ip6_tnl_encap_setup" },
	{ 0x8e0e29c3, "ip6_tnl_change_mtu" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x3785c132, "init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x754d539c, "strlen" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xa8b80792, "dst_release" },
	{ 0x771eb007, "rt6_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xf9a3452f, "ip6_tnl_get_cap" },
	{ 0x4bfaea9a, "gro_cells_init" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xe914e41e, "strcpy" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip6_tunnel,gre");


MODULE_INFO(srcversion, "C20FEEC13A429BFABF3DBC6");
