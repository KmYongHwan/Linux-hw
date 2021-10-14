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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xf591753d, "nf_hooks_needed" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x9fd8fcb4, "ipv6_stub" },
	{ 0x15314fce, "consume_skb" },
	{ 0xdd9cd2ad, "skb_set_owner_w" },
	{ 0x55f384b9, "skb_realloc_headroom" },
	{ 0xee0c6453, "arp_tbl" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaa93d096, "__neigh_create" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa60ebde7, "nd_tbl" },
	{ 0x69364662, "inet_select_addr" },
	{ 0xbb038948, "ip_route_output_flow" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x545a9fbb, "ip6_dst_lookup_flow" },
	{ 0xcf613d, "ip6_dst_alloc" },
	{ 0x89156309, "fib6_new_table" },
	{ 0xf899ac7b, "rt_dst_alloc" },
	{ 0xc80e46e9, "fib_new_table" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xb18156be, "skb_pull" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x1e0451f2, "dev_queue_xmit_nit" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0xb4019bcb, "netdev_master_upper_dev_link" },
	{ 0xc7a66ee, "netdev_master_upper_dev_get" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0x51d24a1, "netdev_lower_get_next" },
	{ 0x988a6c9b, "netdev_upper_dev_unlink" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x83a5b6bb, "dev_change_flags" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xa8b80792, "dst_release" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x46a8862b, "nf_hook_slow" },
	{ 0x8a02b38d, "ip6_pol_route" },
	{ 0xa0539423, "fib_nl_delrule" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x64d0a5b, "fib_nl_newrule" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3C0B77D675A576BED9E544E");
