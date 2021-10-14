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
	{ 0x12f43a55, "icmpv6_send" },
	{ 0x5b472a39, "xfrm6_tunnel_deregister" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x3e294cf7, "register_pernet_device" },
	{ 0x754d539c, "strlen" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa8b80792, "dst_release" },
	{ 0x5b6ed908, "metadata_dst_alloc" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5c3d2e4e, "dst_cache_set_ip6" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xdd9cd2ad, "skb_set_owner_w" },
	{ 0x37dde473, "neigh_destroy" },
	{ 0xee5d0fe, "__icmp_send" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x55f384b9, "skb_realloc_headroom" },
	{ 0x87071439, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xf235770d, "ip6_redirect" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7a34906f, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc5850110, "printk" },
	{ 0x22128ca5, "unregister_pernet_device" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xe75f638, "dst_cache_get" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x1b6fcc34, "gro_cells_receive" },
	{ 0x91b9215a, "dev_get_by_index_rcu" },
	{ 0xb18156be, "skb_pull" },
	{ 0x3785c132, "init_net" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xae91f9fb, "ipv6_dev_get_saddr" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xb1d6053b, "ip_route_input_noref" },
	{ 0x60cb8935, "ipv6_chk_addr_and_flags" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x5df0f16e, "ip6_route_output_flags" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0xf3509719, "__get_hash_from_flowi6" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x56e1768c, "ip6_update_pmtu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdd4dafc6, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xabbeabde, "iptunnel_handle_offloads" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xbb038948, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4bfaea9a, "gro_cells_init" },
	{ 0xf9778613, "__xfrm_policy_check" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x771eb007, "rt6_lookup" },
	{ 0xc70b563, "ip6tun_encaps" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x89ff1e0d, "ip6_local_out" },
	{ 0x15314fce, "consume_skb" },
	{ 0xc2fbda5, "ip6_dst_hoplimit" },
	{ 0xf037cda0, "xfrm6_tunnel_register" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x112dfe9e, "xfrm_lookup" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x8a8d466a, "ipv6_push_frag_opts" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "tunnel6");


MODULE_INFO(srcversion, "EC003C15B9FF5168041CFF4");
